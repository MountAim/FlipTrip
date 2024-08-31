#ifndef findMeal_H
#define findMeal_H

#include <bits/stdc++.h>

#include "CheapestRoute.cpp"
#include "MinimumHoopRoute.cpp"
#include "../database/Flights.cpp"
#include "../mode/PrintRoute"


using namespace std;    

void findRouteWithMeal(string from, string to)
{
    minimumHoopRoute(from, to, true);
    cheapestRoute(from,to,true);
}

#endif