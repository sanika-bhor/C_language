#include <stdio.h>
// #include "../include/point.h"
#include "../include/line.h"
#include "../include/circle.h"

int main()
{
    printf("hello world");

// point
// --------------------------------------------------------------------------------------------
    struct point startingPoint = {25, 65};
    struct point endingPoint = {78, 96};

    // int startingPointX = getX(startingPoint);
    // int startingPointY = getY(startingPoint);

    // int endingPointX = getX(endingPoint);
    // int endingPointY = getY(endingPoint);

    // printf("\n\n\n\n X of startingPoint: %d", startingPointX);
    // printf("\n y of startingPoint: %d",startingPointY);

    // printf("\n\n\n X of endingPoint: %d", endingPointX);
    // printf("\n y of endingPoint: %d", endingPointY);

// line
// --------------------------------------------------------------------------------------------

    struct line l1 = {startingPoint, endingPoint};
    int startingPointX = l1.p1.getX();
    int startingPointY = l1.p1.getY();
    
    printf("\n\n\n\n*******************LINE**********************");
    printf("\n\n X of startingPoint: %d", startingPointX);
    printf("\n y of startingPoint: %d", startingPointY);

    int endingPointX = l1.p2.getX();
    int endingPointY = l1.p2.getY();
    printf("\n\n X of endingPoint: %d", endingPointX);
    printf("\n y of endingPoint: %d", endingPointY);

    // circle
    // --------------------------------------------------------------------------------------------

    struct point centerPoint = {85, 225};
    struct circle c1 = {centerPoint, 25};
    int centerPointX = c1.center.getX();
    int centerPointY = c1.center.getY();

    printf("\n\n\n\n*CIRCLE*");
    printf("\n\n X of centerPoint: %d", centerPointX);
    printf("\n y of centerPoint: %d", centerPointY);
    printf("\n\n radius: %d", c1.radius);

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
