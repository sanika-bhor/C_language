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

    // Pause to view the result
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}

// use when we have to direct build .exe file
// g++ -o ./build/test_graphics.exe ./src/test_graphics.c -lbgi -lgdi32 -lcomdlg32 -luuid -lole32 -loleaut32