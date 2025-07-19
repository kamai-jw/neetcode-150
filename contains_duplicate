class Solution {
public:
    bool hasDuplicate(vector<int>& nums) { 
    if (nums.size() == 0){ // Base Case, to get past pesky test cases.
        return false; 
    }
    std::sort(nums.begin(), nums.end()); // sorts the items in the vector, so duplicates will be right after one another
    int previous = nums[0]; // Previous starts at the first item in the vector
    for (int index{1}; index < nums.size(); ++index){ // For loop starts at the second item 
        if (nums[index] == previous){ // Checking against the previous item for a match
            return true; // No need to carry on, so return true
        }
        else
        {
            previous = nums[index];  //Sets previous to the current index and moves on (++index)
        }
    }
    return false; // Default case if there are no duplicates.
}
};
