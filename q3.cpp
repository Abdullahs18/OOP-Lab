/*Write a function that accepts three arguments: an array, the size of the
array, and a number n. Assume that the array contains integers. The function
should display all of the numbers in the array that are greater than the number
n.*/
#include <iostream>
using namespace std;

void function(int array[], int n, int num) {
  int comparenumber = num;

  for (int i = 0; i < n; i++) {

    if (array[i] > comparenumber) {
      cout << "Number: ";
      cout << array[i] << endl;
    }
  }
}
int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int num;
  cout << "Enter array elements: ";
  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  cout << "Enter number a you want to compare: ";
  cin >> num;
  function(array, n, num);
}