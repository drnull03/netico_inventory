#include "Electronic.h"
#include<iostream>

using namespace std;

//constructor section
Electronic::Electronic():size(-1),type("Null"){}
Electronic::Electronic(int s,string t):size(s),type(t){}
Electronic::Electronic(Electronic &other):size(other.size),type(other.type){}
//setters
void Electronic::setSize(int s){size=s;}
void Electronic::setType(string t){type=t;}


//getters
int Electronic::getSize()const{return size;}
string Electronic::getType()const{return type;}


bool Electronic::operator==(Electronic  &other)const{
    if(size==other.size && type==other.type)return true;
    else return false;
}

bool Electronic::operator!=(Electronic &other)const{

    return !(*this == other);
}

ostream& operator<<(std::ostream&out,Electronic&E){
out<<"printing Electronic information"<<endl;
out<<"********************************"<<endl;
out<<"size:"<<E.size<<"\t"<<"type:"<<E.type<<endl;


return out;

}

istream& operator>>(std::istream&in,Electronic&E){
cout<<"please enter Electronic information in the following format  size type"<<endl;

in>>E.size;

in>>E.type;


return in;


}