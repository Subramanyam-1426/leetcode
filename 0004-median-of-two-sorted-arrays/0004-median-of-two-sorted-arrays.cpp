class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int *a=nums1.data();
        int *b=nums2.data();
        int n=nums1.size();
        int m=nums2.size();
        int i,j,k=0;
        int t[n+m];
        int p1=0,p2=0;
        float ans=0;
        while(p1<n&&p2<m)
        {
            if(a[p1]<b[p2])
            t[k++]=a[p1++];
            else
            t[k++]=b[p2++];
        }
        while(p1<n)
        t[k++]=a[p1++];
        while(p2<m)
        t[k++]=b[p2++];
        if(k%2==0)
        ans=(float)(t[k/2]+t[(k/2)-1])/2.0;
        else
        ans=(float)t[k/2];
        return ans;
    }
};