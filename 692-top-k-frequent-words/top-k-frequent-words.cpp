class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;

        for (string word : words)
            mp[word]++;

        map<int, vector<string>, greater<int>> freq;

        for (auto [word, count] : mp)
            freq[count].push_back(word);

        vector<string> ans;

        for (auto &[count, v] : freq) {
            sort(v.begin(), v.end());

            for (string word : v) {
                ans.push_back(word);

                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};
