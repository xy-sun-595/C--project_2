//============================================================================
// Name        : approximations.cpp
// Author      : Xiaoyong Sun
//============================================================================

#include <iostream>
#include <vector>
#include <cmath>

// PiResults struct (from pi_approx.cpp)
struct PiResults {
	double approx;
	double error;
};

// Declare the pi_approx function from pi_approx.cpp
PiResults pi_approx(int N);

// Create the function to compute approximations for each integer in the vector
double* approximations(const std::vector<int> &intervals) {

	double *results = new double[intervals.size()];			// Dynamically allocate an array to store the results

	for (size_t i = 0; i < intervals.size(); ++i) {			// Loop through each integer in the vector
		PiResults piResults = pi_approx(intervals[i]);		// Call pi_approx for the current interval
		results[i] = piResults.approx;						// Store the approximation in the results
	}

	return results;											// Return the dynamically allocated array
}
