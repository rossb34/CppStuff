/*
 * mean.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include "rbfun.h"

double mean(const std::vector<double>& v){
        /*
         * Computes the mean of a vector of doubles
         * args:
         *      v is a double vector passed by ref
         * returns:
         * the mean of the vector as a double
         */
        double result = sum2(v) / (double)v.size();
        return result;
}
