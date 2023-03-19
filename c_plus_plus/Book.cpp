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
int Book::getPages(){return pages;}
string Book::getName(){return name;}
string Book::getCategory(){return category;}

//deconstructor section
//empty for now
Book::~Book(){}