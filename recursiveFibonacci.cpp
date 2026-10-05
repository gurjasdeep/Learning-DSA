#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n ==0 || n == 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main () {

    int n {0};
    cout << "Enter Number: ";
    cin >> n;

    int fib = fibonacci(n);
    cout << ">> " << fib << endl;


}
