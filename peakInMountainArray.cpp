class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0, mid;
        int end = arr.size() - 1;
        while (st <= end){
            mid = st + (end - st)/2;
            std::cout << "mid is at " << mid << "\n";
            if (
                arr[mid] > arr[mid+1] && 
                arr[mid] < arr[mid-1]
                )
            {
                std::cout << "The mountain is to the left\n";
                end = mid;
            } else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1]) {
                std::cout << "The mountain is to the right\n";
                st = mid;
            } else {
                std::cout << "im at the mountain\n";
                return mid;
            }
        }
        return -1;
    }
};
