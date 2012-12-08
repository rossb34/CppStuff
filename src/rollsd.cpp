/*
 * rollsd.cpp
 *
 *  Created on: Dec 7, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <numeric>
#include <algorithm>
#include <math.h>
#include "rbfun.h"

std::vector<double> rollsd(const std::vector<double>& v, int x){

	// initialize a vector to store the results of rollvar
	std::vector<double> res(v.size());
	res = rollvar(v, x);

	// the standard deviation is just the sqrt of the variance
	std::transform(res.begin(), res.end(), res.begin(), sqrt);

	return res;
}
