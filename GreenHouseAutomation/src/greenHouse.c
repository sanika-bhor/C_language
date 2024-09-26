
#include <greenHouse.h>
#include <stdio.h>
#include <stdlib.h>

struct climateControl *acceptClimateData()
{
    struct climateControl *climateData;
    // Accept climate data from the user
    climateData = (struct climateControl *)malloc(sizeof(struct climateControl));
    printf("enter temparature: ");
    scanf("%f", &climateData->temp);

    printf("enter Humadity: ");
    scanf("%d", &climateData->humadity);

    printf("enter Light: ");
    scanf("%d", &climateData->light);

    // climateData->fanstatus = FALSE;
    return climateData;
}

void displayClimate(struct climateControl *c)
{
    if (c == NULL)
    {
        printf("\n No climate data found");
    }
    else
    {
        printf("\n\ntemparture: %f", c->temp);
        printf("\nhumadity: %d", c->humadity);
        printf("\nlight: %d", c->light);
        // printf("temparture: %f",temp);
    }
}

void controlFan(struct climateControl *ptr, bool status)
{
    if (status == true)
    {
        status = false;
        printf("\n\n Fan off....thank you");
    }
    else
    {
        status = true;
        printf("\n\n Fan off....thank you");
    }
}
