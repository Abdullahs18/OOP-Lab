/*In statistics, the mode of a set of values is the value that occurs most often or with the greatest
frequency. Write a function that accepts as arguments the following: A) An array of integers B)
An integer that indicates the number of elements in the array The function should determine the
mode of the array. That is, it should determine which value in the array occurs most often. The
mode is the value the function should return. If the array has no mode (none of the values occur
more than once), the function should return −1. (Assume the array will always contain nonnegative
values.) Demonstrate your pointer prowess by using pointer notation instead of array notation in
this function.*/

#include <iostream>
using namespace std;

int mode(int array[], int n) {
    
    int count, maxCount = 0;
    int* modeValue = &array[0];

    for (int i = 0; i < n; i++) {
        count = 0; 
    for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
            }
        if (count > maxCount) {
            maxCount = count;
            modeValue = &array[i];
        }
        
        	
}
    
    
    if (maxCount>1){
        return *modeValue;

    }
    else{
        return -1;
    }

    

}

int main() {
    int n;
    cout <<"Enter size of array:";
    cin >>n;
    int* array=new int[n];
    cout <<"Enter array elements:";
    for (int i=0;i<n;i++){
        cin >>array[i];
    }
    int answer=mode(array,n);
    cout <<answer;

  
}

