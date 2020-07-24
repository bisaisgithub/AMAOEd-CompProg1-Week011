#ifndef _IBox
#define _IBox

#include<string>

using namespace std;

class IBox {
public:
	virtual int getVolume() = 0;
	virtual string getColor() = 0;
};

#endif // !IBox

