class Solution {
public:
    int maxArea(vector<int>& height) {
        int left {0}, right {0};
        int mostVol {0}, currVol {0};
        int size = height.size();
        int l {0}, r {size - 1};

        for (int i = 0; i < 2*size; i++){
            left = height[l];
            right = height[r];
            mostVol = max(mostVol, min(left, right) * (r - l));
            if (left > right){
                r--;
            } else if (right >= left){
                l++;
            }
            if (r == l){
                break;
            }   
        }
        return mostVol;
    }
};
