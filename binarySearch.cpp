#include <iostream>
#include <vector>
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

int binarySearchol(int *arr, int size, int target) {
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

int binarySearch(vector<int>& nums, int start, int end, int target){
    while (start <= end){
        int mid = start + ((end-start)/2);
        if (nums[mid] > target){
            end = mid - 1;
        }
        else if (nums[mid] < target){
            start = mid + 1;
        }
        else {
            return mid;
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
void displayVec(vector<int> arr, int size){
    cout << "{ ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "}";
}

int main() {
    vector<int> arr = {3, 4, 5, 65, 100};
    int size = 5;
    // selectionSort(arr, size);
    displayVec(arr, arr.size());
    cout << endl;
    int toFind = 100;
    int foundAt = binarySearch(arr, 0, arr.size()-1, toFind);
    cout << "Found " << toFind << " AT " << foundAt << endl;



}
