/*Write a class named RetailItem that holds data about an item in a retail store.
The class should have the following member variables:
• description— a string that holds a brief description of the item
• unitsOnHand— an int that holds the number of units currently in inventory
• price— a double that holds the item’s retail price
Write appropriate mutator functions that store values in these member variables, and accessor
functions that return the values in these member variables. Once you have written the class,
write a separate program that creates three RetailItem objects and stores the following data in them:*/
#ifndef RETAILITEM_H
#define RETAILITEM_H
#include <string>
using namespace std;

class RetailItem{
    private:
    string description;
    int number_of_units;
    double retail_price;
    public:
    void set_description(string desc){
        description=desc;

    }
    string get_description(){
        return description;
    }
    void set_units(int unt){
        number_of_units=unt;
    }
    int get_units(){
        return number_of_units;
    }
    void set_retail_price(double price){
        retail_price=price;

    }
    double get_retail_price(){
        return retail_price;
    }
};
#endif