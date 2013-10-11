package cn.javass.dp.state.example3;
/**
 * 封装一个投票状态相关的行为
 */
public interface VoteState {
	/**
	 * 处理状态对应的行为
	 * @param user 投票人
	 * @param voteItem 投票项
	 * @param voteManager 投票上下文，用来在实现状态对应的功能处理的时候，
	 *                    可以回调上下文的数据
	 */
	public void vote(String user,String voteItem,VoteManager voteManager);
}