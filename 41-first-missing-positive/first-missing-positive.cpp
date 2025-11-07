class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int smallest =1;
        sort(nums.begin(),nums.end());
        for (int num: nums){
            if(num == smallest){
                smallest++;
            }
        }
        return smallest;
    }
};