#include <iostream>
using namespace std;

void printArray(int arr[], int size);


void reverseArray(int arr[], int size);

// O(n)

int main (){
    int arr[] = {193, 32,4,5 , 2, 1, 0, -4, -100, 5,};
    int size = (sizeof(arr)/sizeof(arr[0]));

    cout << "Array before reversing :-" << endl;
    printArray(arr, size);
    reverseArray(arr, size);

    cout << "Array after reversing :-" << endl;
    printArray(arr, size);
    


}

void reverseArray(int arr[], int size){
    int startidx = 0;
    int endidx = size - 1;
    int tmp = 0;
    do {
        // tmp = arr[startidx];
        // arr[startidx] = arr[endidx];
        // arr[endidx] = tmp;
        swap(arr[startidx], arr[endidx]);
        startidx++;
        endidx--;
    } while (startidx < endidx);
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
