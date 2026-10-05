class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hashtable;

        for (int x : nums) {
            hashtable[x]++;
        }

        int maxElement = nums[0];
        int maxFrequency = 0;

        for (auto i : hashtable) {
            if (i.second > maxFrequency) {
                maxElement = i.first;
                maxFrequency = i.second;
            }
        }

        return maxElement;
    }
};
