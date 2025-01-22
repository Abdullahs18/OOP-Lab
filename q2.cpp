/*Write a function named coinToss that simulates the tossing of a coin. When you call the
function, it should generate a random number in the range of 1 through 2. If the random number
is 1, the function should display “heads.” If the random number is 2, the function should display
“tails.” Demonstrate the function in a program that asks the user how many times the coin should
be tossed and then simulates the tossing of the coin that number of times.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void cointoss(int tossing)
{
    int minvalue=1;
    int maxvalue=2;
    int counter;
    srand(time(0));
    for (counter = 0; counter < tossing; counter++){
	
    
    
    int randomnumber = rand() % (maxvalue - minvalue + 1) + minvalue;
    cout << randomnumber <<endl;
    if (randomnumber == 1)
    {
        cout << "Heads" <<endl;
    }
    if (randomnumber == 2)
    {
        cout << "Tails" <<endl;
    }
}
}
int main()
{
    int no_tossing;
    cout << "Enter the number of times you want to toss: ";
    cin >> no_tossing;
    cointoss(no_tossing);
}
