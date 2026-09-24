class Solution {
public:
    bool isValid(string s) {
        std::stack<char> bucket;
        std::unordered_map<char, char> hmap;
        hmap[')'] = '(';
        hmap['}'] = '{';
        hmap[']'] = '[';
        for (int i = 0; i < s.size(); i++){
            if (!(hmap.contains(s[i]))) {
                bucket.push(s[i]);
            } else if ((!(bucket.empty())) &&  (hmap[s[i]] == bucket.top())) {
                bucket.pop();
            } else {
                return false;
            }
        }
        return bucket.empty();
    }
};
