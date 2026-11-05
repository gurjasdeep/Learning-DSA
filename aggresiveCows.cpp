#include <iostream>
#include <vector>
using namespace std;

int aggresiveCows(vector<int> &nums, int k) {
    int st = 1;
    int end = nums[nums.size() - 1] - nums[0];
    int mid, lastAns = 0;
    while (st <= end){
        mid = st + (end - st)/ 2;
        if (isPossible(nums, k, mid)){
            lastAns = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return lastAns;
}

bool isPossible(vector<int> &nums, int k, int d) {
    auto st = 0;
    auto aC = 1;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] - nums[st] >= d){
            st = i;
            aC++;
        }
        if (aC == k){return true;}

    }
    return false;
}
