#ifndef showF_H
#define showF_H

#include <bits/stdc++.h>
#include "../database/Flights.cpp"

using namespace std;     

bool cmp(Airline f1,Airline f2){
    int t1 = f1.time.hour * 60 + f1.time.minutes;
    int t2 = f2.time.hour * 60 + f2.time.minutes;
    return t1 < t2;
}

void showFlightsFrom(string s)
{
    vector<Airline> airline = flightsAt[s];

    sort(airline.begin(),airline.end(), cmp);

    cout <<"Sorted flights from "<<s<<'\n';
    for(int i = 0; i < airline.size(); ++ i){
        cout << airline[i].airlineName << " "<< airline[i].departure << " "<< airline[i].arrival << " "<< airline[i].cost << " "<< airline[i].time.hour << " "<< airline[i].time.minutes << '\n';
    }

}

#endif