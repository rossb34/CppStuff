/*
 * main.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <numeric>
#include <iostream>
#include "rbfun.h"

int main(){

        const int sz = 16;

        std::vector<double> vec(sz);
        for(unsigned int i = 0; i < vec.size(); i++){
                vec[i] = i * 2 + 1;
        }

        std::cout << "original vector" << std::endl;
        PrintVec(vec);

        double num1 = variance(vec);
        double num2 = sdev(vec);

        std::cout << "varaiance " << num1 << std::endl;
        std::cout << "standard deviation " << num2 << std::endl;

        std::cout << "cumulative sum using CumSum" << std::endl;
        std::vector<double> vec1 = CumSum(vec);
        PrintVec(vec1);

        std::cout << "cumulative sum with partial_sum CumSum1" << std::endl;
        std::vector<double> vec2(sz);
        vec2 = CumSum1(vec);
        PrintVec(vec2);

        double var1 = variance1(vec);
        std::cout << "variance1 " << var1 << std::endl;

        double sd1 = sdev1(vec);
        std::cout << "sdev1 " << sd1 << std::endl;

        std::vector<double> svec(sz);
        svec = rollsum(vec, 5);
        std::cout << "rollsum" << std::endl;
        PrintVec(svec);

        std::vector<double> rollvarvec(sz);
        rollvarvec = rollvar(vec, 5);
        std::cout << "rollvar" << std::endl;
        PrintVec(rollvarvec);

        std::vector<double> smavec(sz);
        smavec = rollmean(vec, 5);
        std::cout << "rollmean" << std::endl;
        PrintVec(smavec);

        std::vector<double> sdvec(sz);
        sdvec = rollsd(vec, 5);
        std::cout << "rollsd" << std::endl;
        PrintVec(sdvec);

        return 0;
}
