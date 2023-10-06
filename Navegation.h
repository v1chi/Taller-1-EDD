#pragma once
#include <bits/stdc++.h>
#include "Software.h"
using namespace std;

class Navegation: public Software
{
    private:
    vector<string> historial;
    
    public:
    Navegation(string name, string developer, int price);
    void addPage(string url);
    string seeHistorial();
};


Navegation::Navegation(string name, string developer, int price):Software(name, developer, price){};

void Navegation::addPage(string url)
{
    this->historial.push_back(url);
};
string Navegation::seeHistorial()
{   
    string url = "";
    for (int i = 0; i < this->historial.size(); i++){
        url += this->historial[i] + "\n";
    }
    return url;
};