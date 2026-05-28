class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> map;

        for (const string& s : strs)
        {
            string key = s;
            sort(key.begin(), key.end());  // "cat" -> "act", "top" -> "opt"
            map[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& [key, group] : map)
            result.push_back(group);

        return result;
    }
};