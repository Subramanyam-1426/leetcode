class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int k) {
        int n=a.size(),i;
        vector<int>ans;
        sort(a.begin(),a.end());
        for(i=0;i<n;i++){
            if(a[i]==k) ans.push_back(i);
        }
        return ans;
    }
};