package com.demo.caretaker;

import com.demo.memento.INarrowMemento;

/**
 * 管理者
 * 
 * @author
 * 
 */
public class Caretaker {
	private INarrowMemento memento;

	/**
	 * 获得备忘录对象
	 * 
	 * @return
	 */
	public INarrowMemento getMemento() {
		return memento;
	}

	/**
	 * 保存备忘录对象
	 * 
	 * @param memento
	 */
	public void setMemento(INarrowMemento memento) {
		this.memento = memento;
	}

}
