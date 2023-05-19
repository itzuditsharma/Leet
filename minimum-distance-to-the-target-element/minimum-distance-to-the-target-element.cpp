class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans = INT_MAX;
        int v = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                v = i;
            }

            if(v!=-1){
                ans = min(ans, abs(v-start));
            }

        }
        return ans;
    }
};