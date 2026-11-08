#include <iostream>
#include <vector>
using namespace std;

void displayVec(vector<int> arr){
    cout << "{ ";
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << "}";
}

void dnfSort(vector<int> nums){
    int s = 0, l = 0, h = nums.size()-1;
    for (int i = 0; i < nums.size(); i++){
        cout << "found " << nums[i] << " at " << i << endl;
        cout << s << l << h << endl;
        switch (nums[i])
        {
        case 0:
            
            swap(nums[s], nums[i]);
            cout << "swapping " <<nums[i] <<" at "<< i <<" with " << nums[s] <<" at " <<s <<endl;
            s++;
            l++;
            break;
        case 1:
            swap(nums[l], nums[i]);
            l++;
            break;
        case 2:
            swap(nums[h], nums[i]);
            h--;
        default:
            break;
        }
        if (h == l){
            break;
        }
    }

    displayVec(nums);
}



int main (){
    vector<int> a = {2,0,2,1,1,0};
    displayVec(a);
    cout << endl;
    dnfSort(a);
    cout << endl;
    displayVec(a);
    cout << endl;
    return 0;

}
