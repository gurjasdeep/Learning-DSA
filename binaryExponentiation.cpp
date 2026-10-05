
#include <iostream>
using namespace std;


double power(double x, int n){

    double ans = 1;
    int sign;
    if (n < 0){
        sign = -1;
        n = 0-n;
    } else {sign = 1;}

    while (n > 0){
        if (n % 2){
            ans = ans * x;
        }
        x = x * x;
        n /= 2;
    }
    if (sign < 0){
        ans = 1/ans;
    }
    return ans;


} 


int main () {
    double num = 2.2;
    int x = 2;
    double ans = power(num, x);
    cout << num << " to power " << x << " is:\n" << ans << endl;

}
