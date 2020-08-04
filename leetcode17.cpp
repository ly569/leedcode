class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> arr;
        int len = pow(10, n);
        for (int i = 1; i < len; i++) {
            arr.push_back(i);
        }
        return arr;
    }
};