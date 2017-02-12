#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int s1_no, s2_no, s3_no;
	int s1_kor, s2_kor, s3_kor;
	int s1_math, s2_math, s3_math;
	int s1_eng, s2_eng, s3_eng;
	float s1_avg, s2_avg, s3_avg;
	float total_avg = 0.0f;
	int number_of_student = 0;

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
		case '1':
		{
			cout << "\n choic, student score add \n";

			if (3 == number_of_student) {
				cout << "student full, max=3 \n";
				break;
			}
			int kor, eng, math;
			cout << "please, add score, kor, eng, math. : ";
			cin >> kor >> eng >> math;

			float avg = float(kor + eng + math) / 3.0f;

			if (number_of_student == 0) {
				s1_no = number_of_student + 1;
				s1_kor = kor;
				s1_eng = eng;
				s1_math = math;
				s1_avg = avg;
				total_avg = s1_avg;
			}
			else if (number_of_student == 1) {
				s2_no = number_of_student + 1;
				s2_kor = kor;
				s2_eng = eng;
				s2_math = math;
				s2_avg = avg;
				total_avg = (s1_avg + s2_avg) / 2;
			}
			else {
				s3_no = number_of_student + 1;
				s3_kor = kor;
				s3_eng = eng;
				s3_math = math;
				s3_avg = avg;
				total_avg = (s1_avg + s2_avg + s3_avg) / 3;
			}
			number_of_student++;
			cout << "student score add success \n";
			break;
		}
		case '2':
			cout << "\n choice, all score view \n";
			cout << "no kor eng math avg \n";

			for (int i = 0; i < number_of_student; i++) {
				if (i == 0) {
					cout << s1_no << " " << s1_kor << " " << s1_eng << " " << s1_math << " " << s1_avg << "\n";
				}
				else if(i == 1) {
					cout << s2_no << " " << s2_kor << " " << s2_eng << " " << s2_math << " " << s2_avg << "\n";
				}
				else {
					cout << s3_no << " " << s3_kor << " " << s3_eng << " " << s3_math << " " << s3_avg << "\n";
				}
			}
			cout << "total avg = " << total_avg << "\n";



			break;
		case 'Q':
		case 'q':
			cout << "program exit \n";
			return 0;
		default:
			cout << "choice miss";
			break;
		}
	}
}