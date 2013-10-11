package cn.javass.dp.builder.example2;

/**
 * 构建器接口，定义创建一个产品对象所需的各个部件的操作
 */
public interface Builder {
	/**
	 * 示意方法，构建某个部件
	 */
	public void buildPart();
}