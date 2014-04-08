package cn.javass.dp.state.example5;
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
     * 获取记录每个用户对应的状态处理对象的Map
     * @return 记录每个用户对应的状态处理对象的Map
     */
    public Map<String, VoteState> getMapState() {
        return mapState;
    }
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
    public void vote(String user, String voteItem)throws Exception {
        //1：先为该用户增加投票的次数
        //先从记录中取出已有的投票次数
        Integer oldVoteCount = mapVoteCount.get(user);

        if (oldVoteCount == null) {
            oldVoteCount = 0;
        }

        oldVoteCount = oldVoteCount + 1;
        mapVoteCount.put(user, oldVoteCount);

        VoteState state = null;
        //2：直接从数据库获取该用户对应的下一个状态的状态编码
        String stateId = "从数据库中获取这个值";
        //开始根据状态编码来创建需用的状态对象

        //根据状态编码去获取相应的类
        String className = "根据状态编码去获取相应的类";
        //使用反射创建对象实例，简单示意一下
        Class c = Class.forName(className);
        state = (VoteState)c.newInstance();

        if ("正常投票".equals(stateId)) {
            state = new NormalVoteState();
        } else if ("重复投票".equals(stateId)) {
            state = new RepeatVoteState();
        } else if ("恶意投票".equals(stateId)) {
            state = new SpiteVoteState();
        } else if ("黑名单".equals(stateId)) {
            state = new BlackVoteState();
        }

        //然后转调状态对象来进行相应的操作
        state.vote(user, voteItem, this);
    }
}
