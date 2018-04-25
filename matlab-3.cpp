#include <cstdlib>

#include "matlab.hpp"

int main() {

    return EXIT_SUCCESS;
}
<<<<<<< HEAD
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;
string random(int len)
{
	string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string r;
	srand(time(NULL));
	for(int i = 0; i < len; i++) r.push_back(a.at(size_t(rand() % 62)));
	return r;
}
int main()
{
	cout << random(32) << endl;
	cin.get();
	return 0;
=======

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
>>>>>>> f1d76847d95ad55d9760ef26e779e20a8dc9b086
}
