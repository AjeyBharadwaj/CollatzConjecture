#include <iostream>

using namespace std;

#include "Number.hh"

int main() {

    for(int i = 1; i < 100; i++) {
        Number num(i);

        num.performCollatzConjecture();
        cout << "Stopping Time for " << num.getNumber() << " is : " << num.getStoppingTime() << endl;
    }
}