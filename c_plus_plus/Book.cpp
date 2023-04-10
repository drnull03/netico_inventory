#include "Book.h"
#include<iostream>

using namespace std;

//constructor section
Book::Book():pages(1),name("No Name"),category("Null"){}
Book::Book(int p,string n,string c):pages(p), name(n),category(c){}
Book::Book(Book &other):pages(other.pages),name(other.name),category(other.category){}

//setters
void Book::setPages(int p){pages=p;}
void Book::setName(int n){name=n;}
void Book::setCategory(string c){category=c;}

//getters
int Book::getPages()const{return pages;}
string Book::getName()const{return name;}
string Book::getCategory()const{return category;}

//methods
bool Book::operator==(Book &other)const {

if(pages==other.pages && category==other.category && name==other.name )return true;
else return false;

}


bool Book::operator!=(Book &other)const{
    if(!(*this==other)) return true;
    else return false;
}


ostream& operator<<(std::ostream&out,Book&B){
out<<"printing Book information"<<endl;
out<<"********************************"<<endl;
out<<"name:"<<B.name<<"\t"<<"pages:"<<B.pages<<"\t"<<"category:"<<B.category<<endl;

return out;
}

istream& operator>>(istream&in,Book&B){
cout<<"please enter BOOK information in the following format name pages category"<<endl;

in>>B.name;

in>>B.pages;

in>>B.category;

return in;
}