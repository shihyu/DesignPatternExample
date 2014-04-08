package cn.javass.dp.state.example5;

public class RepeatVoteState implements VoteState {
    public void vote(String user, String voteItem, VoteManager voteManager) {
        //重复投票
        //暂时不做处理
        System.out.println("请不要重复投票");

        //重复投票完成，维护下一个状态，重复投票到5次，就算恶意投票了
        //注意这里是判断大于等于4，因为这里设置的是下一个状态
        //下一个操作次数就是5了，就应该算是恶意投票了
        if (voteManager.getMapVoteCount().get(user) >= 4) {
            voteManager.getMapState().put(user, new SpiteVoteState());
            //直接把下一个状态的编码记录入数据库就好了
        }
    }
}