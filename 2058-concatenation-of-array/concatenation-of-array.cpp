class Solution {
public:
    vector<int> getConcatenation(vector<int>& num) {
        int n=num.size();
        vector <int> ans(2*n);
        for(int i=0;i<n;i++){
            ans[i]=num[i];
            ans[i+n]=num[i];
        }
    return ans;
    }
};