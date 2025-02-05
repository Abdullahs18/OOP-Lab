/* A local zoo wants to keep track of how many pounds of food each of its three
monkeys eats each day during a typical week. Write a program that stores this
information in a two-dimensional 3 × 5 array, where each row represents a
different monkey and each column represents a different day of the week. The
program should first have the user input the data for each monkey. Then it
should create a report that includes the following information:
• Average amount of food eaten per day by the whole family of monkeys.
• The least amount of food eaten during the week by any one monkey.
• The greatest amount of food eaten during the week by any one monkey.
Input Validation: Do not accept negative numbers for pounds of food eaten*/
#include <iostream>
using namespace std;
void monkey() {
  int row;
  int column;
  float arr[3][5];
  for (row = 0; row < 3; row++) {
    cout <<"Enter food for monkey: "<<row+1;
    cout<<"\n";
    for (column = 0; column < 5; column++) {
    	cout <<"Enter food for day"<<column+1<<":";
    	
      
      cin >> arr[row][column];
    }
  }
  float sum = 0;

  for (row = 0; row < 3; row++) {
    for (column = 0; column < 5; column++) {
      sum = sum + arr[row][column];
    }
  }
  float average = sum / 15;
  cout << "Average: " <<average <<"Pounds";
  cout <<"\n";

  float least = arr[0][0];
  for (row = 0; row < 1; row++) {
    for (column = 0; column < 5; column++) {
      if (arr[row][column] < least) {
        least = arr[row][column];
      }
    }
  }
  cout <<"Least amount of food consume by monkey 1 is:" <<least <<"Pounds";
  cout <<"\n";
  
  float greatest = arr[1][0];
  for (row = 1; row < 2; row++) {
    for (column = 0; column < 5; column++) {
      if (arr[row][column] > greatest) {
        greatest = arr[row][column];
      }
    }
  }
  cout <<"Greatest amount of food consume by monkey 2 is:" <<greatest <<"Pounds";
  cout <<"\n";
}

int main() { monkey(); }