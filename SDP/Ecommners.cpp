#include <iostream>
#include <vector>
using namespace std;

class Product 
{
    public:
    int price;
    string name;

    Product(int price , string name)
    {
        this->price = price;
        this->name = name;
    }
};

class ShoppingCart 
{
    public:
    vector<Product*> products;
    int total = 0;

    void AddProduct(Product* p)
    {
        products.push_back(p);
    }

    void CalTotal ()
    {
        total = 0;
        for (Product *p : products)
        {
            total += p->price;
        }
        cout<<"Total :"<<total<<endl;
    }
};

class PrintInvoice 
{
    public:
    void printInvoice()
    {
        cout<<"Invoice Printed"<<"\n";
    }
};

class CartDBStorage 
{
    public:
    void Database()
    {
        cout<<"Database Connected";
    }
};

int main ()
{
    Product *p1 = new Product(200,"Bandage");
    Product *p2 = new Product(300,"Pen");

    ShoppingCart cart;

    cart.AddProduct(p1);
    cart.AddProduct(p2);

    cart.CalTotal();

    PrintInvoice invoice;
    invoice.printInvoice();
    
    CartDBStorage db;
    db.Database();

    delete p1;
    delete p2;

    return 0;
}