class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        sort(candidates.begin(), candidates.end());
        vector<int> current;
        backtrack(result, current, candidates, target, 0);
        return result;
    }

private:
    void backtrack(vector<vector<int>>& result, vector<int>& current, vector<int>& candidates, int remaining, int start) {
        if (remaining < 0) {
            return;
        } else if (remaining == 0) {
            result.push_back(current);
        } else {
            for (int i = start; i < candidates.size(); i++) {
                if (i > start && candidates[i] == candidates[i - 1]) {
                    continue;
                }
                current.push_back(candidates[i]);
                backtrack(result, current, candidates, remaining - candidates[i], i + 1);
                current.pop_back();
            }
        }
    }
};