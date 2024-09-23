// g++ -I include -c ./src/main.c -o ./build/main.o
// g++  ./build/main.o  -o ./build/main.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32

#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set color for drawing
    setcolor(WHITE);

    while (true) // Loop until close the window
    {
        int x = mousex();
        int y = mousey();
        cleardevice();

        printf("Mouse clicked at: x = %d, y = %d\n", x, y);
        delay(100);
    }

    // Wait for a key press to exit
    getch();
    closegraph();
    return 0;
}
