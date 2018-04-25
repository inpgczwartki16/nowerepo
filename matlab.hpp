#ifndef INCLUDE_MATLAB_HPP_
#define INCLUDE_MATLAB_HPP_

#include <cstddef>

int* add_vectors(int* v1, int* v2, std::size_t n);
void print_vector(int* v, std::size_t n);

#endif /* INCLUDE_MATLAB_HPP_ */
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
}
