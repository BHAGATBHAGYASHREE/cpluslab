#include <iostream>
#include <vector>

using namespace std;

class Product {
public:
    string name;
    float price;
    int quantityInStock;

    Product(string n, float p, int quantity)
        : name(n), price(p), quantityInStock(quantity) {}
};

class ShoppingCart {
public:
    vector<Product> cart;

    void addProduct(const Product& product, int quantity) {
        cart.push_back(product);
        cout << quantity << " " << product.name << "(s) added to the cart." << endl;
    }

    float calculateTotalCost() const {
        float totalCost = 0;
        for (int i = 0; i < cart.size(); ++i) {
            totalCost += cart[i].price * cart[i].quantityInStock;
        }
        return totalCost;
    }

    void displayCartContents() const {
        cout << "Shopping Cart Contents:" << endl;
        for (int i = 0; i < cart.size(); ++i) {
            cout << "Product: " << cart[i].name << ", Quantity: " << cart[i].quantityInStock << ", Price: $" << cart[i].price << endl;
        }
        cout << "Total Cost: $" << calculateTotalCost() << endl;
    }
};

int main() {
    Product product1("Laptop", 999.99, 1);
    Product product2("Smartphone", 499.99, 2);

    ShoppingCart cart;

    cart.addProduct(product1, 1);
    cart.addProduct(product2, 2);

    cart.displayCartContents();

    return 0;
}
