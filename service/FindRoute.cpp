#ifndef find_H
#define find_H

#include <bits/stdc++.h>

#include "CheapestRoute.cpp"
#include "MinimumHoopRoute.cpp"
#include "../database/Flights.cpp"
#include "../mode/PrintRoute"


using namespace std;    

void findRoute(string from, string to)
{
    minimumHoopRoute(from, to);
    cheapestRoute(from,to);
}

#endif