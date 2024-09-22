#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set fill style and color
    setcolor(YELLOW);

    // BALL shape
    circle(50, 350, 40);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(250, 250, YELLOW);
    getch();
    
    closegraph();
    return 0;
}

// one command for creating exe
//  g++ -o output  main.c -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32

// indetail commands for creating ext

// g++ -I include -c ./src/main.c -o ./build/main.o
// g++  ./build/main.o  -o ./build/main.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
