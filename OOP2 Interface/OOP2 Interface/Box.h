#ifndef _Box
#define _Box

#include <string>
#include "IBox.h"

using namespace std;

class Box : public IBox {
private:
	int mLenght, mWidth, mHeight;
	string mColor;
public:
	Box(int mLenght, int mWidth, int mHeight, string);
	int getVolume();
	std::string getColor();
};

Box::Box(int mLenght, int mWidth, int mHeight, string mColor) {
	this->mLenght = mLenght;
	this->mWidth = mWidth;
	this->mHeight = mHeight;
	this->mColor = mColor;
}

int Box::getVolume() {
		return this->mLenght * this->mWidth * this->mHeight;
}

string Box::getColor() {
	return this->mColor;
}

#endif // !Box

