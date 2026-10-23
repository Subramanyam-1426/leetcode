class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int low=0,high=a.size()-1;
        vector<int>ans(2);
        ans[0]=-1;
        ans[1]=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==t){
                ans[0]=mid;
                high=mid-1;
            }
            else if(a[mid]<t) low=mid+1;
            else high=mid-1;
        }
        low=0,high=a.size()-1;
         while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==t){
                ans[1]=mid;
                low=mid+1;
            }
            else if(a[mid]<t) low=mid+1;
            else high=mid-1;
        }
        return ans;
    }
};