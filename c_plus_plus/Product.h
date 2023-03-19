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
    string expDate;
    string prodDate;
    string color;



//hidden methods section


public:
//constructor section

Product();
Product(string n,float p,string m,string b,string eD,string pD,string c);
Product(Product &other);

//setters and getters section

//setters 
void setName(string N);
void setPrice(float P);
void setManufacturer(string M);
void setBrand(string B);
void setExpDate(string eD);
void setProdDate(string pD);
void setColor(string c);


//getters

string getName();
float getPrice();
string getManufacturer();
string getBrand();
string getExpDate();
string getProdDate();
string getColor();

//methods section






//deconstructor section
~Product();

};

















#endif