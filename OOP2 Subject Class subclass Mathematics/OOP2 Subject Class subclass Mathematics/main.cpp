// main.cpp
#include<cstdlib>
#include<iostream>
#include "Math.h"

using namespace std;

int main() {
	Subject comp("Computer Programming 1", "IT001", 3);
	Math math;

	cout << "Subject Details: " << comp.getSubject() << endl;
	cout << "Subject Details: " << math.getSubject() << endl;

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;

}