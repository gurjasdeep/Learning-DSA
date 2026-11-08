#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int posm = m - 1;
        int posn = n - 1;
        int pos = (n + m) - 1;
        if (m == 0){
            nums1 = nums2;
        }
        while (posm >= 0 || posn >= 0){
            if (posm < 0 && pos >= 0){
                nums1[pos] = nums2[posn];
                posn--;
                pos--;
                continue;

            }
            if (posn < 0 && pos >= 0){
                nums1[pos] = nums1[posm];
                posm--;
                pos--;
                continue;
            }
            
            
            if (nums1[posm] >= nums2[posn]){
                nums1[pos] = nums1[posm];
                posm--;
            }
            else if (nums1[posm] < nums2[posn]){
                nums1[pos] = nums2[posn];
                posn--;
            }
            
            pos--;
        }
    }
};
