/*
 * printvec.cpp
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#include <vector>
#include <iostream>

void PrintVec(const std::vector<double>& v){
        for(int i = 0; i < v.size(); i++){
                std::cout << v[i] << " ";
        }
        std::cout << std::endl;
}
