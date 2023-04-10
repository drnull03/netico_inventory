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
string Food::getCategory()const{return category;}
string Food::getCountryOfOrigin()const{return countryOfOrigin;}


bool Food::operator==(  Food &other ) const{
    if(category==other.category && countryOfOrigin==other.countryOfOrigin && countryOfOrigin!=other.countryOfOrigin){return true;}else{return false;}
}

bool Food::operator!=(Food &other)const {
    return (!(*this==other));
}

ostream& operator<<(std::ostream&out,Food&F){
out<<"printing Food information"<<endl;
out<<"********************************"<<endl;
out<<"category:"<<F.category<<"\t"<<"countryoforigin:"<<F.countryOfOrigin<<endl;

return out;

}

istream& operator>>(std::istream&in,Food&F){
cout<<"please enter Food information in the following format category countryoforigin"<<endl;

in>>F.category;

in>>F.countryOfOrigin;



return in;

}