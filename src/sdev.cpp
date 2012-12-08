/*
 * sdev.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <math.h>
#include "rbfun.h"

double sdev(const std::vector<double>& v){
        return sqrt(variance(v));
}

double sdev1(const std::vector<double>& v){
        return sqrt(variance1(v));
}
