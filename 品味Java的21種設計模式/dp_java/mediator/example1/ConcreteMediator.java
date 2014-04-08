package cn.javass.dp.mediator.example1;
/**
 * 具体的中介者实现
 */
public class ConcreteMediator implements Mediator {

    /**
     * 持有并维护同事A
     */
    private ConcreteColleagueA colleagueA;
    /**
     * 持有并维护同事B
     */
    private ConcreteColleagueB colleagueB;

    /**
     * 设置中介者需要了解并维护的同事A对象
     * @param colleague 同事A对象
     */
    public void setConcreteColleagueA(ConcreteColleagueA colleague) {
        colleagueA = colleague;
    }
    /**
     * 设置中介者需要了解并维护的同事B对象
     * @param colleague 同事B对象
     */
    public void setConcreteColleagueB(ConcreteColleagueB colleague) {
        colleagueB = colleague;
    }

    public void changed(Colleague colleague) {
        //某个同事类发生了变化，通常需要与其他同事交户
        //具体协调相应的同事对象来实现协作行为
    }

}
