#include <iostream>
#include <cstdlib>

#include "matlab.hpp"

int main() {
    return EXIT_SUCCESS;
}
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
