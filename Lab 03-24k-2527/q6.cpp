/*You are building a system for a restaurant to manage customer orders. Each order has a unique
order number, a list of ordered items, and the total cost of the order. The restaurant offers discounts
on large orders. If the total cost of an order exceeds a certain amount, a discount is applied.
Order Class Design:
 Data Members (Variables):
 orderNumber: An integer that stores the unique order number.
 items: A list (or array) of strings that stores the names of the items ordered.
 totalCost: A double that stores the total cost of the order before any discount.
 discount: A double that stores the discount percentage applied to the order (default is 0%).
 Member Functions (Methods):
 setOrderNumber: A mutator function to set the order number.
 setItems: A mutator function to set the list of items ordered.
 setTotalCost: A mutator function to set the total cost before discount.
 applyDiscount: A function to apply a discount to the order if the total cost is above a
certain threshold (e.g., if the total cost exceeds $50, apply a 10% discount).
 calculateFinalCost: A function to calculate the final cost of the order after applying any
discount.
 displayOrderDetails: A function to display the order number, items ordered, total cost, and
final cost.*/
#include <iostream>
#include <string>

using namespace std;



class Order {
private:
    int orderNumber;
    string items[10];  
    int itemCount;            
    double totalCost;
    double discount;

public:
    
    Order() {
        orderNumber = 0;
        itemCount = 0;
        totalCost = 0.0;
        discount = 0.0;  
    }

    
    void setOrderNumber(int num) {
        orderNumber = num;
    }

    void setItems(string orderItems[], int count) {
        if (count > 10) {
            cout << "Too many items! Maximum allowed is " << 10 << ".\n";
            return;
        }
        itemCount = count;
        for (int i = 0; i < itemCount; i++) {
            items[i] = orderItems[i];
        }
    }

    void setTotalCost(double cost) {
        totalCost = cost;
    }

    
    void applyDiscount() {
        if (totalCost > 50) {
            discount = 10.0;  
        } else {
            discount = 0.0;  
        }
    }

    
    double calculateFinalCost() {
        return totalCost - (totalCost * (discount / 100));
    }

    
    void displayOrderDetails() {
        cout << "\n Order Details " << endl;
        cout << "Order Number: " << orderNumber << endl;
        cout << "Items Ordered: ";
        for (int i = 0; i < itemCount; i++) {
            cout << items[i];
            if (i < itemCount - 1) cout << ", ";
        }
        cout << "\nTotal Cost (Before Discount): $" << totalCost << endl;
        cout << "Discount Applied: " << discount << "%" << endl;
        cout << "Final Cost (After Discount): $" << calculateFinalCost() << endl;
        
    }
};

int main() {
    Order myOrder;
    int orderNum;
    int numItems;
    string orderedItems[10];
    double cost;

    cout << "Enter Order Number: ";
    cin >> orderNum;
    myOrder.setOrderNumber(orderNum);

    cout << "Enter number of items: ";
    cin >> numItems;
    cin.ignore(); 

    if (numItems > 10) {
        cout << "Too many items! Maximum allowed is " << 10 << ".\n";
        return 1;  
    }

    for (int i = 0; i < numItems; i++) {
        cout << "Enter item " << i + 1 << ": ";
        getline(cin, orderedItems[i]);
    }
    myOrder.setItems(orderedItems, numItems);

    cout << "Enter total cost of the order: $";
    cin >> cost;
    myOrder.setTotalCost(cost);

    
    myOrder.applyDiscount();

    
    myOrder.displayOrderDetails();

    return 0;
}
