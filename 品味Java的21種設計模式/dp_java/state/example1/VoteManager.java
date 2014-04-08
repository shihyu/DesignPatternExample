package cn.javass.dp.state.example1;
import java.util.*;
/**
 * 投票管理
 */
public class VoteManager {
    /**
     * 记录用户投票的结果,Map<String,String>对应Map<用户名称,投票的选项>
     */
    private Map<String, String> mapVote = new HashMap<String, String>();
    /**
     * 记录用户投票次数,Map<String,Integer>对应Map<用户名称,投票的次数>
     */
    private Map<String, Integer> mapVoteCount = new HashMap<String, Integer>();
    /**
     * 投票
     * @param user 投票人，为了简单，就是用户名称
     * @param voteItem 投票的选项
     */
    public void vote(String user, String voteItem) {
        //1：先为该用户增加投票的次数
        //先从记录中取出已有的投票次数
        Integer oldVoteCount = mapVoteCount.get(user);

        if (oldVoteCount == null) {
            oldVoteCount = 0;
        }

        oldVoteCount = oldVoteCount + 1;
        mapVoteCount.put(user, oldVoteCount);

        //2：判断该用户投票的类型，到底是正常投票、重复投票、恶意投票还是上黑名单
        //然后根据投票类型来进行相应的操作
        if (oldVoteCount == 1) {
            //正常投票
            //记录到投票记录中
            mapVote.put(user, voteItem);
            System.out.println("恭喜你投票成功");
        } else if (oldVoteCount > 1 && oldVoteCount < 5) {
            //重复投票
            //暂时不做处理
            System.out.println("请不要重复投票");
        } else if (oldVoteCount >= 5 && oldVoteCount < 8) {
            //恶意投票
            //取消用户的投票资格，并取消投票记录
            String s = mapVote.get(user);

            if (s != null) {
                mapVote.remove(user);
            }

            System.out.println("你有恶意刷票行为，取消投票资格");
        } else if (oldVoteCount >= 8) {
            //黑名单
            //记入黑名单中，禁止登录系统了
            System.out.println("进入黑名单，将禁止登录和使用本系统");
        }
    }
}
