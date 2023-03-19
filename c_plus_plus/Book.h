#ifndef BOOK_H
#define BOOK_H

#include<iostream>
using namespace std;
class Book{
private:

//properties section
    int pages;
    string name;
    string category;
   



//hidden methods section


public:
//constructor section

Book();
Book(int p,string n,string c);
Book(Book &other);

//setters and getters section

//setters
void setPages(int p);
void setName(int n);
void setCategory(string c);

//getters
int getPages();
string getName();
string getCategory();



//methods section






//deconstructor section
~Book();

};






#endif