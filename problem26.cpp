class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::unordered_map<int, int> hmap;
        std::vector<int> vect;
        for(int i = 0; i < nums.size(); i++){
            if (! hmap.contains(nums[i])) {
                hmap[nums[i]] = 0;
                vect.push_back(nums[i]);
            }
        }
        auto count = -1;
        for (int val = 0; val < vect.size(); val++) {
            count++;
            nums[count] = vect[val];
        }
        for (int i = count+1 ; i < nums.size(); i++){
            nums[i] = '_';
        }
        return (count+1);
    }
};
