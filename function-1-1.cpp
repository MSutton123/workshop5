#include <iostream>
#include <string>

int *readNumbers(){
    int array[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a number for the array: ";
        std::cin >> array[i];
        std::cout << std::endl;
    }

    int* array_pointer;

    return array_pointer;
}

void printNumbers(int *numbers,int length) {

    for (int k = 0; k < length; k++) {
        std::cout << k << " " << numbers + k << std::endl;
    }
}

// how to print an element of a pointer array?