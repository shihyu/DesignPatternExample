package cn.javass.dp.state.example3;

public class Client {
	public static void main(String[] args) {
		VoteManager vm = new VoteManager();
		for(int i=0;i<8;i++){
			vm.vote("u1", "A");
		}
	}
}
