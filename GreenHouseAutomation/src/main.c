#include <stdio.h>
#include "../include/greenHouse.h"
int main()
{
    struct climateControl *cControl;

    int choice;
    // struct climateControl *cControl;
    printf("\n 1.accept climate  data ");
    printf("\n 2. display climate data ");
    printf("\n 3. control your fan ");
    printf("\n 4. exit ");
    printf("\n\n choice any one: ");
    scanf("%d", &choice);
    do
    {
        switch (choice)
        {
        case 1:
            cControl = acceptClimateData();
        case 2:
            displayClimate(cControl);
        case 3:
            controlFan(cControl, true);
        case 4:
            return 0;
        default:
            printf("\n invalid choice");
        }
    } while (choice != 4);

    // struct climateControl *cControl = acceptClimateData();
    // displayClimate(cControl);
    // controlFan(cControl, true);

    return 0;
}

// g++ -I include -c ./src/greenHouse.c -o ./build/greenHouse.o
// g++ -I include -c ./src/main.c -o ./build/main.o
// g++ ./build/main.o  ./build/greenHouse.o -o  ./build/output.exe