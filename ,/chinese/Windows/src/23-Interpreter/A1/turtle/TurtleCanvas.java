package turtle;

import language.Executor;
import language.ExecutorFactory;
import java.awt.*;

public class TurtleCanvas extends Canvas implements ExecutorFactory {
    final static int UNIT_LENGTH = 30;  // 移動時的長度單位
    final static int DIRECTION_UP = 0; // 往上
    final static int DIRECTION_RIGHT = 3; // 往右
    final static int DIRECTION_DOWN = 6; // 往下
    final static int DIRECTION_LEFT = 9; // 往左
    final static int RELATIVE_DIRECTION_RIGHT = 3; // 往右
    final static int RELATIVE_DIRECTION_LEFT = -3; // 往左
    final static int RADIUS = 3; // 半徑
    private int direction = 0;
    private Point position;
    public TurtleCanvas(int width, int height) {
        setSize(width, height);
        initialize();
    }
    void setRelativeDirection(int relativeDirection) {
        setDirection(direction + relativeDirection);
    }
    void setDirection(int direction) {
        if (direction < 0) {
            direction = 12 - (-direction) % 12;
        } else {
            direction = direction % 12;
        }
        this.direction = direction % 12;
    }
    void go(int length) {
        int newx = position.x;
        int newy = position.y;
        switch (direction) {
        case DIRECTION_UP:
            newy -= length;
            break;
        case DIRECTION_RIGHT:
            newx += length;
            break;
        case DIRECTION_DOWN:
            newy += length;
            break;
        case DIRECTION_LEFT:
            newx -= length;
            break;
        default:
            break;
        }
        Graphics g = getGraphics();
        if (g != null) {
            g.drawLine(position.x, position.y, newx, newy);
            g.fillOval(newx - RADIUS, newy - RADIUS, RADIUS * 2 + 1, RADIUS * 2 + 1);
        }
        position.x = newx;
        position.y = newy;
    }
    public Executor createExecutor(String name) {
        if (name.equals("go")) {
            return new GoExecutor(this);
        } else if (name.equals("right")) {
            return new DirectionExecutor(this, RELATIVE_DIRECTION_RIGHT);
        } else if (name.equals("left")) {
            return new DirectionExecutor(this, RELATIVE_DIRECTION_LEFT);
        } else {
            return null;
        }
    }
    public void initialize() {
        Dimension size = getSize();
        position = new Point(size.width / 2, size.height / 2);
        direction = 0;
        setForeground(Color.red);
        setBackground(Color.white);
        Graphics g = getGraphics();
        if (g != null) {
            g.clearRect(0, 0, size.width, size.height);
        }
    }
}

abstract class TurtleExecutor implements Executor {
    protected TurtleCanvas canvas;
    public TurtleExecutor(TurtleCanvas canvas) {
        this.canvas = canvas;
    }
    public abstract void execute();
}

class GoExecutor extends TurtleExecutor {
    public GoExecutor(TurtleCanvas canvas) {
        super(canvas);
    }
    public void execute() {
        canvas.go(TurtleCanvas.UNIT_LENGTH);
    }
}

class DirectionExecutor extends TurtleExecutor {
    private int relativeDirection;
    public DirectionExecutor(TurtleCanvas canvas, int relativeDirection) {
        super(canvas);
        this.relativeDirection = relativeDirection;
    }
    public void execute() {
        canvas.setRelativeDirection(relativeDirection);
    }
}
