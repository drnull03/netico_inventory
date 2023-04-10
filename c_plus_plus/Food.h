#ifndef FOOD_H
#define FOOD_H
#include<iostream>
using namespace std;


class Food{
private:
//more properties will be added as needed
//properties section
   string category;
   string countryOfOrigin;
  



//hidden methods section


public:
//constructor section

Food();
Food(string c,string coo);
Food(Food &other);

//setters and getters section

//setters
void setCategory(string c);
void setCountryOfOrigin(string coo);

//getters
string getCategory()  const;
string getCountryOfOrigin()const;


//methods section


bool operator==( Food&)const;
bool operator!=( Food&)const;
friend ostream& operator<<(std::ostream&, Food&);
friend istream& operator>>(std::istream&,Food&);








};







#endif