package cn.javass.dp.interpreter.example5;
/**
 * 用来封装每一个解析出来的元素对应的属性
 */
public class ParserModel {
	/**
	 * 是否单个值
	 */
	private boolean singleVlaue;
	/**
	 * 是否属性，不是属性就是元素
	 */
	private boolean propertyValue;
	/**
	 * 是否终结符
	 */
	private boolean end;
	public boolean isEnd() {
		return end;
	}
	public void setEnd(boolean end) {
		this.end = end;
	}
	public boolean isSingleVlaue() {
		return singleVlaue;
	}
	public void setSingleVlaue(boolean oneVlaue) {
		this.singleVlaue = oneVlaue;
	}
	public boolean isPropertyValue() {
		return propertyValue;
	}
	public void setPropertyValue(boolean propertyValue) {
		this.propertyValue = propertyValue;
	}
}
