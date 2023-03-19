#include "Product.h"
#include <iostream>

using namespace std;
//Note later other Products will iherite form this class


//constructor implementation
Product::Product():name(""),price(0.0),manufacturer("Unknown"),brand("Unknown"),expDate("000000"),prodDate("000000"),color(""){}
Product::Product(string n,float p,string m,string b,string eD,string pD,string c):name(n),price(p),manufacturer(m),brand(b),expDate(eD),prodDate(pD),color(c){}
Product::Product(Product &other):name(other.name),price(other.price),manufacturer(other.manufacturer),brand(other.brand),expDate(other.expDate),prodDate(other.prodDate),color(other.color){}


//getters and setters 

//setters
void Product::setName(string N) {name=N;}
void Product::setPrice(float P){price=P;}
void Product::setManufacturer(string M){manufacturer=M;}
void Product::setBrand(string B){brand=B;}
void Product::setExpDate(string eD){expDate=eD;}
void Product::setProdDate(string pD){prodDate=pD;}
void Product::setColor(string c){color=c;}


//getters
string Product::getName(){return name;}
float Product::getPrice(){return price;}
string Product::getManufacturer(){return manufacturer;}
string Product::getBrand(){return brand;}
string Product::getExpDate(){return expDate;}
string Product::getProdDate(){return prodDate;}
string Product::getColor(){return color;}


//deconstructor

//empty for now
Product::~Product(){


}