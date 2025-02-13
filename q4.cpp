#include <iostream>
#include <string>
using namespace std;

class shopping {
private:
  int id;
  string name;
  float price;
  int quantity;

public:
  // Setters
  void id_setter(int id_set) { id = id_set; }
  int id_getter() { return id; }

  void name_setter(string set_name) { name = set_name; }
  string name_getter() { return name; }

  void price_setter(float price_set) { price = price_set; }
  float price_getter() { return price; }

  void quantity_setter(int quantity_set) { quantity = quantity_set; }
  int quantity_getter() { return quantity; }

  // Constructors
  shopping() {
    id = 0;
    name = " ";
    price = 0.0;
    quantity = 0;
  }

  shopping(int id, string name, float price, int quantity) {
    this->id = id;
    this->name = name;
    this->price = price;
    this->quantity = quantity;
  }

  shopping(const shopping &obj) {
    this->id = obj.id;
    this->name = obj.name;
    this->price = obj.price;
    this->quantity = obj.quantity;
  }

  // Member functions
  void add_item() {
    if (quantity > 0) {
      quantity--;
      cout << "Item added to your cart successfully." << endl;
    } else {
      cout << "Item is out of stock!" << endl;
    }
  }

  void remove_item() {
    quantity++;
    cout << "Item removed from your cart successfully." << endl;
  }

  void display_details() {
    cout << "\nItem ID: " << id << endl;
    cout << "Item Name: " << name << endl;
    cout << "Item Price: $" << price << endl;
    cout << "Quantity in Stock: " << quantity << endl;
  }
};

int main() {
  shopping item1;
  shopping item2(2, "Red_Bull", 67.44, 12);
  shopping item3(item2);

  cout << "ID:" << item2.id_getter() << endl;
  cout << "Name:" << item2.name_getter() << endl;
  cout << "Price:" << item2.price_getter() << endl;
  cout << "Quantity:" << item2.quantity_getter() << endl;

  // copy constructor
  cout << "ID:" << item3.id_getter() << endl;
  cout << "Name:" << item3.name_getter() << endl;
  cout << "Price:" << item3.price_getter() << endl;
  cout << "Quantity:" << item3.quantity_getter() << endl;

  item1.name_setter("Gatorade");
  item1.id_setter(1);
  item1.quantity_setter(45);
  item1.price_setter(45.45);

  cout << "ID:" << item1.id_getter() << endl;
  cout << "Name:" << item1.name_getter() << endl;
  cout << "Price:" << item1.price_getter() << endl;
  cout << "Quantity:" << item1.quantity_getter() << endl;

  // Display Menu
  cout << "\nMenu:\n";

  cout << "1. Add Item" << endl;
  cout << "2. Remove Item" << endl;
  cout << "3. Display Details" << endl;
  cout << "4. Switch to other product";
  cout << "5. Exit" << endl;

  int choice;
  string product_name;

  while (true) { 
    cout << "Enter Product Name (Red_Bull or Gatorade): ";
    cin >> product_name;

    if (product_name == "Gatorade") {
        while (true) {
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                item1.add_item();
                break;
            case 2:
                item1.remove_item();
                break;
            case 3:
                item1.display_details();
                item2.display_details();
                break;
            case 4: 
                break; 
            case 5:
                return 0; 
            default:
                cout << "Invalid Choice. Please try again." << endl;
                break;
            }

            if (choice == 4) break; 
        }
    } else if (product_name == "Red_Bull") {
        while (true) {
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                item2.add_item();
                break;
            case 2:
                item2.remove_item();
                break;
            case 3:
                item2.display_details();
                item1.display_details();
                break;
            case 4: 
                break; 
            case 5:
                return 0; 
            default:
                cout << "Invalid Choice. Please try again." << endl;
                break;
            }

            if (choice == 4) break; 
        }
    }
}
}
