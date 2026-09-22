class Solution {
public:
    int romanToInt(string s) {

        int sum = 0;

        if (s.length() < 1 || s.length() > 15){
            return -4000;
        }

        std::unordered_map <char, int> hmap;
        hmap['I'] = 1;
        hmap['V'] = 5;
        hmap['X'] = 10;
        hmap['L'] = 50;
        hmap['C'] = 100;
        hmap['D'] = 500;
        hmap['M'] = 1000;

        for (int i = 0; i < s.length(); i++) {
            if (i == (s.length() - 1)) {
                sum = sum + hmap[static_cast<char>(s[i])];
                continue;
            }
            if ( hmap[static_cast<char>(s[i])] < hmap[static_cast<char>(s[i+1])] ) {
                sum = sum + (hmap[static_cast<char>(s[i+1])] - hmap[static_cast<char>(s[i])]);
                i++;
            } else {
                sum = sum + hmap[static_cast<char>(s[i])];
            }
        }

        return sum;
    }
};
