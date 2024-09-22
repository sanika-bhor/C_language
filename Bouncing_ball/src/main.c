#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set fill style and color
    setcolor(WHITE);

    int i;
    int x = 60;
    int y = 300;
    int minY=60;
    int maxY=520;

    int minX = 60;
    int maxX = 520;

    for (i = 0; i < 200; i++)
    {
        cleardevice();
        circle(x, y, 40);

        if (y == minY)
        {
            x=60;
            for (int j = 0; j < 200; j++)
            {
                cleardevice();
                circle(x, y, 40);
                x = x + 20;
                // y = y + 20;
                delay(50);

                if (x == maxX)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        cleardevice();
                        circle(x, y, 40);
                        // x = 100;
                        y = y + 20;
                        delay(50);

                        if (y == maxY)
                        {
                            for (int j = 0; j < 200; j++)
                            {
                                cleardevice();
                                circle(x, y, 40);
                                x = x - 20;
                                delay(50);

                                if(x==minX)
                                {
                                    break;
                                }
                            }
                        }
                    }


                }
            }


        }

            y = y - 20;
        delay(50);
    }
    // BALL shape

    getch();

    closegraph();
    return 0;
}

// g++ -I include -c ./src/main.c -o ./build/main.o
// g++  ./build/main.o  -o ./build/main.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
