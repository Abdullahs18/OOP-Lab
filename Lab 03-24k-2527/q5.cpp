#include <iostream>
#include "RetailItem.h"

int main (){
    RetailItem item1,item2,item3;
    item1.set_description("Jacket");
    item1.set_units(12);
    item1.set_retail_price(59.95);


    item2.set_description("Designer Jeans");
    item2.set_units(40);
    item2.set_retail_price(34.95);

    item3.set_description("Shirt");
    item3.set_units(20);
    item3.set_retail_price(24.95);


    cout << "Item #1: " << item1.get_description() << ", Units On Hand: " << item1.get_units() << ", Price: $" << item1.get_retail_price() << endl;
    cout << "Item #2: " << item2.get_description() << ", Units On Hand: " << item2.get_units() << ", Price: $" << item2.get_retail_price() << endl;
    cout << "Item #3: " << item3.get_description() << ", Units On Hand: " << item3.get_units() << ", Price: $" << item3.get_retail_price() << endl;




    return 0;


}