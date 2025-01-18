class Solution {
public:
    bool search(vector<int>& nums, int target) {

        map<int,bool> ma;
        int len=nums.size();

        for(int i=0;i<len;i++){
            ma[nums[i]]=true;
        }
        return ma[target];
    }
};
