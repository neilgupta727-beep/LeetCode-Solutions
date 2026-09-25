class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Use a nested loop to check all pairs inside the 'nums' input
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                // If the two numbers add up to the target...
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return their position indices, NOT the sum
                }
            }
        }
        return {}; // Return empty if no pair is found
    }
};