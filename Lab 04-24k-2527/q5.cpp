
#include <iostream>
using namespace std;

class Numbers {
private:
  int num;
  static string lessthan20[20];
  static string lessthan100[10];
  static string lessthan1000[10];
  static string lessthan10000[10];

public:
  Numbers(int n) {
    if (n < 0 || n > 9999) {
      cout << "Invalid number! Enter a number between 0 and 9999." << endl;
      exit(1);
    }
    num = n;
  }

  void print();
};

string Numbers::lessthan20[20] = {
    "zero",    "one",     "two",       "three",    "four",
    "five",    "six",     "seven",     "eight",    "nine",
    "ten",     "eleven",  "twelve",    "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

string Numbers::lessthan100[10] = {"",       "",      "twenty", "thirty",
                                   "forty",  "fifty", "sixty",  "seventy",
                                   "eighty", "ninety"};

string Numbers::lessthan1000[10] = {"",
                                    "one hundred",
                                    "two hundred",
                                    "three hundred",
                                    "four hundred",
                                    "five hundred",
                                    "six hundred",
                                    "seven hundred",
                                    "eight hundred",
                                    "nine hundred"};

string Numbers::lessthan10000[10] = {"",
                                     "one thousand",
                                     "two thousand",
                                     "three thousand",
                                     "four thousand",
                                     "five thousand",
                                     "six thousand",
                                     "seven thousand",
                                     "eight thousand",
                                     "nine thousand"};

void Numbers::print() {
  if (num == 0) {
    cout << "zero" << endl;
    return;
  }

  int n = num;
  if (n >= 1000) {
    cout << lessthan10000[n / 1000] << " ";
    n %= 1000;
  }
  if (n >= 100) {
    cout << lessthan1000[n / 100] << " ";
    n %= 100;
  }
  if (n >= 20) {
    cout << lessthan100[n / 10] << " ";
    n %= 10;
  }
  if (n > 0) {
    cout << lessthan20[n] << " ";
  }
  cout << endl;
}

int main() {
  int userInput;
  cout << "Enter a number between 0 and 9999: ";
  cin >> userInput;

  Numbers num(userInput);
  cout << "Number in words: ";
  num.print();

  return 0;
}
