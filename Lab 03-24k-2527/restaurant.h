#ifndef RESTAURANT_H
#define RESTAURANT_H
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
#endif