class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (auto i : columnTitle) {
            result = (result * 26) + (i - 'A' + 1);
        }
        return result;
    }
};
