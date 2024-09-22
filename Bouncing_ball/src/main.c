#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set fill style and color
    setcolor(WHITE);

    int x = 60;     // Starting x position
    int y = 300;    // Starting y position
    int minY = 60;  // Minimum y position
    int maxY = 320; // Maximum y position
    int minX = 60;  // Minimum x position
    int maxX = 520; // Maximum x position

    // Move the circle in a pattern
    while (true)
    {
        // Move the circle upward until it reaches minY
        while (y > minY)
        {
            cleardevice();
            circle(x, y, 40);
            y -= 20;
            delay(50);
        }

        // Move the circle right until it reaches maxX
        while (x < maxX)
        {
            cleardevice();
            circle(x, y, 40);
            x += 20;
            delay(50);
        }

        // Move the circle down until it reaches maxY
        while (y < maxY)
        {
            cleardevice();
            circle(x, y, 40);
            y += 20;
            delay(50);
        }

         // Move the circle left until it reaches minX
            while (x > minX)
            {
                cleardevice();
                circle(x, y, 40);
                x -= 20;
                delay(50);
            }


        // Break out of the loop once the circle completes the pattern
        if (x == minX && y == maxY)
            break;
    }

    getch();
    closegraph();
    return 0;
}

// g++ -I include -c ./src/main.c -o ./build/main.o
// g++  ./build/main.o  -o ./build/main.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
