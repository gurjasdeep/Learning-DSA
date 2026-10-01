#include <iostream>
using namespace std;

int sumOfArrayElements(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int prodOfArrayElements(int arr[], int size){
    int prod = 1;
    for (int i = 0; i < size; i++){
        prod *= arr[i];
    }
    return prod;
}

int minArray(int arr[], int size){
    int smallest = INT_MAX;
    int smallest_idx = -1;

    for (int i = 0; i < size; i++){
        int a = arr[i];
        if (a < smallest) {
            smallest_idx = i;
            smallest = a;
        }
    }
    return smallest_idx;
}
int maxArray(int arr[], int size){
    int largest = INT_MIN;
    int largest_idx = -1;

    for (int i = 0; i < size; i++){
        int a = arr[i];
        if (a > largest) {
            largest_idx = i;
            largest = a;
        }
    }
    return largest_idx;
}

int swapMinMax(int arr[], int size){
    int maxIndex = maxArray(arr, size);
    int minIndex = minArray(arr, size);
    swap(arr[minIndex], arr[maxIndex]);
}

int linearSearch(int arr[], int size, int value){
    for (int i = 0; i < size; i++){
        if (arr[i]==value){return i;}
    }
    return -1;
}


void printUnique(int arr[], int size){
    int uniques[size] = {INT_MAX};

}

int main(){
    return 0;
}
