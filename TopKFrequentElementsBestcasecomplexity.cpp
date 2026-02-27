class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

       
        vector<pair<int, int>> freqVector(freqMap.begin(), freqMap.end());


        sort(freqVector.begin(), freqVector.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; 
        });

        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(freqVector[i].first);
        }

        return result;
    }
};
