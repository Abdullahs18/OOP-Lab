/*Write a program that asks the user to enter today’s sales for five stores. The program should then
display a bar graph comparing each store’s sales. Create each bar in the bar graph by displaying
a row of asterisks. Each asterisk should represent $100 of sales.*/
#include <iostream>
using namespace std;
void asterics()
{
    int myarr[5];
    cout << "Enter array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    cout <<"Inputted Values: ";
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        int numberstar = myarr[i] / 100;
        for (int i = 0; i < numberstar; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    asterics();
}