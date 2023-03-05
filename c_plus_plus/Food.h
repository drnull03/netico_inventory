#ifndef FOOD_H
#define FOOD_H
#include<iostream>
using namespace std;


class Food{
private:
//more properties will be added as needed
//properties section
   int expirationDate;
   string countryOfOrigin;
  



//hidden methods section


public:
//constructor section

Food();
Food(int exp,string coo);
Food(Food &other);

//setters and getters section
//for now there is no getters and setters because the constructor is sufficiant 


//methods section






//deconstructor section




};







#endif