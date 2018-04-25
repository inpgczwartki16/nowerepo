#ifndef INCLUDE_MATLAB_HPP_
#define INCLUDE_MATLAB_HPP_

#include <cstddef>

int* add_vectors(int* v1, int* v2, std::size_t n);
void print_vector(int* v, std::size_t n);

#endif /* INCLUDE_MATLAB_HPP_ */
#include <string>
#include <random>
#include <ctime>
std::string random_str( std::size_t len )
{
    static const std::string a = 
              "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" ;
    static std::mt19937 rng( std::time(0) ) ;
    static std::uniform_int_distribution<std::size_t> distr( 0, a.size() - 1 ) ;
    std::string r ;
    for( std::size_t i = 0 ; i < len; ++i ) r += a[ distr(rng) ] ;
    return r ;
}
