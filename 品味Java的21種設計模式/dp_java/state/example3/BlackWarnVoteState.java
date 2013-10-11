package cn.javass.dp.state.example3;

public class BlackWarnVoteState implements VoteState{
	public void vote(String user, String voteItem, VoteManager voteManager) {
		//待进黑名单警告状态
		System.out.println("禁止登录和使用系统3天");
	}
}
