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

int binarySearch(int *arr, int size, int target) {
    int cS = 0;
    int cE = size - 1;

    while (cS <= cE) {
        int cMid = cS + (cE - cS) / 2;

        cout << "Checking index " << cMid << endl;

        if (*(arr + cMid) == target) {
            cout << "Found " << target
                 << " at index " << cMid << endl;

            return cMid;
        }
        else if (*(arr + cMid) < target) {
            cS = cMid + 1;
        }
        else {
            cE = cMid - 1;
        }
    }

    return -1;
}

void displayArr(int *arr, int size){
    cout << "{ ";
    for (int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << "}";
}

int main() {
    int arr[5] = {23, 43, 5, 65, 4};
    int size = 5;
    selectionSort(arr, size);
    displayArr(arr, size);
    cout << endl;
    binarySearch(arr, 5, 65);

}
