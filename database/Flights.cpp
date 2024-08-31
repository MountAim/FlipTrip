#ifndef extra_H
#define extra_H

#include <bits/stdc++.h>
#include "../service/Airline.cpp"
using namespace std;  


map<string,vector<Airline> > flightsAt;

void insertAirlineData(Airline airline){
    flightsAt[airline.departure].push_back(airline);
}


#endif