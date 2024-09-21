#include <graphics.h>
#include <conio.h> // For getch()

int main()
{
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Set color and draw a line
    setcolor(YELLOW);
    line(50, 50, 200, 200);

    // setcolor(WHITE);
    // circle(300, 300, 100);

    // Pause to view the result
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}

// use when we have to direct build .exe file
// g++ -o ./build/test_graphics.exe ./src/test_graphics.c -lbgi -lgdi32 -lcomdlg32 -luuid -lole32 -loleaut32

// when we have to create .o files and then create .exe
// g++ -I include -c ./src/test_graphics.c -o ./build/test_graphics.o
// g++ ./build/test_graphics.o -o ./build/test_graphics.exe -lbgi -lgdi32 -lcomdlg32 -luuid -lole32 -loleaut32
// cd build
// test_graphics.exe