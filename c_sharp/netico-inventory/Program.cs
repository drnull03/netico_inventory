using System;



class netico_inventory{
static void Main(string[] args) {



}


 }




class Item {
    private string name;
    private double price;
    private string manufacturer;
    private string brand;
    private int quantity;

    public Item() {
        name = "";
        price = 0.0;
        manufacturer = "";
        brand = "";
        quantity = 0;
    }

    public Item(string n, double p, string m, string b, int q) {
        name = n;
        price = p;
        manufacturer = m;
        brand = b;
        quantity = q;
    }

    public Item(Item other) {
        name = other.name;
        price = other.price;
        manufacturer = other.manufacturer;
        brand = other.brand;
        quantity = other.quantity;
    }

    
}


//in the future Food will iherite from item

class Food  {
    private DateTime expirationDate;
    private string countryOfOrigin;

    public Food()  {
        expirationDate = DateTime.MinValue;
        countryOfOrigin = "";
    }

    public Food( DateTime e, string c)  {
        expirationDate = e;
        countryOfOrigin = c;
    }

    public Food(Food other)  {
        expirationDate = other.expirationDate;
        countryOfOrigin = other.countryOfOrigin;
    }

   
}

class Cloth {
    private string size;
    private string material;

    public Cloth()  {
        size = "";
        material = "";
    }

    public Cloth(string s, string mat)  {
        size = s;
        material = mat;
    }

    public Cloth(Cloth other) {
        size = other.size;
        material = other.material;
    }

    
}

class Inventory {
    private int capacity;
    private int count;
    private Item[] items;

    public Inventory(int c) {
        capacity = c;
        count = 0;
        //items = new Item[capacity];   //this will be added later
    }

    public Inventory(){
        capacity=100;
        count=0;
    }
    
    public Inventory(Inventory other){
        capacity=other.capacity;
        count=other.count;

    }

   
}

 