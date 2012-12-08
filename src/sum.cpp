/*
 * sum.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <numeric>
#include <vector>
#include "rbfun.h"

double sum1(const std::vector<double>& v){
        /*
         * Computes the sum of a vector of doubles
         * args:
         *      v is a double vector passed by ref
         * returns:
         *      double of the sum of the vector
         */
        double acc = 0;
        for(int i = 0; i < v.size(); i++){
                acc += v[i];
        }
        return acc;
}

double sum2(const std::vector<double>& v){
        /*
         * Computes the sum of a vector of doubles
         * args:
         *      v is a double vector passed by ref
         * returns:
         *      double of the sum of the vector
         */
        return std::accumulate(v.begin(), v.end(), 0.0);
}
