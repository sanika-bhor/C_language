#include<stdbool.h>
#include"./currentTimeDate.h"
struct climateControl{
    struct Date date;
    struct Time time;
    float temp;
    int humadity;
    int light;
   // bool fanstatus;
};

struct climateControl * acceptClimateData();
void displayClimate(struct climateControl* c);
void controlFan( struct climateControl * ptr, bool status);
