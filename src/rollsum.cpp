/*
 * rollsum.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <numeric>
#include <algorithm>

std::vector<double> rollsum(const std::vector<double>& v, double x){
	// v is the vector
	// x is the rolling period

	// create a new vector that will hold the rolling sum
	std::vector<double> vec(v.size());
	int sz = v.size();
	for(int i = 0; i < sz; i++){
		vec[i+x-1] = std::accumulate(v.begin() + i, v.end() - sz + x + i, 0.0);
	}
	return vec;
}
