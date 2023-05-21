#include "Warehouse.h"
#include "Food.h"
#include "Book.h"
#include "Electronic.h"
#include "Cloth.h"

#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    Book newBook,test,haha;
 Food f;
    ProductList<Product*> l;
    Product *p[4];
    p[0] = &f;
    p[1] = &newBook;
    p[2] = &test;
    p[3] = &haha;
    l.add_at(1,1,p[1]);
    l.add_at(2,4,p[2]);
    l.add_at(3,3,p[3]); 

     cout << l.size() << endl;
    cout << l;
    ProductList<Product*> l2;
    l2 = l;
    cout << "================================================================\n";



  Warehouse myWarehouse("name",l2);
    
    cout << "================================================================\n";
    cout << myWarehouse.getLocation()<<endl;
    myWarehouse + p[0];
    myWarehouse - p[1];






return 0;
}