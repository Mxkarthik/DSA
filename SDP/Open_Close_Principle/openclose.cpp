#include <iostream>
#include <vector>
using namespace std;

class Product 
{
    public:
    string name;
    int amount;
    Product(string name , int amount)
    {
        this->name = name;
        this->amount= amount;
    }
};

class ShoppingCart 
{
    protected:
        vector <Product*> products;
    public:
    void addProduct(Product *p)
    {
        products.push_back(p);
    }
    const vector<Product*>& getProducts() const
    {
        return products;
    }

    double calculateTotal() const
    {
        double total = 0;
        for (Product *p : products)
        {
            total += p->amount;
        }
        return total;
    }
};

class InvoicePrinter 
{
    public:
    void printInvoice(const ShoppingCart& cart)
    {
        cout<<"Invoice Printed"<<"\n";
        cout << "Total Amount: $" << cart.calculateTotal() << "\n";
    }  
};

class Persistance {
public:
    virtual ~Persistance() {} // Virtual destructor for base class
    virtual void save(const ShoppingCart *cart) = 0; 
};

class SQLPersistance : public Persistance {
public:
    void save(const ShoppingCart *cart) override {
        cout << "Saving Shopping cart to SQL Database..." << endl;
    }
};

class SaveToMongoDB : public Persistance
{
    public:
    void save(const ShoppingCart *cart) override {
        cout<<"Saving Cart to MongoDB..."<<endl;
    }
};

class FilePersistance : public Persistance
{
    public:
    void save(const ShoppingCart *cart) override {
        cout<<"Saving Shopping cart to MongoDB..."<<endl;
    }
};
int main ()
{
    ShoppingCart *cart = new ShoppingCart();
    cart->addProduct(new Product("Poco",500));
    cart->addProduct(new Product("Display",600));


    ShoppingCart *sc = new ShoppingCart(*cart);
    sc->calculateTotal();

    Persistance* db = new SQLPersistance();
    Persistance *mongo = new SaveToMongoDB(); 
    Persistance *file = new FilePersistance();

    db->save(cart);
    mongo->save(cart);
    file->save(cart);

    delete cart;
    delete sc;
    delete db;
    delete mongo;
    delete file;

    return 0;
}