package cn.javass.dp.mediator.example2;
/**
 * 主板类，实现中介者接口
 */
public class MotherBoard implements Mediator{
	/**
	 * 需要知道要交互的同事类——光驱类
	 */
	private CDDriver cdDriver = null;
	/**
	 * 需要知道要交互的同事类——CPU类
	 */
	private CPU cpu = null;
	/**
	 * 需要知道要交互的同事类——显卡类
	 */
	private VideoCard videoCard = null;
	/**
	 * 需要知道要交互的同事类——声卡类
	 */
	private SoundCard soundCard = null;

	public void setCdDriver(CDDriver cdDriver) {
		this.cdDriver = cdDriver;
	}
	public void setCpu(CPU cpu) {
		this.cpu = cpu;
	}
	public void setVideoCard(VideoCard videoCard) {
		this.videoCard = videoCard;
	}
	public void setSoundCard(SoundCard soundCard) {
		this.soundCard = soundCard;
	}
	
	public void changed(Colleague colleague) {
		if(colleague == cdDriver){
			//表示光驱读取数据了
			this.opeCDDriverReadData((CDDriver)colleague);
		}else if(colleague == cpu){
			//表示CPU处理完了
			this.opeCPU((CPU)colleague);
		}
	}
	/**
	 * 处理光驱读取数据过后与其他对象的交互
	 * @param cd 光驱同事对象
	 */
	private void opeCDDriverReadData(CDDriver cd){
		//1：先获取光驱读取的数据
		String data = cd.getData();
		//2：把这些数据传递给CPU进行处理
		this.cpu.executeData(data);
	}
	/**
	 * 处理CPU处理完数据后与其他对象的交互
	 * @param cpu CPU同事类
	 */
	private void opeCPU(CPU cpu){
		//1：先获取CPU处理过后的数据
		String videoData = cpu.getVideoData();
		String soundData = cpu.getSoundData();
		//2：把这些数据传递给显卡和声卡展示出来
		this.videoCard.showData(videoData);
		this.soundCard.soundData(soundData);
	}
	
}
