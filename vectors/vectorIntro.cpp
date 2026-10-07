#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> vec0;
    vector<int> vec1 = {1, 2, 4};
    vector<int> vec2(3, 1500);
    vector<char> vec3 = {'a', 'v', 'c'};
    
    cout << "Size of vec2 - " << vec2.size() << '\n';
    cout << "Size of before push vec0 - " << vec0.size() << '\n';
    // Push back - append item at last
    vec0.push_back(100);
    cout << "Size of vec0 after push back - " << vec0.size() << '\n';
    cout << vec1.back() << endl; // last val


    // delete last item
    vec1.pop_back();
    
    cout << vec1.back() << endl; // last val
    cout << vec1.front() << endl; // frist val

    cout << vec3.at(2) << endl; // at specific index
    
 

    for (char i : vec3){
        cout << i << endl;
    }

    return 0; 
}
