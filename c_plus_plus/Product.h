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
    int quantity;
    Product *next;



//hidden methods section


public:
//constructor section

Product();
Product(string n,float p,string m,string b,int q,Product *N);
Product(Product &other);

//setters and getters section

//setters 
void setName(string N);
void setPrice(float P);
void setManufacturer(string M);
void setBrand(string B);
void setNext(Product *);
void setQuantity(int);

//getters

string getName()const;
float getPrice()const;
string getManufacturer()const;
string getBrand()const;
int getQuantity()const;
Product*   getNext()const;

//methods section
bool operator==(Product& other)const;
bool operator!=(Product& other)const;
friend ostream& operator<<(std::ostream&, Product&);
friend istream& operator>>(std::istream&,Product&);







};

















#endif