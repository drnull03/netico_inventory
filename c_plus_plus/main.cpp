#include "Warehouse.h"
#include "Product.h"
#include "ProductList.h"
#include "Food.h"
#include "Book.h"
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
ProductList P;
Product p1("router",12.5,"Dl-link","Dl-link",4,NULL);
Product p2("apple",11.5,"farmerforme","farmerforme",2,NULL);
P.add_at(0,p1);
P.add_at(0,p2);
//cout<<P;
P.remove_at(0);
Warehouse netico_inventory("Syria",P);



return 0;
}