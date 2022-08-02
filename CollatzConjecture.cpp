#include <iostream>

using namespace std;

#include "Number.hh"

int main(int argc, char *argv[]) {

    Number num(1);

    if (argc != 3) {
        cout << "./CollatzConjecture <starting> <ending>";
        return 0;
    }

    for(int i = atoi(argv[1]); i <= atoi(argv[2]); i++) {
        num.performCollatzConjecture(i);
        cout << "Stopping Time for " << i << " is : " << num.getStoppingTime(i) << endl;
    }
}