//============================================================================
// Name        : pi_approx.cpp
// Author      : Xiaoyong Sun
//============================================================================

#include <iostream>
#include <cmath>

// Create a struct (PiResults from Hint) to hold the results
struct PiResults {
    double approx;
    double error;
};

// Create the function to approximate pi and calculate absolute error
PiResults pi_approx(int N) {
    double delta_x = 1.0 / N;						// initialize delta_x
    double sum = 0.0;								// initialize sum

    for (int k = 1; k <= N; ++k) {
        double x_k = (k - 0.5) * delta_x;			// calculate the midpoint of the current interval
        double f_x_k = sqrt(1.0 - x_k * x_k);		// find the relate f(x_k) value
        sum += delta_x * f_x_k;						// accumulate to reach the sum in formula 1
    }

    double approxPi = 4.0 * sum;					// calculate the approximate value of pi

    // Calculate the absolute error
    double error = std::abs(approxPi - M_PI);		// calculate the absolute error by comparing with M_PI(built-in value of Pi)

    // Create and return a PiResults struct
    PiResults results;
    results.approx = approxPi;						// store the approximate value into the struct
    results.error = error;							// store the absolute error into the struct
    return results;									// return the stuct
}
