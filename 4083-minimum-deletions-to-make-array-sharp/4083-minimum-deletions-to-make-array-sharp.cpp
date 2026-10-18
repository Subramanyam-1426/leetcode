class Solution {
public:
    int minDeletions(vector<int>& a) {
        int r=0,i,n=a.size(),f=a[0];
        for(i=1;i<n;i++){
            if(f==a[i]) r++;
            f=a[i];
        }
        return r;
    }
};