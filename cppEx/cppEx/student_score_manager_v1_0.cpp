#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	while (1) {
		cout << "\n --------------------- menu --------------------- \n";
		cout << " 1. student score add \n";
		cout << " 2. all score view \n";
		cout << " q. program exit \n";
		cout << " please, choice number : ";

		char select;
		cin >> select;

		switch (select)
		{
		case '1' :
			cout << "\n choic, student score add \n";
			break;
		case '2' :
			cout << "\n choice, all score view \n";
			break;
		case 'Q' :
		case 'q':
			cout << "program exit \n";
			return 0;
		default:
			cout << "choice miss";
			break;
		}
	}
	return 0;
}