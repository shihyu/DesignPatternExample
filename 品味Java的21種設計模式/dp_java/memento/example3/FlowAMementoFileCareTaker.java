package cn.javass.dp.memento.example3;

import java.io.*;
/**
 * 负责在文件中保存模拟运行流程A的对象的备忘录对象
 */
public class FlowAMementoFileCareTaker {

    /**
     * 保存备忘录对象
     * @param memento 被保存的备忘录对象
     */
    public void saveMemento(FlowAMockMemento memento) {
        //写到文件中
        ObjectOutputStream out = null;

        try {
            out = new ObjectOutputStream(
                new BufferedOutputStream(
                    new FileOutputStream("FlowAMemento")
                )
            );
            out.writeObject(memento);
        } catch (Exception err) {
            err.printStackTrace();
        }

        finally {
            try {
                out.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
    /**
     * 获取被保存的备忘录对象
     * @return 被保存的备忘录对象
     */
    public FlowAMockMemento retriveMemento() {
        FlowAMockMemento memento = null;
        //从文件中获取备忘录数据
        ObjectInputStream in = null;

        try {
            in = new ObjectInputStream(
                new BufferedInputStream(
                    new FileInputStream("FlowAMemento")
                )
            );
            memento = (FlowAMockMemento)in.readObject();
        } catch (Exception err) {
            err.printStackTrace();
        }

        finally {
            try {
                in.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return memento;
    }
}
