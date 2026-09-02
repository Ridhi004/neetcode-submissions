class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>hash(nums.begin(),nums.end());
        int longest=0;
        for(int num:nums){
            if(hash.find(num-1)==hash.end()){
                int len=1;
                while(hash.find(num+len)!=hash.end()){
                    len++;
                }
                longest=max(longest,len);
            }
        }
        return longest;
    }
};
