#include <stdio.h>
int main()
{
    printf("hello world");
    return 0;
}
// ------------------------------------------------------------------------------------------
//                              Commands to execute our C language application
// ------------------------------------------------------------------------------------------
// g++ -Iinclude -c ./src/circle.c -o ./build/circle.o
// g++ -Iinclude -c ./src/line.c -o ./build/line.o
// g++ -Iinclude -c ./src/point.c -o ./build/point.o
// g++ -Iinclude -c ./src/main.c -o ./build/main.o
// g++ ./build/circle.o ./build/point.o ./build/line.o ./build/main.o -o ./build/output.exe
// cd build
// output.exe
// ------------------------------------------------------------------------------------------
