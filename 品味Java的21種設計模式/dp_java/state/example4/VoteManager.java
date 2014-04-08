package cn.javass.dp.state.example4;
import java.util.*;
/**
 * 投票管理
 */
public class VoteManager {
    /**
     * 记录当前每个用户对应的状态处理对象，每个用户当前的状态是不同的
     * Map<String,VoteState>对应Map<用户名称,当前对应的状态处理对象>
     */
    private Map<String, VoteState> mapState = new HashMap<String, VoteState>();

    /**
     * 记录用户投票的结果,Map<String,String>对应Map<用户名称,投票的选项>
     */
    private Map<String, String> mapVote = new HashMap<String, String>();
    /**
     * 记录用户投票次数,Map<String,Integer>对应Map<用户名称,投票的次数>
     */
    private Map<String, Integer> mapVoteCount = new HashMap<String, Integer>();


    /**
     * 获取记录用户投票结果的Map
     * @return 记录用户投票结果的Map
     */
    public Map<String, String> getMapVote() {
        return mapVote;
    }
    /**
     * 获取记录每个用户对应的状态处理对象的Map
     * @return 记录每个用户对应的状态处理对象的Map
     */
    public Map<String, VoteState> getMapState() {
        return mapState;
    }
    /**
     * 获取记录每个用户对应的投票次数的Map
     * @return 记录每个用户对应的投票次数的Map
     */
    public Map<String, Integer> getMapVoteCount() {
        return mapVoteCount;
    }
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

        //2：获取该用户的投票状态
        VoteState state = mapState.get(user);

        //如果没有投票状态，说明还没有投过票，就初始化一个正常投票状态
        if (state == null) {
            state = new NormalVoteState();
        }

        //然后转调状态对象来进行相应的操作
        state.vote(user, voteItem, this);
    }
}
