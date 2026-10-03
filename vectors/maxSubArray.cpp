class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum = 0;
        for (int v : nums){
            sum += v;
            maxSum = sum>maxSum ? sum : maxSum;
            if (sum < 0){sum = 0;}
        }
        return maxSum;
    }
};
