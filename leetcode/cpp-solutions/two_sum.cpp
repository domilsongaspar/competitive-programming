#include <vector> // Not present when submitted the solution

using namespace std; // Not present when submitted the solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        size_t size;

        size = nums.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    out.push_back(i);
                    out.push_back(j);
                }
            }
        }
        return (out);
    }
};