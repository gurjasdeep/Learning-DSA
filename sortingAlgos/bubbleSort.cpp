#include <iostream>
#include <vector>
using namespace std;


void displayVec(vector<int> arr, int size){
    cout << "{ ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "}";
}

void bubbleSort(vector<int> &arr, bool asc){
    bool sorted = true;
    for (int i = 0; i < arr.size()-1; i++){
        sorted = true;
        for (int j = 0; j < arr.size()-1-i; j++){
            if (arr[j] > arr[j + 1] && asc){
                swap(arr[j], arr[j+1]);
                sorted = false;
            }
            if (arr[j] < arr[j + 1] && !asc){
                swap(arr[j], arr[j+1]);
                sorted = false;
            }
        }
        if (sorted){
            return;
        }
    }
}


int main() {
        
    vector<int> arr = {1, 2, 3, 6, 5, 3, 7, 3 ,21, 0, 1};
    displayVec(arr, arr.size());
    cout << endl;
    bubbleSort(arr, true);
    cout << endl;
    displayVec(arr, arr.size());
    cout << endl;


}

