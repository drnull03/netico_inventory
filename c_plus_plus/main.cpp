#include "Warehouse.h"
#include "Food.h"
#include "Book.h"
#include "Electronic.h"
#include "Cloth.h"
#include <stdlib.h>

#include <iostream>
using namespace std;

#define RED "\033[31m"
#define MAG "\033[35m"
#define GREEN "\033[32m"
#define END "\033[0m"
#define BLUE "\033[34m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

// Driver code
int main()
{
    int totalprice = 0;
    int totalprod = 0;
    cout << RED << "Hello Welecome to Netico Inventory!" << END << endl;
    cout << MAG << " _   _      _   _" << endl;
    cout << "| \\ | | ___| |_(_) ___ ___" << endl;
    cout << "|  \\| |/ _ \\ __| |/ __/ _ \\" << endl;
    cout << "| |\\  |  __/ |_| | (_| (_) |" << endl;
    cout << "|_| \\_|\\___|\\__|_|\\___\\___/" << END << endl;

    cout << endl
         << endl;

    cout << "***************************** " << endl;

    cout << GREEN << "hey what would you like to name your WareHouse??" << END;
    string name;
    cin >> name;
    cout << "\n";

    cout << GREEN << "choose a location for your WareHouse!" << END;
    string location;
    cin >> location;
    cout << "\n";
    cout << MAG << "Now creating your WareHouse" << END << endl;
    ProductList<Product *> pl;
    Warehouse WH(location, name, pl);
    cout << MAG << "Created !!!" << END << endl;
    bool exit = false;

    int n;
    Node<Product *> node;
    Product *main;

    int choice;
    int quan;
    int rem;
    int quan1;
    string attrib;
    string value;
    int v;

    do
    {
        Book *B = new Book();
        Food *F = new Food();
        Cloth *C = new Cloth();
        Electronic *E = new Electronic();
        cout << BLUE << "Enter a number from 1 to 10" << endl;
        cout << "1. Add a new product to your inventory." << endl;
        cout << "2. Remove a product from your inventory." << endl;
        cout << "3. Update the details of an existing product." << endl;
        cout << "4. Display all the products in your inventory." << endl;
        cout << "5. Search for a specific product by name, type or brand." << endl;
        cout << "6. Generate a report " << endl;
        cout << "7. Edit warehouse location" << endl;
        cout << "8. Exit the program." << endl;
        cout << "9. clear the console." << endl;
        cout << "10. print the logo" << END << endl;
        cout << "->";
        cin >> n;

        switch (n)
        {
        case 8:
            exit = true;
            break;

        case 7:
            cout << RED << "What would you like the new location to be??" << END << endl;
            cin >> location;
            WH.setLocation(location);

            break;

        case 1:

            cout << MAG << "hey you can add these products \n";
            cout << "1. Book \n2. Food \n3. Clothes \n4. Electronics\n"
                 << END << endl;
            cout << "->";
            cin >> choice;
            if (choice == 1)
            {
                cin >> *B;
                main = dynamic_cast<Product *>(B);
            }
            else if (choice == 2)
            {
                cin >> *F;
                main = dynamic_cast<Product *>(F);
            }
            else if (choice == 3)
            {
                cin >> *C;
                main = dynamic_cast<Product *>(C);
            }
            else
            {
                cin >> *E;
                main = dynamic_cast<Product *>(E);
            }
            cout << MAG << "Now enter how many of the product you want to enter??" << END;
            cin >> quan;
            while (quan--)
            {
                WH + main;
            }

            break;
        case 2:
            cout << MAG << "Enter the number of the Product you want to remove." << END << endl;
            cout << "->";
            cin >> rem;
            cout << MAG << "Enter how much of the product you want to remove." << END << endl;
            cout << "->";
            cin >> quan1;
            if (rem > WH.getList().size())
            {
                cout << RED << "ERROR OUT OF RANGE" << END << endl;
            }
            rem = rem - 1;
            node = WH.getList()[rem];
            if (node.getQuantity() < quan1)
            {
                cout << RED << "ERROR cant remove not enough products!" << END << endl;
            }
            else
            {
                while (quan1--)
                {
                    WH - node.getProduct();
                }
            }

            break;

        case 4:
            cout << YELLOW << WH << END;

            break;

        case 9:
            system("clear");
            break;

        case 10:

            cout << MAG << " _   _      _   _" << endl;
            cout << "| \\ | | ___| |_(_) ___ ___" << endl;
            cout << "|  \\| |/ _ \\ __| |/ __/ _ \\" << endl;
            cout << "| |\\  |  __/ |_| | (_| (_) |" << endl;
            cout << "|_| \\_|\\___|\\__|_|\\___\\___/" << END << endl;

            cout << endl
                 << endl;

            break;

        case 3:

            cout << MAG << "enter the number of the product you want to update" << END << endl;
            cout << "->";
            cin >> rem;
            if (rem > WH.getList().size())
            {
                cout << RED << "ERROR OUT OF RANGE" << END << endl;
                break;
            }
            rem = rem - 1;

            node = WH.getList()[rem];
            cout << MAG << "enter the attribute you want to update" << END << endl;
            cout << "->";
            cin >> attrib;

            cout << MAG << "what do you want to change for?" << END << endl;
            cout << "->";

            // huge if block
            if (node.getProduct()->getType() == "Book")
            {

                if (attrib == "bookName")
                {
                    cin >> value;
                    B = dynamic_cast<Book *>(node.getProduct());
                    B->setName(v);
                }
                if (attrib == "pages")
                {
                    cin >> v;
                    B = dynamic_cast<Book *>(node.getProduct());
                    B->setPages(v);
                }
                if (attrib == "category")
                {
                    cin >> value;
                    B = dynamic_cast<Book *>(node.getProduct());
                    B->setCategory(value);
                }
            }
            if (node.getProduct()->getType() == "Food")
            {
                if (attrib == "category")
                {
                    cin >> value;
                    F = dynamic_cast<Food *>(node.getProduct());
                    F->setCategory(value);
                }
                if (attrib == "countryOfOrigin")
                {
                    cin >> value;
                    F = dynamic_cast<Food *>(node.getProduct());
                    F->setCountryOfOrigin(value);
                }
            }
            if (node.getProduct()->getType() == "Cloth")
            {
                if (attrib == "quality")
                {
                    cin >> v;
                    C = dynamic_cast<Cloth *>(node.getProduct());
                    C->setQuality(v);
                }
                if (attrib == "material")
                {
                    cin >> value;
                    C = dynamic_cast<Cloth *>(node.getProduct());
                    C->setMaterial(value);
                }
            }
            if (node.getProduct()->getType() == "Electronic")
            {
                if (attrib == "size")
                {
                    cin >> v;
                    E = dynamic_cast<Electronic *>(node.getProduct());
                    E->setSize(v);
                }
            }

            break;

        case 5:
            cout << MAG << "you want to search by 1.type 2.brand" << END << endl;
            cout << "->";
            cin >> choice;
            if (choice == 1)
            {
                cout << GREEN << "enter the type that you want to search by?" << END;
                cin >> value;
                bool found = false;
                for (int i = 0; i < WH.getList().size(); i++)
                {
                    //cout<<WH.getList()[i].getProduct()->getType()<<endl;
                    if (value == WH.getList()[i].getProduct()->getType())
                    {
                        cout << RED << "found the item you are looking for at index " << i + 1 << END << endl;
                        found = true;
                    }
                }
                if (!found)
                {
                    cout << RED << "Did not find the item you are looking for" << END << endl;
                }
            }
            else if (choice == 2)
            {
                cout << GREEN << "enter the brand that you want to search by?" << END;
                cin >> value;
                bool found = false;
               
                for (int i = 0; i < WH.getList().size(); i++)
                {   
                    // cout<<WH.getList()[i].getProduct()->getBrand()<<endl;

                    if (value == WH.getList()[i].getProduct()->getBrand())
                    {
                        cout << RED << "found the item you are looking for at index " << i + 1 << END << endl;
                        found = true;
                    }
                }
                if (!found)
                {
                    cout << RED << "Did not find the item you are looking for" << END << endl;
                }
            }
            else
            {
                cout << RED << "ERROR WRONG CHOICE  " << END << endl;
            }

            break;

        case 6:
            cout << RED << "********************************" << endl;
            cout << "The name of your Warehouse is " << WH.getName() << endl;
            cout << "The location of the warehouse is " << WH.getLocation() << endl;

            for (int i = 0; i < WH.getList().size(); i++)
            {
                totalprice += WH.getList()[i].getProduct()->getPrice() * WH.getList()[i].getQuantity();
                totalprod += WH.getList()[i].getQuantity();
            }
            cout << "There are a total of " << totalprod << " products in the warehouse with a total value of " << totalprice << " \t" << endl;
            cout << "End of the report" << endl;
            cout << "********************************" << END << endl;
            cout << endl
                 << endl;
            break;

        default:
            cout << RED << "ERROR PLEASE ENTER A NUMBER FROM 1 TO 10" << END << endl;

            break;
        }

    } while (!exit);

    cout << YELLOW << "Thank you for using Netico Inventory" << endl;

    cout << "have a good day, BYE BYE !!!" << END << endl;

    return 0;
}
