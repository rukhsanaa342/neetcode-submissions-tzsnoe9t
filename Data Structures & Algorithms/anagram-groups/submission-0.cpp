class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n = strs.size();
        unordered_map<string, vector<string>> freq2;
        for(int i=0; i<n; i++){
            string str = strs[i];
            sort(str.begin(), str.end());
            freq2[str].push_back(strs[i]);
        }
        for(auto it:freq2){
           ans.push_back(it.second); 
        }
        return ans;
    }
};