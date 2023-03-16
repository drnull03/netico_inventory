#ifndef PRODUCT_H
#define PRODUCT_H

//NOTEEEE  other classes will inherite this class 
#include<iostream>
using namespace std;
class Product{
private:
//more properties will be added as needed
//properties section
    string name;
    float price;
    string manufacturer;
    string brand;



//hidden methods section


public:
//constructor section

Product();
Product(string n,float p,string m,string b);
Product(Product &other);

//setters and getters section

//setters
void setName(string N);
void setPrice(float P);
void setManufacturer(string M);
void setBrand(string B);

//getters
string getName();
float getPrice();
string getManufacturer();
string getBrand();

//methods section






//deconstructor section
~Product();

};

















#endif