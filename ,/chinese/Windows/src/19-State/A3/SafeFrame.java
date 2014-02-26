import java.awt.Frame; 
import java.awt.Label; 
import java.awt.Color; 
import java.awt.Button; 
import java.awt.TextField; 
import java.awt.TextArea; 
import java.awt.Panel; 
import java.awt.BorderLayout; 
import java.awt.event.ActionListener; 
import java.awt.event.ActionEvent; 
 
public class SafeFrame extends Frame implements ActionListener, Context { 
    private TextField textClock = new TextField(60);	// 輸出現在時間 
    private TextArea textScreen = new TextArea(10, 60);	// 輸出保全中心 
    private Button buttonUse = new Button("使用金庫");	// 使用金庫的按鍵 
    private Button buttonAlarm = new Button("警鈴");	// 警鈴的按鍵 
    private Button buttonPhone = new Button("一般通話");	// 一般通話的按鍵 
    private Button buttonExit = new Button("結束");		// 結束的按鍵 
 
    private State state = DayState.getInstance();		// 現在狀態 
 
    // 建構子 
    public SafeFrame(String title) { 
        super(title); 
        setBackground(Color.lightGray); 
        setLayout(new BorderLayout()); 
        // 輸出textClock 
        add(textClock, BorderLayout.NORTH); 
        textClock.setEditable(false); 
        // 輸出textScreen 
        add(textScreen, BorderLayout.CENTER); 
        textScreen.setEditable(false); 
        // 把按鍵放到面板上 
        Panel panel = new Panel(); 
        panel.add(buttonUse); 
        panel.add(buttonAlarm); 
        panel.add(buttonPhone); 
        panel.add(buttonExit); 
        // 輸出面板 
        add(panel, BorderLayout.SOUTH); 
        // 輸出到畫面上 
        pack(); 
        show(); 
        // 設定聽命令者 
        buttonUse.addActionListener(this); 
        buttonAlarm.addActionListener(this); 
        buttonPhone.addActionListener(this); 
        buttonExit.addActionListener(this); 
    } 
    // 若有人按下按鍵，則跳到這裡 
    public void actionPerformed(ActionEvent e) { 
        System.out.println("" + e); 
        if (e.getSource() == buttonUse) {           // 使用金庫的按鍵 
            state.doUse(this); 
        } else if (e.getSource() == buttonAlarm) {  // 警鈴的按鍵 
            state.doAlarm(this); 
        } else if (e.getSource() == buttonPhone) {  // 一般通話的按鍵 
            state.doPhone(this); 
        } else if (e.getSource() == buttonExit) {   // 結束的按鍵 
            System.exit(0); 
        } else { 
            System.out.println("?"); 
        } 
    } 
    // 設定時間 
    public void setClock(int hour) { 
        String clockstring = "現在時間是"; 
        if (hour < 10) { 
            clockstring += "0" + hour + ":00"; 
        } else { 
            clockstring += hour + ":00"; 
        } 
        System.out.println(clockstring); 
        textClock.setText(clockstring); 
        state.doClock(this, hour); 
    } 
    // 狀態變化 
    public void changeState(State state) { 
        System.out.println("狀態已經從" + this.state + "變成" + state + "。"); 
        this.state = state; 
    } 
    // 呼叫保全中心 
    public void callSecurityCenter(String msg) { 
        textScreen.append("call! " + msg + "\n"); 
    } 
    // 保全中心保留記錄 
    public void recordLog(String msg) { 
        textScreen.append("record ... " + msg + "\n"); 
    } 
}
