#include <iostream>
using namespace std;

void garbagePointers();
void multiplePointers();


int main() {

    garbagePointers();

}

void garbagePointers(){
    int* p;
    cout << p << endl;
    cout << *p << endl;
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
