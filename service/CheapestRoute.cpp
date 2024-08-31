#ifndef cheapest_H
#define cheapest_H

#include <bits/stdc++.h>
#include "../database/flights.cpp"
#include "../mode/PrintRoute"

using namespace std;  

void cheapestRoute(string from, string to, bool meal = false){

    set<pair<int,string> > q;
    
    map<string,int> vis;

    map<string,int> cost;

    cost[from] = 0;

    pair<int,string> x;
    x.first = 0;
    x.second = from;
    
    q.insert(x);

    map<string, pair<string,int> > parent;

    int found = 0;

    while(!q.empty()){
        pair<int,string> val = *q.begin();

        vis[val.second] = 1;
        q.erase(q.begin());
    
        for(int i = 0; i < flightsAt[val.second].size(); ++ i)
        {
            if(meal && (flightsAt[val.second][i].isMealAvailable == false))
                continue;
            if(!vis[flightsAt[val.second][i].arrival])
            {
                pair<int,string> y1;
                y1.first = cost[flightsAt[val.second][i].arrival];
                y1.second = flightsAt[val.second][i].arrival;

                pair<int,string> y2;
                y2.second = flightsAt[val.second][i].arrival;
                y2.first = val.first + flightsAt[val.second][i].cost;
                cost[y2.second] = y2.first;
                if(y1.first > y2.first || y1.first == 0)
                {
                    q.erase(y1);
                    q.insert(y2);
                    pair<string,int> x;
                    x.first = val.second;
                    x.second = i;
                    parent[flightsAt[val.second][i].arrival] = x;
                }

                if(flightsAt[val.second][i].arrival == to){
                    found = 1;
                    break;
                }
            }
        }
    }

    vector<Airline> route;
    if(found){
        string cur = to;
        while(cur != from){
            cur = parent[cur].first;
            route.push_back(flightsAt[cur][parent[cur].second]);
        }
    }
    reverse(route.begin(),route.end());
    
    cout << "Cheapest Route :\n";
    printRoute(route);
};

#endif