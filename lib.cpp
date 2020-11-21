#include "lib.h"
#include "math.h"
#include <stdexcept>
#include <exception>

using namespace std;
float *findRoots(float a, float b, float c) {
    float *x;

    float D = b * b - 4 * a * c;
    if (D > 0) {
        x = new float[3];
        x[0] = 2;
        x[1] = (-b + sqrt(D)) / (2 * a);
        x[2] = (-b - sqrt(D)) / (2 * a);
    } else if (D < 0) {
        x = new float[1];
        x[0] = 0;
    } else {
        x = new float[2];
        x[0] = 1;
        x[1] = -b / (2 * a);
    }

    if(x[0]==0)
        throw logic_error("Without roots");
}
