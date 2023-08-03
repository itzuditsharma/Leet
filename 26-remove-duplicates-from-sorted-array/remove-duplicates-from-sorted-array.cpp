class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> sett;

        for(int i = 0; i < nums.size(); i++){
            sett.insert(nums[i]);
        }

        int index = 0;
        for(auto it : sett){
            nums[index] = it;
            index++;
        }
        return index;
    }
};