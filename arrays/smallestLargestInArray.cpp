#include <iostream>
using namespace std;

int main () {
    int arr[] = {4, 5, 2, 1, 5,67, 7, 0, -4, 3};
    int size = (sizeof(arr)/(sizeof(arr[0])));
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++){
        int a = arr[i];
        if (a > largest){
            largest = a;
        } else if (a < smallest) {
            smallest = a;
        }
    
    

    }

    cout << "Largest Number in array: " << largest << endl;
    cout << "Smallest Number in array: " << smallest << endl;

}
