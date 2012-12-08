/*
 * rollmean.cpp
 *
 *  Created on: Dec 7, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <numeric>
#include <algorithm>
#include "rbfun.h"

std::vector<double> rollmean(const std::vector<double>& v, double x){
	// v is the vector
	// x is the rolling period

	// create a new vector that will hold the rolling mean
	std::vector<double> vec(v.size());
	vec = rollsum(v, x);
	std::transform(vec.begin(), vec.end(), vec.begin(),
			std::bind1st(std::divides<double>(), x));
	return vec;
}
