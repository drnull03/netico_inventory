#include "Food.h"
#include<iostream>
using namespace std;

Food::Food():expirationDate(0),countryOfOrigin(""){}
Food::Food(int exp,string coo):expirationDate(exp),countryOfOrigin(coo){}
Food::Food(Food &other):expirationDate(other.expirationDate),countryOfOrigin(other.countryOfOrigin){}