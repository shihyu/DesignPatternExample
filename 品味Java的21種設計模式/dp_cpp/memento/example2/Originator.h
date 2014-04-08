#pragma once

#include "Memento.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example2 {

///
/// <summary> * 原发器对象 </summary>
///
class Originator {
    ///
    ///  <summary> * 示意，表示原发器的状态 </summary>
    ///
private:
    std::string state;
    ///
    ///  <summary> * 创建保存原发器对象的状态的备忘录对象 </summary>
    ///  * <returns> 创建好的备忘录对象 </returns>
    ///
public:
    virtual Memento *createMemento();
    ///
    ///  <summary> * 重新设置原发器对象的状态，让其回到备忘录对象记录的状态 </summary>
    ///  * <param name="memento"> 记录有原发器状态的备忘录对象 </param>
    ///
    virtual void setMemento(Memento *memento);
    ///
    ///  <summary> * 真正的备忘录对象，实现备忘录窄接口
    ///  * 实现成私有的内部类，不让外部访问 </summary>
    ///
private:
    class MementoImpl : public Memento {
        ///
        ///      <summary> * 示意，表示需要保存的状态 </summary>
        ///
    private:
        std::string state;
    public:
        MementoImpl(std::string state);
        virtual std::string getState();

    private:
        bool initialized;
        void InitializeInstanceFields() {
            if (! initialized) {
                state = "";

                initialized = true;
            }
        }
    };


private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            state = "";

            initialized = true;
        }
    }

public:
    Originator() {
        InitializeInstanceFields();
    }
};


}
}
}
}
}