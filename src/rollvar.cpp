/*
 * rollvar.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <numeric>
#include <functional>
#include <math.h>
#include "rbfun.h"

std::vector<double> rollvar(const std::vector<double>& v, int x){
        /*
         * Computes the variance of a vector
         * args:
         *      v is a double vector passed by reference
         * returns:
         *      value of the variance of type double
         */

        double ssq = 0;
        double sum = 0;
        double mean = 0;
        double sz = (double)v.size();
        double var = 0;

        std::vector<double> res(sz);

        for(int i = 0; i < sz; i++){
        	ssq = std::inner_product(v.begin() + i, v.end() - sz + x + i,
        			v.begin() + i, 0.0);

        	sum = std::accumulate(v.begin() + i, v.end() - sz + x + i, 0.0);
        	mean = sum / x;
        	var = (ssq - sum * mean) / (x);
        	res[i+x-1] = var;
        }
        return res;
}
