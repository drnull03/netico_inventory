#include "Food.h"
#include<iostream>
using namespace std;


//constructors
Food::Food():category("Null"),countryOfOrigin(""){}
Food::Food(string c,string coo):category(c),countryOfOrigin(coo){}
Food::Food(Food &other):category(other.category),countryOfOrigin(other.countryOfOrigin){}


//setters
void Food::setCategory(string c){category=c;}
void Food::setCountryOfOrigin(string coo){countryOfOrigin=coo;}

//getters
string Food::getCategory(){return category;}
string Food::getCountryOfOrigin(){return countryOfOrigin;}

//deconstructor
//nothing for now
Food::~Food(){}