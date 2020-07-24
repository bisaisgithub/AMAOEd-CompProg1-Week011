#include "Box.h"
#include "IBox.h"
#include<cstdlib>
#include<iostream>

using namespace std;

int main() {

	Box box(2, 3, 4, "red");

	cout << box.getVolume();

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}