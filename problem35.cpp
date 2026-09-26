class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        std::vector<int>& snum = nums;
        int left=0, right=(nums.size()-1), mid=0;
        while (left <= right){
            mid = left + (right - left) / 2;
            if(nums.at(mid) == target){
                return mid;
            }
            if (nums.at(mid) < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        // snum.push_back(target);
        // std::sort(snum.begin(), snum.end());
        return left;
    }
};
