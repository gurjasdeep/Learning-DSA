#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value);
// function that returns index of the value that we want in array
// returns -1 if value is not in array
// Time Complexity O(n)

int main () {
    int arr[] = {22, 45, 24, 1, 3, 5, 7, 3, 0, 1, -2};
    int size = (sizeof(arr)/sizeof(arr[0]));
    int valueToSearch = -2;
    int idx = linearSearch(arr, size, valueToSearch);

    switch (idx)
    {
    case -1:
        cout << "The value " << valueToSearch << " is not in the array";
        break;
    
    default:
        cout << "The value " << valueToSearch << " is at index " << idx << endl;

        break;
    }
}

int linearSearch(int arr[], int size, int value){
    for (int i = 0; i < size; i++){
        if (arr[i]==value){return i;}
    }
    return -1;
}

