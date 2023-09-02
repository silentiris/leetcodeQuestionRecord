/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> resVec ;
        resVec.insert(resVec.end(),nums1.begin(),nums1.end());
        resVec.insert(resVec.end(),nums2.begin(),nums2.end());
        sort(resVec.begin(),resVec.end());
        int size = resVec.size();
        if(size%2 == 0){
            return (resVec[size/2-1] + resVec[size/2 ])/(double)2;
        }else{
            return resVec[size/2];
        }
    }
};
// @lc code=end

