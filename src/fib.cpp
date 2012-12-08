/*
 * fib.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include "rbfun.h"

std::vector<int> fib(int n){
        /*
         * Computes the fibonacci sequence
         * with seed values of 1 and 2
         *
         * args:
         *      n is an int of the first n numbers
         *      in the fibonacci sequence
         * returns:
         *      an int vector of the fibonacci sequence
         */

        std::vector<int> vec_fib(n);
        vec_fib[0] = 1;
        vec_fib[1] = 2;

        for(int i = 2; i < n; i++)
        {
                vec_fib[i] = vec_fib[i-1] + vec_fib[i-2];
        }
        return vec_fib;
}
