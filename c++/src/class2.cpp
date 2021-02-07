#include <iostream>
#include <string>


class A
{
public:
	A(){
		std::cout << "Class A constructed\n";
	}

	int i;
	float f;
};



class B
//class B : public A
{
public:
	B(){
	
		std::cout << "Class B constructed\n";
	}

	std::string str;
};



int main(){

//	A obj;
	B obj;

	obj.i = 3;
	obj.f = 3.14;
	obj.str = "Class B";



	return 0;
}



