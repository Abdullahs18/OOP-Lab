/*Write a function that dynamically allocates an array of integers. The function should accept an
integer argument indicating the number of elements to allocate. The function should return a
pointer to the array.*/
#include <iostream>
using namespace std;
int *memory_allocation(int n){
    int* array=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        cout <<"Enter element #" <<i+1 <<" ";
        cin >>array[i];
    }
    for (int i=0;i<n;i++){
        cout <<array[i] <<" ";
    }
    return array;
}
int main(){
    int n;

    cout <<"Enter number of elements you want to store: ";
    cin >>n;
    cout <<endl;
    int *array=memory_allocation(n);
    delete(array);

}