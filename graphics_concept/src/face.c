#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set fill style and color
    setcolor(YELLOW);

    // face shape
    circle(250, 250, 150);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(250, 250, YELLOW);

// eye 1
    setcolor(BLACK);
    circle(200, 200, 30);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(200, 200, BLACK);
// eye 2
    circle(300, 200, 30);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(300, 200, BLACK);
// mouth
    arc(250, 270, 200, 340, 70);
    getch();
    closegraph();
    return 0;
}

// one command for creating exe
//  g++ -o output  main.c -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32

// indetail commands for creating ext

// g++ -I include -c ./src/face.c -o ./build/face.o
// g++  ./build/face.o  -o ./build/face.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
