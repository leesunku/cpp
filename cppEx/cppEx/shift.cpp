#include<bitset>
#include<iostream>

using namespace std;

int main() {
	unsigned short us = 0xff00;
	short s = (short)0xff00;
	unsigned short us_shift = us >> 4;
	short s_shift_r = s >> 4;
	cout << bitset<16>(us);
}