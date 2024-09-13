#include <stdio.h>
#include "./point.c"

int main()
{
    printf("hello world");


    struct point startingPoint={25,65};
    struct point endingPoint={78,96};

    int startingPointX = getX(startingPoint);
    int startingPointY = getY(startingPoint);

    int endingPointX = getY(endingPoint);
    int endingPointY = getY(endingPoint);

    printf("\n\n\n\n X of startingPoint: %d", startingPointX);
    printf("\n y of startingPoint: %d",startingPointY);

    printf("\n\n\n X of endingPoint: %d", endingPointX);
    printf("\n y of endingPoint: %d", endingPointY);

    printf("\n\n\n Thank You");

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
