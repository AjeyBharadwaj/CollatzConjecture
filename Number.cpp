#include "Number.hh"

#include <iostream>

using namespace std;


Number::Number(int num) {
    this->number = num;
    this->stoppingTime = 0;
}

Number::~Number() {

}

int Number::getNumber() {
    return this->number;
}

int Number::getStoppingTime() {
    return this->stoppingTime;
}

bool Number::performCollatzConjecture() {
    int num = this->number;
    while (num != 1) {
        cout << num << " ";
        if ((num%2) == 0) {
            num /= 2;
        } else {
            num = (3*num) + 1;
        }
        this->stoppingTime++;
    }
    cout << "1" << endl;
    return false;
}