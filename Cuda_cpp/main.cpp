#include <iostream>
#include <math.h>

//  function to add the elements of two arrays
void add(int n, float *x, float *y) {

    for (int i = 0; i < n; i++) {
        /* code */
        y[i] = x[i] + y[i];
    }
}

int main(void) {
    /* code */
    int n = 1 << 20; //1M elements

    float *x = new float[n];
    float *y = new float[n];

    // Initialize x and y arrays on the host
    for (int i = 0; i < n; i++) {
        x[i] = 1.0f;
        y[i] = 2.0f;
    }

    // Run kernel on 1M elements on CPU
    add(n, x, y);

    float maxError = 0.0f;
    for (int i = 0; i < n; i++) {
        maxError = fmax(maxError, fabs(y[i] - 3.0f));
    }
    std::cout << "Max Error: " << maxError << std::endl;

    //free memory
    delete[] x;
    delete[] y;

    return 0;
}
