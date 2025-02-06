#include <iostream>
#include "restaurant.h"
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
