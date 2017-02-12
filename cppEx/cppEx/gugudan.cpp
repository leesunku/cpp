#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int value = 0;

	for (int i = 2; i < 10; i++)
		for (int j = 1; j < 10; j++)
			cout << i << " * " << j << " = " << i * j << "\n";
}