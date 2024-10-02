#include <time.h>
#include <greenHouse.h>
#include <stdio.h>
#include <stdlib.h>

struct climateControl *applyDateTime(struct climateControl *climateData)
{
    time_t t1;
    time_t currentTime;
    time(&currentTime);
    struct tm *localTime = localtime(&currentTime);

    climateData->date.day = localTime->tm_mday;
    climateData->date.month = localTime->tm_mon + 1;
    climateData->date.year = localTime->tm_year + 1900;
    climateData->time.hour = localTime->tm_hour;
    climateData->time.minute = localTime->tm_min;
    climateData->time.seconds = localTime->tm_sec;
    return climateData;
}

struct climateControl *acceptClimateData()
{
    printf("\n\n READING DATA:");

    struct climateControl *climateData;
    // Accept climate data from the user
    climateData = (struct climateControl *)malloc(sizeof(struct climateControl));
    printf("\nenter temparature: ");
    scanf("%f", &climateData->temp);


    printf("enter Humadity: ");
    scanf("%d", &climateData->humadity);

    printf("enter Light Mode o or 1: ");
    scanf("%d", &climateData->light);

    climateData=applyDateTime(climateData);
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
        printf("\n\n DISPLYING DATA:");
        printf("\ntemparture: %f", c->temp);
        printf("\nhumadity: %d", c->humadity);
        printf("\nlight: %d", c->light);
        printf("\nDate: %d / %d / %d", c->date.day, c->date.month,c->date.year);
        printf("\nTime: %d : %d : %d", c->time.hour,c->time.minute,c->time.seconds);
    
        // printf("temparture: %f",temp);
    }
}



// void controlFan(struct climateControl *ptr, bool status)
// {
//     if (status == true)
//     {
//         status = false;
//         printf("\n\n Fan off....thank you");
//     }
//     else
//     {
//         status = true;
//         printf("\n\n Fan off....thank you");
//     }
// }
