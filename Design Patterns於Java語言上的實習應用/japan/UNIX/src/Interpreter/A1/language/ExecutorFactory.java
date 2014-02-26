package language;

public interface ExecutorFactory {
    public abstract Executor createExecutor(String name);
}
