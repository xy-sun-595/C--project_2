//============================================================================
// Name        : HW2main.cpp
// Author      : Xiaoyong Sun
// Student ID  : 112496580
//============================================================================

#include <iostream>
#include <vector>
#include <cmath>
#include "pi_approx.h"       // Include the header file with the pi_approx function
#include "approximations.h"  // Include the header file with the approximations function

int main() {
    // Q1: Print the pi approximation and error for N = 10000 using Q1
    int N = 10000;
    PiResults piResults = pi_approx(N);								// Call the pi_approx function
    std::cout <<"Q1:"<< std::endl;									// Print out the pi_approx results
    std::cout << "Approximation of pi for N = " << N << ": " << piResults.approx << std::endl;
    std::cout << "Absolute error: " << piResults.error << std::endl;

    // Q2: Create a vector with elements (10^1, 10^2, ..., 10^7)
    //	   Print out the elements of the array from Q2 using this vector as an input
    std::vector<int> intervals;
    for (int i = 1; i <= 7; ++i) {									// Loop through 1-7
        intervals.push_back(pow(10, i));							// Pushing 10^1, 10^2, ..., 10^7 to the intervals
    }

    double* results = approximations(intervals);					// Call the approximations function

    std::cout <<"Q2:"<< std::endl;									// Print out the approximation results
    for (size_t i = 0; i < intervals.size(); ++i) {
        std::cout << "Approximation for " << intervals[i] << " intervals: " << results[i] << std::endl;
    }
    std::cout <<"As the number of interval increases, the approximation approaches to pi "<< std::endl;
    delete[] results;												// Free the dynamically allocated memory

    return 0;
}
