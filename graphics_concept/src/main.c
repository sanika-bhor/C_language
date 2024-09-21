#include <graphics.h>
#include <conio.h> // For getch()

int main()
{
    int gd = DETECT, gm;
    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Set color and draw a line
    setcolor(WHITE);
    int y = 100;
    int x=100;
    int i;
    int j;

    for (i = 1; i <= 8; i++)
    {
        line(100, y, 380, y);
        y = y + 40;
    }

    for (j = 0; j < 8; j++)
    {
        line(x, 100, x, 380);
        x = x + 40;
    }
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}

// one command for creating exe
//  g++ -o output  main.c -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32

// indetail commands for creating ext

// g++ -I include -c ./src/main.c -o ./build/main.o
// g++  ./build/main.o  -o ./build/output.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
