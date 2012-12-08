/*
 * rbfun.h
 *
 *  Created on: Dec 5, 2012
 *      Author: rossbennett
 */

#ifndef RBFUN_H_
#define RBFUN_H_

std::vector<double> CumSum(const std::vector<double>& v);

std::vector<double> CumSum1(const std::vector<double>& v);

std::vector<int> fib(int n);

double mean(const std::vector<double>& v);

double sum1(const std::vector<double>& v);

double sum2(const std::vector<double>& v);

double variance(const std::vector<double>& v);

double variance1(const std::vector<double>& v);

double sdev(const std::vector<double>& v);

double sdev1(const std::vector<double>& v);

void PrintVec(const std::vector<double>& v);

std::vector<double> rollsum(const std::vector<double>& v, double x);

std::vector<double> rollvar(const std::vector<double>& v, int x);

std::vector<double> rollmean(const std::vector<double>& v, double x);

std::vector<double> rollsd(const std::vector<double>& v, int x);

#endif /* RBFUN_H_ */
