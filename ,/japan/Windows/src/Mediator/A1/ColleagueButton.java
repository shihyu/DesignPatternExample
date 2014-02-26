import java.awt.Button;

public class ColleagueButton extends Button implements Colleague {
    private Mediator mediator;
    public ColleagueButton(String caption) {
        super(caption);
    }
    public void setMediator(Mediator mediator) {            // Mediator‚ğ•Û
        this.mediator = mediator;
    }
    public void setColleagueEnabled(boolean enabled) {      // Mediator‚©‚ç—LŒø/–³Œø‚ªw¦‚³‚ê‚é
        setEnabled(enabled);
    }
}
