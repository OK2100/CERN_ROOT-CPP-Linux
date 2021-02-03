#include <iostream>


int main(){

    std::cout << "Enter array size: ";
    unsigned int N;
    std::cin >> N;
    std::cout << "Your input is: " << N << "\n";

	int *arr = new int[N];
	
	for(int i=0; i<N; i++){
		arr[i] = i;
		std::cout << arr[i] << "\n";
	}

	delete[] arr;

	return 0;
}


