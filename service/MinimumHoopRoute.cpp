#ifndef min_H
#define min_H

#include <bits/stdc++.h>
#include "Airline.cpp"
#include "../database/Flights.cpp"
#include "../mode/PrintRoute"

using namespace std;  

void minimumHoopRoute(string from, string to,bool meal = false){

    queue<string> q;
    map<string,int> vis;

    vis[from] = 1;
    q.push(from);

    map<string, pair<string,int> > parent;

    int found = 0;

    while(!q.empty()){

        string val = q.front();
        q.pop();
    
        for(int i = 0; i < flightsAt[val].size(); ++ i)
        {
            if(meal && (flightsAt[val][i].isMealAvailable == false))
                continue;
            if(vis[flightsAt[val][i].arrival] == 0)
            {
                q.push(flightsAt[val][i].arrival);
                vis[flightsAt[val][i].arrival] = 1;

                pair<string,int> x;
                x.first = val;
                x.second = i;
                
                parent[flightsAt[val][i].arrival] = x;
             
                if(flightsAt[val][i].arrival == to){
                    found = 1;
                    break;
                } 
            }
        }
    }

    vector<Airline> route;
    if(found){
        string cur = to;
        int curIdx = -1;
        while(cur != from){

            curIdx = parent[cur].second;
            cur = parent[cur].first;
            route.push_back(flightsAt[cur][curIdx]);
        }
    }
    reverse(route.begin(),route.end());

    cout << "Route with minimum Hoop :\n";
    printRoute(route);
}

#endif