#include <iostream>
using namespace std;

int main () {
    int arr[] = {4, 5, 2, 1, 5,67, 7, 0, -4, 3};
    int size = (sizeof(arr)/(sizeof(arr[0])));
    int smallest = INT_MAX;
    int largest_idx = -1;
    int smallest_idx = -1;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++){
        int a = arr[i];
        if (a > largest){
            largest_idx = i;
            largest = a;
        } else if (a < smallest) {
            smallest_idx = i;
            smallest = a;
        }
    }

    cout << "Largest Number in array: " << largest << " at index " << largest_idx << endl;
    cout << "Smallest Number in array: " << smallest << " at index " << smallest_idx << endl;

}
