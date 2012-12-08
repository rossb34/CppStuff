/*
 * variance.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <numeric>
#include <functional>
#include <math.h>
#include "rbfun.h"

double variance(const std::vector<double>& v){
        /*
         * Computes the variance of a vector
         * args:
         *      v is a double vector passed by reference
         * returns:
         *      value of the variance of type double
         */

        // first calculate the mean of the vector
        double mean1 = mean(v);
        double var = 0;
        double delta = 0;

        for(int i = 0; i < v.size(); i++){
                delta = v[i] - mean1;
                var += delta * delta;
        }
        var = var / (double)v.size();
        return var;
}

double variance1(const std::vector<double>& v){
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
        double var;

        ssq = std::inner_product(v.begin(), v.end(), v.begin(), 0.0);
        sum = std::accumulate(v.begin(), v.end(), 0.0);
        mean = sum / sz;

        var = (ssq - sum * mean) / (sz);
        return var;
}
