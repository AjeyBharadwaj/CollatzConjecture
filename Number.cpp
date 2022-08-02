#include "Number.hh"

#include <iostream>

using namespace std;


Number::Number(int num) {

    this->number = num;
}

Number::~Number() {

}

int Number::getNumber() {
    return this->number;
}

void Number::saveStoppingTime(int num, int value) {
    resultMap[num] = value;
}

int Number::getStoppingTime(int num) {
    return resultMap[num];
}

bool Number::performCollatzConjecture(int num) {
    int stoppingTime = 0;
    int number = num;
    //cout << "Calculating for : " << num << endl;
    while (num != 1) {
        map<int, int>::iterator val = resultMap.find(num);
        if (val != resultMap.end()) {
            //cout << "Found for " << num << endl;
            //cout << resultMap.at(num) << endl;
            stoppingTime += resultMap[num];
            break;
        }

        //cout << num << " << ";
        if ((num%2) == 0) {
            num /= 2;
        } else {
            num = (3*num) + 1;
        }
        stoppingTime++;
    }
    resultMap[number] = stoppingTime;

    //cout << "Stopping for " << number << " is " << resultMap[number] << endl; 

    return false;
}