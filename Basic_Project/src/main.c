// header file
#include<stdio.h>
#include <math.h>
#include "handler.h"

// entry point function
int main()
{
    // function calling
    display();
    
    return 0;
}

// g++ -Iinclude -c ./src/handler.c -o ./build/handler.o
// g++ -Iinclude -c ./src/main.c -o ./build/main.o
// g++ ./build/main.o  ./build/handler.o -o ./build/output.exe
// cd build
// output.exe
