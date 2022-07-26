class Number {
    int number;
    int stoppingTime;

    public:
    Number(int);
    ~Number();

    int getStoppingTime();
    int getNumber();

    bool performCollatzConjecture();

};