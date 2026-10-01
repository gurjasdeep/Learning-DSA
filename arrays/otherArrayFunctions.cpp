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
    return 0;
}

int linearSearch(int arr[], int size, int value){
    for (int i = 0; i < size; i++){
        if (arr[i]==value){return i;}
    }
    return -1;
}

void printArray(int arr[], int size){
    cout << "{ ";
    for (int i = 0; i < size; i++){
        cout << arr[i];
        if (i < size-1){
            cout << ", ";
        }
    }
    cout << " }" << endl;
}


void printUnique(int arr[], int size){
    /*
    int a = 0;
    int foundIndex;
    for (int i = 0; i < size; i++){
        a = arr[i];
        arr[i] = a-1;
        foundIndex = linearSearch(arr, size, a);
        if (foundIndex >= 0){
            arr[i] = arr[i+1]
        }
    }*/
    int tarr[size];
    int defValue = 0;
    bool defValueFound = 0;
    fill(tarr, tarr + size, defValue);
    int num = 0, foundIndex = 0;
    int numsFound = 0;
    for (int i = 0; i < size; i++){
        num = arr[i];
        foundIndex = linearSearch(tarr, size, num);
        if (tarr[foundIndex]==0 && !defValueFound){
            numsFound++;
            defValueFound = 1;
        }
        if (foundIndex == -1){
            tarr[numsFound] = num;
            numsFound++;
        }
    }
    printArray(tarr, numsFound);
}

void printIntersection(int arr1[], int size1, int arr2[], int size2){
    int otherIndex;
    for (int i = 0; i < size1; i++){
        otherIndex = linearSearch(arr2, size2, arr1[i]);
        if (otherIndex>=0){
            cout << arr1[i] << " ";
        }
    }
}

int main(){
    int a[] = {1, 3, 2, 3, 3, 3, 0, 3, 4, 5, 6, 1, 2, 3};
    int b[] = {12, 2 , 342 ,43, 5, 5 ,2};
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    printUnique(a, size1);
    printIntersection(a, size1, b, size2);
}
