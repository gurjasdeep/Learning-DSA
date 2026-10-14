#include <iostream>
using namespace std;

void garbagePointers();
void multiplePointers();
void ptrMath();

int main() {

    ptrMath();

}

void garbagePointers(){
    int* p;
    cout << p << endl;
    cout << *p << endl;
}

void ptrMath(){
    int a = 0;
    int b = 0;
    int *ptr1 = &(a += 20);
    int *ptr2 = &(b = a +  40);

    cout << *ptr1 << endl;
    cout << ptr1 << endl;
    cout << endl;
    cout << *ptr2 << endl;
    cout << ptr2 << endl;
    cout << endl;
    cout << ptr2 - ptr1 << endl;
    // how many ints can be stored between the memory addresses where ptr1 and ptr2 point.
    
} 


void multiplePointers(){
    int a = 10;
    int *a_P = &a;
    int** a_P_P = &a_P;
    int*** a_P_P_P = &a_P_P;

    cout << a << endl;
    cout << a_P << endl;
    cout << *a_P << endl;
    cout << a_P_P << endl;
    cout << *a_P_P << endl;
    cout << *(*a_P_P) << endl;
    cout << a_P_P_P << endl;
    cout << *a_P_P_P << endl;
    cout << *(*a_P_P_P) << endl;
    cout << *(*(*a_P_P_P)) << endl;
}
