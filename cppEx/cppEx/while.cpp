#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int sum = 0;

	while (i <= 10) {
		sum += i;
		i++;
	}
	cout << "sum value = " << sum << "\n";
	
	while (++i <= 20) {
		cout << "i++ value = " << i << "\n";
	}
	while (true) {
		cout << "true value = " << i << "\n";
		i++;
		if (i > 40)
			break;
	}
}