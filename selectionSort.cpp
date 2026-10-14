#include <iostream>
using namespace std;


void selectionSort(int *nums, int size){
    int mIdx = 0, mNum = INT_MAX;
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            if (*(nums + j) < mNum){
                mIdx = j;mNum = *(nums + j);
            }
        }
        swap(*(nums+i), *(nums+mIdx));
        mNum = INT_MAX;
    }
}

void displayArr(int *arr, int size){
    cout << "{ ";
    for (int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << "}";
}

int main(){
    int size = 11;
    int arr[11] = {235, 542, 5,33, 2, 3, 23, 4,35, 23,53};
    displayArr(arr, size);
    cout << endl;
    selectionSort(arr, size);
    displayArr(arr, size);
}
