class COperation {
public:
    int m_nFirst;
    int m_nSecond;
    virtual double GetResult() {
        double dResult = 0;
        return dResult;
    }
};

class AddOperation : public COperation {
public:
    virtual double GetResult() {
        return m_nFirst + m_nSecond;
    }
};

