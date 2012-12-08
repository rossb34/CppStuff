/*
 * ops.h
 *
 *  Created on: Dec 7, 2012
 *      Author: rossbennett
 */

#ifndef OPS_H_
#define OPS_H_

// not sure if the includes are necessary
//#include <vector>
//#include <algorithm>

template <typename T>
std::vector<T> operator*(const std::vector<T>& lhs, const std::vector<T>& rhs){
        /*
         * templated * operator overload to multiply two vectors
         * of the same type
         */
        std::vector<T> v(lhs.size());
        std::transform(lhs.begin(), lhs.end(), rhs.begin(), v.begin(),
                        std::multiplies<T>());
        return v;
}

template <typename T1, typename T2>
std::vector<T1> operator*(const std::vector<T1>& lhs, const T2& rhs){
        /*
         * templated * operator overload to multiply a vector
         * and a scalar for vec * scalar
         */
        std::vector<T1> v(lhs.size());
        std::transform(lhs.begin(), lhs.end(), v.begin(),
                        std::bind1st(std::multiplies<T1>(), rhs));
        return v;
}

template <typename T1, typename T2>
std::vector<T2> operator*(const T1& lhs, const std::vector<T2>& rhs){
        /*
         * templated * operator overload to multiply a vector
         * and a scalar for scalar * vec
         */
        std::vector<T2> v(rhs.size());
        std::transform(rhs.begin(), rhs.end(), v.begin(),
                        std::bind1st(std::multiplies<T2>(), lhs));
        return v;
}

template <typename T>
std::vector<T> operator/(const std::vector<T>& lhs, const std::vector<T>& rhs){
        /*
         * templated / operator overload to divide two vectors
         * of the same type
         */
        std::vector<T> v(lhs.size());
        std::transform(lhs.begin(), lhs.end(), rhs.begin(), v.begin(),
                        std::divides<T>());
        return v;
}

template <typename T>
std::vector<T> operator+(const std::vector<T>& lhs, const std::vector<T>& rhs){
        /*
         * templated + operator overload to add two vectors
         * of the same type
         */
        std::vector<T> v(lhs.size());
        std::transform(lhs.begin(), lhs.end(), rhs.begin(), v.begin(),
                        std::plus<T>());
        return v;
}

template <typename T1, typename T2>
std::vector<T1> operator+(const std::vector<T1>& lhs, const T2& rhs){
        /*
         * templated * operator overload to multiply a vector
         * and a scalar for vec + scalar
         */
        std::vector<T1> v(lhs.size());
        std::transform(lhs.begin(), lhs.end(), v.begin(),
                        std::bind1st(std::plus<T1>(), rhs));
        return v;
}

template <typename T1, typename T2>
std::vector<T2> operator+(const T1& lhs, const std::vector<T2>& rhs){
        /*
         * templated * operator overload to multiply a vector
         * and a scalar for scalar + vec
         */
        std::vector<T2> v(rhs.size());
        std::transform(rhs.begin(), rhs.end(), v.begin(),
                        std::bind1st(std::plus<T2>(), lhs));
        return v;
}

template <typename T>
std::vector<T> operator-(const std::vector<T>& lhs, const std::vector<T>& rhs){
        /*
         * templated - operator overload to subtract two vectors
         * of the same type
         */
        std::vector<T> v(lhs.size());
        std::transform(lhs.begin(), lhs.end(), rhs.begin(), v.begin(),
                        std::minus<T>());
        return v;
}


#endif /* OPS_H_ */
