#include <stdio.h>		// for c

#include <iostream>		// for c++
#include <fstream>

int main() 
{


//	C style file reading

///*	
	FILE* f = fopen("../data/fread.txt","r");
	
	if(!f) {
		printf("ERROR! Can't open file\n");
		return -1;
	}

	int t;
	
	for(int k=0;fscanf(f,"%X",&t) == 1; k++){
		printf("%d\t%d\n",k,t);
	}	

	fclose(f);

//*/


//	C++ style file reading

/*

	std::ifstream f;
	f.open("../data/fread.txt",std::ios::in);	

	if(!f.is_open()) {
		std::cout << "ERROR! Can't open file\n";
		return -1;
	}

	int t;

	for(int k=0; f >> t; k++) {
		std::cout << k << "\t" << t << "\n";
	}

	f.close();

*/

	return 0;
}

