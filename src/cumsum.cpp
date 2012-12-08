/*
 * cumsum.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <numeric>
#include "rbfun.h"

std::vector<double> CumSum(const std::vector<double>& v){
        /*
         * Computes the cumulative sum of a vector
         * args:
         *      v is a double vector passed by ref
         * returns:
         *      a double vector of the cumulative sum
         */
        int sz = v.size();
        std::vector<double> vec(sz);
        for(int i = 0; i < v.size(); i++){
                vec[i] = std::accumulate(v.begin(), v.end() - sz + i + 1, 0.0);
        }
        return vec;
}

std::vector<double> CumSum1(const std::vector<double>& v){
        std::vector<double> res(v.size());
        std::partial_sum(v.begin(), v.end(), res.begin());
        return res;
}
