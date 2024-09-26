#include<stdbool.h>
struct climateControl{
    float temp;
    int humadity;
    int light;
    // bool light;
    bool fanstatus;
};

struct climateControl * acceptClimateData();
void displayClimate(struct climateControl* c);
void controlFan( struct climateControl * ptr, bool status);
