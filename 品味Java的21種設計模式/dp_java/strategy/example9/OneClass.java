package cn.javass.dp.strategy.example9;

public class OneClass {
	/**
	 * 示范多重条件语句
	 * @param type 某个用于判断的类型
	 */
	public void oneMethod(int type){
		if(type==1){
			//算法一示范
			//从某个地方获取这个s的值
			String s = "";
			//然后判断进行相应处理
			if(s.indexOf("a") > 0){
				//处理
			}else{
				//处理
			}
		}else if(type==2){
			//算法二示范
			//从某个地方获取这个a的值
			int a = 3;
			//然后判断进行相应处理
			if(a > 10){
				//处理
			}else{
				//处理
			}
		}
	}
}
