#include <iostream>

const double pi = 3.1415;


//	Объявление структуры/класса
struct Human
{
//	Переменные внутри структуры - поля структуры
//
	bool sex;				// 0-female, 1-male
	const char* name;
	unsigned int age;
	float height;			// m 

//	Методы структуры/класса
//
//	пример - конструктор:
	Human(bool _s, const char* _n, unsigned int _a, float _h){
		sex = _s;
		name = _n;
		age = _a;
		height = _h;
	}

	void Print(){
		std::cout << "Name:\t" << name << "\n";
		std::cout << "Sex:\t" << ( (sex == 1) ? "male" : "female" ) << "\n";
		std::cout << "Age:\t" << age << "\n";
		std::cout << "Height:\t" << height << "\n";
	}

};



int main() {
	int age_Dasha, age_Bogdan, age_Oleg;
	float d = 3.14;
	const char* str = "asdf";

//	Экземпляр структуры/класса
 
	Human Dasha(0,"Dasha",18,1.7);
	Human Bogdan(1,"Bogdan",18,1.8);

	Dasha.Print();
	Bogdan.Print();	
			
	unsigned int N = 7;
	int arr[7] = {1,23,4,5,345,12};

	for(int i=0; i<N; i++){
		std::cout << arr[i] << "\n";
	}
	
	for(int i=0; i<N; i++){
		arr[i] = (i%2==1) ? -arr[i] : arr[i]*2;
	}

	for(int i=0; i<N; i++){
		std::cout << arr[i] << "\n";
	}

	
	return 0;
}
