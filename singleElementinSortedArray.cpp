class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0, mid, lastMid;
        int origSt = 0;
        int origEnd = nums.size()-1;
        int end = origEnd;
        if (end == st){
            return nums[mid];
        }
        if (nums[st] != nums[st+1]){
            return nums[st];
        }
        if (nums[end] != nums[end-1]){
            return nums[end];
        }
        while (st <= end){
            mid = st + (end - st)/2;
            if (mid == lastMid){
                mid++;
            }
            if (nums[mid] == nums[mid-1] && nums[mid] != nums[mid+1]){
                if ((mid - origSt)%2 != 0){
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
            else if (nums[mid] != nums[mid-1] && nums[mid] == nums[mid+1]){
                if ((origEnd - mid)%2 != 0){
                    end = mid + 1;
                } else {
                    st = mid - 1;
                }
            } else {
                return nums[mid];
                }
            lastMid = mid;
            }
        return -1;
    }
};
