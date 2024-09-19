#include <graphics.h>
#include <conio.h> // For getch()

int main()
{
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Set color and draw a line
    setcolor(YELLOW);
    line(0, 0, 200, 0);

    // Pause to view the result
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}

// g++ -o test_graphics test_graphics.c -lbgi -lgdi32 -lcomdlg32 -luuid -lole32 -loleaut32