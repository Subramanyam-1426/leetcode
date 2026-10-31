class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());  // sort the array first
        int closest = nums[0] + nums[1] + nums[2];  // initial sum

        for(int i = 0; i < n-2; i++) {
            int left = i + 1;
            int right = n - 1;
            
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if(abs(sum - target) < abs(closest - target)) {
                    closest = sum;  // update closest sum
                }
                
                if(sum < target) left++;     // need bigger sum
                else if(sum > target) right--; // need smaller sum
                else return sum;             // exact match
            }
        }
        
        return closest;
    }
};
