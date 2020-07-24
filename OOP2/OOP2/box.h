#include<string>

using namespace std;

class Box {
private:
	string color;
	int lenght, width, height;

public:
	Box(int, int, int);
	int getVolume();
	int getLenght();


};

//Constructor
Box::Box(int lenght, int width, int height) {
	this->lenght;
	this->width;
	this->height;
}



//Accessor
int Box::getVolume() {
	return this->lenght * this->width * this->height;
}

//Accessor
int Box::getLenght() {
	return this->lenght;
}
