import java.awt.Frame;
import java.awt.Label;
import java.awt.Color;
import java.awt.CheckboxGroup;
import java.awt.GridLayout;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class LoginFrame extends Frame implements ActionListener, Mediator {
    private ColleagueCheckbox checkGuest;
    private ColleagueCheckbox checkLogin;
    private ColleagueTextField textUser;
    private ColleagueTextField textPass;
    private ColleagueButton buttonOk;
    private ColleagueButton buttonCancel;

    // コンストラクタ
    // Colleagueたちを生成し、配置した後に表示を行う
    public LoginFrame(String title) {
        super(title);
        setBackground(Color.lightGray);
        // レイアウトマネージャを使って4×2のグリッドを作る
        setLayout(new GridLayout(4, 2));
        // Colleagueたちの生成
        createColleagues();
        // 配置
        add(checkGuest);
        add(checkLogin);
        add(new Label("Username:"));
        add(textUser);
        add(new Label("Password:"));
        add(textPass);
        add(buttonOk);
        add(buttonCancel);
        // 有効/無効の初期指定
        colleagueChanged(checkGuest);
        // 表示
        pack();
        show();
    }

    // Colleagueたちを生成する
    public void createColleagues() {
        // 生成
        CheckboxGroup g = new CheckboxGroup();
        checkGuest = new ColleagueCheckbox("Guest", g, true);
        checkLogin = new ColleagueCheckbox("Login", g, false);
        textUser = new ColleagueTextField("", 10);
        textPass = new ColleagueTextField("", 10);
        textPass.setEchoChar('*');
        buttonOk = new ColleagueButton("OK");
        buttonCancel = new ColleagueButton("Cancel");
        // Mediatorのセット
        checkGuest.setMediator(this);
        checkLogin.setMediator(this);
        textUser.setMediator(this);
        textPass.setMediator(this);
        buttonOk.setMediator(this);
        buttonCancel.setMediator(this);
        // Listenerのセット
        checkGuest.addItemListener(checkGuest);
        checkLogin.addItemListener(checkLogin);
        textUser.addTextListener(textUser);
        textPass.addTextListener(textPass);
        buttonOk.addActionListener(this);
        buttonCancel.addActionListener(this);
    }

    // Colleagueからの通知で各Colleagueの有効/無効を判定する
    public void colleagueChanged(Colleague c) {
        if (c == checkGuest || c == checkLogin) {
            if (checkGuest.getState()) {             // Guestモード
                textUser.setColleagueEnabled(false);
                textPass.setColleagueEnabled(false);
                buttonOk.setColleagueEnabled(true);
            } else {                                 // Loginモード
                textUser.setColleagueEnabled(true);
                userpassChanged();
            }
        } else if (c == textUser || c == textPass) {
            userpassChanged();
        } else {
            System.out.println("colleagueChanged:unknown colleague = " + c);
        }
    }
    // textUserまたはtextPassの変更があった
    // 各Colleagueの有効/無効を判定する
    private void userpassChanged() {
        if (textUser.getText().length() > 0) {
            textPass.setColleagueEnabled(true);
            if (textUser.getText().length() >= 4 && textPass.getText().length() >= 4) {     
                buttonOk.setColleagueEnabled(true);
            } else {
                buttonOk.setColleagueEnabled(false);
            }
        } else {
            textPass.setColleagueEnabled(false);
            buttonOk.setColleagueEnabled(false);
        }
    }
    public void actionPerformed(ActionEvent e) {
        System.out.println("" + e);
        System.exit(0);
    }
}
