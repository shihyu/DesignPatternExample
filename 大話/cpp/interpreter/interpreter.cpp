#include <string>
#include <fstream>
#include <iostream>

class PlayContext {
private:
    std::string context;

public:
    virtual std::string getContext();

    virtual void setContext(std::string context);


};

class Expression {
public:
    virtual void interpret(PlayContext *context);

    virtual void excute(std::string key, double value) = 0;

};

class Note : public Expression {

public:
    virtual void excute(std::string key, double value);

};

class Scale : public Expression {

public:
    virtual void excute(std::string key, double value);

};

void Scale::excute(std::string key, double value) {
    std::string scale = "";
    int intKey = static_cast<int>(value);

    if (intKey == 1) {
        scale = "low scale";
    }

    if (intKey == 2) {
        scale = "mid scale";
    }

    if (intKey == 3) {
        scale = "high scale";
    }

    // std::put(" " + scale + " ");
    std::cout << " " << scale << " " << std::endl;
}

void Note::excute(std::string key, double value) {
    std::string note = "";

    if (key.compare("C")) {
        note = "1";
    }

    if (key.compare("D")) {
        note = "2";
    }

    if (key.compare("E")) {
        note = "3";
    }

    if (key.compare("F")) {
        note = "4";
    }

    if (key.compare("G")) {
        note = "5";
    }

    if (key.compare("A")) {
        note = "6";
    }

    if (key.compare("B")) {
        note = "7";
    }

    // std::cout::put(" " + note + " ");
    std::cout << " " << note << " " << std::endl;
}

std::string PlayContext::getContext() {
    return context;
}

void PlayContext::setContext(std::string context) {
    this->context = context;
}

void Expression::interpret(PlayContext *context) {
    if (context->getContext().length() == 0) {
        return;
    } else {
        std::string playKey = context->getContext().substr(0, 1);
        context->setContext(context->getContext().substr(2));
        // double playValue = static_cast<double>(context->getContext().substr(0, context->getContext().find(" ")));
        double playValue = atof((context->getContext().substr(0, context->getContext().find(" "))).c_str());
        context->setContext(context->getContext().substr(context->getContext().find(" ") + 1));
        excute(playKey, playValue);
    }
}

int main() {
    PlayContext *context = new PlayContext();
    std::string content = "O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 E 0.5 G 0.5 A 0.5 O 3 C 1 O 2 A 0.5 G 1 C 0.5 E 0.5 D 3 ";
    context->setContext(content);
    Expression *exp = 0;
    //Here we can define a factory to create the Expression.
    //because I want to focus on interpreter pattern so didn't do that.you can do it by yourself ,just enjoy this

    while (context->getContext().length() > 0) {
        std::string str = context->getContext().substr(0, 1);

        if (str.compare("O")) {
            exp = new Scale();
        } else {
            exp = new Note();
        }

        exp->interpret(context);
    }

    return 0;
}
