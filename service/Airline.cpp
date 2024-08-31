#ifndef airline_H
#define airline_H

#include <bits/stdc++.h>
#include "../model/Time.h"
using namespace std;   

class Airline{  
    public:
    string airlineName;
    string departure, arrival;
    int cost;
    bool isMealAvailable;
    Time time;

    void init(string airlineNameP, string departureP, string arrivalP, int costP, bool isMealAvailableP){
        airlineName = airlineNameP;
        departure = departureP;
        arrival = arrivalP;
        cost = costP;
        isMealAvailable = isMealAvailableP;
     
    }

};
#endif