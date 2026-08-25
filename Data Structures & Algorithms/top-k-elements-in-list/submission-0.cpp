class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>heap;
        for(auto &f:freq){
            heap.push({f.second,f.first});
            if(heap.size()>k){
                heap.pop();
            }
        }
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;

        
    }
};
