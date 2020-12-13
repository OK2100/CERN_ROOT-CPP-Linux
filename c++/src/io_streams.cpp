#include <stdio.h>		// for c

#include <iostream>		// for c++
// using namespace std;

int main() {


//	C style

/* 
 *		Вывод информации на экран - функция printf()
 *		printf("mask/template",arg1,arg2,arg3,...)
 *		Самый удобный способ выводить на экран
 */

	int ia = 0xabcd;
	float fa = 3.1415926535;

	printf("DEC Integer\t%d\n",ia);
	printf("HEX Integer\t%X\n",ia);
	printf("Float\t%f\n",fa);
	printf("Float\t%.2f\n",fa);


//		Cчитывание - функция scanf("mask/template",&arg1,&arg2,...)

	int e;
	int ret;

	printf("Enter integer number: ");
	ret = scanf("%d",&e);
	printf("You entered: %d\n",e);
	printf("Scanf returned value: %d\n",ret);



//	C++ style

//	Объект std::cout умеет выводить информацию на экран.
//  В названии используется знак :: , который имеет 
//	значение "принадлежит" или "лежит в".
//	То есть объект cout лежит в пространстве имен std.
//  Пространство имен - это просто объем (scope) с именем.

	int ia2 = 0xabcd;
	float fa2 = 3.1415926535;

	std::cout << "DEC integer\t" << ia2 << "\n";
	std::cout << "HEX integer\t" << std::hex << ia2 << "\n";
	std::cout << "Float\t" << fa2 << "\n";


//	ВВод производится с помощью объекта std::cin.
//	Он также лежит в пространстве имен std.

	int e2;
	std::cout << "Enter integer number: ";
	std::cin >> e2;
	std::cout << std::dec  <<"You entered: " << e2 << "\n";

/*
	Есть еще множество функций для работы с чтением
	getc()
	getch()
	gets()
	...
*/


	return 0;
}




