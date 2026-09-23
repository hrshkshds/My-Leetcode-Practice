class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string common = "";
        bool running = true;
        for (int i = 0; i < (strs.size() - 1); i++){
            for(int j = 0; j <= (strs.size() - i -1); j++){
                if (strs[i].size() > strs[i+1].size()){
                    std::string temp = strs[i];
                    strs[i] = strs[i+1];
                    strs[i+1] = temp;
                }
            }
        }
        for (int i = 0; i < strs[0].size(); i++){
            for (int j = 1; j < strs.size(); j++){
                if (strs[0][i] != strs[j][i]){
                    running = false;
                }
            }
            if (running) {
                common = common + (strs[0][i]);
            }
        }
        return common;
    }
};
