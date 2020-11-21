#include <iostream>
#include <string>
#include "lib.h"
#include <exception>
#include <stdexcept>

using namespace std;
const int NOT_ENOUGH_ARGS = -1;

int main() {

    float a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    try{
        float *x = findRoots(a, b, c);
        int rootsCount = (int)x[0];
        for (size_t i = 1; i <= rootsCount; i++) {
            std::cout << "x" << i << " = " << x[i] << std::endl;
        }
    }
    catch (logic_error &e) {
        cout<< e.what();
    }
    return 0;
}