class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>arr;
        int n =nums.size();
        for(int i=0; i<n; i++){
          arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int j=n-1;
        while(i<j){
          int sum = arr[i].first + arr[j].first;
          if(sum ==target){
            int idx1 = arr[i].second;
            int idx2 = arr[j].second;
                
                return {min(idx1,idx2), max(idx1,idx2)};
          } 
          else if(sum < target) i++;
          else j--;
        }
        return {};
    }
};
