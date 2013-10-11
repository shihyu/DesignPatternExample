package cn.javass.dp.mediator.example2;
/**
 * CPU类，一个同事类
 */
public class CPU extends Colleague{
	public CPU(Mediator mediator) {
		super(mediator);
	}
	/**
	 * 分解出来的视频数据
	 */
	private String videoData = "";
	/**
	 * 分解出来的声音数据
	 */
	private String soundData = "";
	/**
	 * 获取分解出来的视频数据
	 * @return 分解出来的视频数据
	 */
	public String getVideoData() {
		return videoData;
	}
	/**
	 * 获取分解出来的声音数据
	 * @return 分解出来的声音数据
	 */
	public String getSoundData() {
		return soundData;
	}
	/**
	 * 处理数据，把数据分成音频和视频的数据
	 * @param data 被处理的数据
	 */
	public void executeData(String data){
		//把数据分解开，前面的是视频数据，后面的是音频数据
		String [] ss = data.split(",");
		this.videoData = ss[0];
		this.soundData = ss[1];
		//通知主板，CPU的工作完成
		this.getMediator().changed(this);
	}
	
}
