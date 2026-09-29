class Solution {
public:
    string addBinary(string a, string b) {
        int asize = a.size() - 1;
        int bsize = b.size() - 1;
        int carry = 0;

        std::string result;

        while(asize >= 0 || bsize >= 0 || carry) {
            int sum = carry;
            
            if (asize >= 0){
                sum += a[asize--] - '0';
            }

            if (bsize >= 0){
                sum += b[bsize--] - '0';
            }

            result += ((sum % 2) + '0');
            carry = sum/2;
        }

        for (int i = 0; i < (result.size() / 2); i++){
            char temp = result[i];
            result[i] = result[result.size() - i - 1];
            result[result.size() - i - 1] = temp;
        }

        return result;
    }
};
