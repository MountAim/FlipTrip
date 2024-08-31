#include <bits/stdc++.h>

#include "service/CheapestRoute.cpp"
#include "service/MinimumHoopRoute.cpp"
#include "database/Flights.cpp"
#include "service/FindRoute.cpp"
#include "service/FindRouteWithMeal.cpp"
#include "service/ShowFlights.cpp"


using namespace std;                

void inp_out()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
    #endif
}

int main()
{
    inp_out();

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
  
    Airline airline1;
    airline1.init("JETAIR","DEL","BLR",500,true);

    Airline airline2;
    airline2.init("JETAIR","BLR","LON",1000,true);

    Airline airline3;
    airline3.init("DELTA","DEL","LON",2000,true);

    Airline airline4;
    airline4.init("DELTA","LON","NYC",2000,true);

    Airline airline5;
    airline5.init("INDIGO","LON","NYC", 2500,true);

    Airline airline6;
    airline6.init("INDIGO","DEL","BLR",600,true);

    Airline airline7;
    airline7.init("INDIGO","BLR","PARIS",800,true);

    Airline airline8;
    airline8.init("INDIGO","PAR","LON",300,true);

    insertAirlineData(airline1);
    insertAirlineData(airline2);
    insertAirlineData(airline2);
    insertAirlineData(airline3);
    insertAirlineData(airline4);
    insertAirlineData(airline5);
    insertAirlineData(airline6);
    insertAirlineData(airline7);

    findRoute("DEL", "NYC");

    findRouteWithMeal("DEL","NYC");


    showFlightsFrom("DEL");
    


    return 0;
}