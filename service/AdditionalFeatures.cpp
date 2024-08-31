#include <bits/stdc++.h>
#include "Airline.cpp"
using namespace std;  


class service: public Airline{

    public:
    int isServiceAllowed(){
        return 0;
    }

};