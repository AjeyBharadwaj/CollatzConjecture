#include <list>
#include <map>

using namespace std;

class Number {
    int number;

    map<int, int> resultMap;
    void saveStoppingTime(int num, int value);

    public:
    Number(int);
    ~Number();

    int getStoppingTime(int num);
    int getNumber();

    bool performCollatzConjecture(int);

};