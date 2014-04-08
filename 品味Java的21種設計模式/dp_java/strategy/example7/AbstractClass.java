package cn.javass.dp.strategy.example7;

public abstract class AbstractClass implements Strategy {

    public void algorithmInterface() {
        stepOneOpe();
        stepTwoOpe();
        stepThreeOpe();
    }
    private void stepThreeOpe() {}
    protected abstract void stepOneOpe();
    protected abstract void stepTwoOpe();
}
