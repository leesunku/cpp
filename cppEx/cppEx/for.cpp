#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		cout << i << "\n";
	}
	cout << "*******************************************" << "\n";
	int i = 0;
	for (;;) {
		i++;
		if (i == 5 || i == 10 || i == 15)
			continue;
		if (i > 20)
			break;
		cout << "val = " << i << "\n";
	}
}