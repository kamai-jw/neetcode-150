class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seen; // creates an integer hash map called seen
        for (int index{0}; index < nums.size(); ++index){
            int complement = target - nums[index]; // finds the complement from the target val and the current element
            if (seen.count(complement)){ // checks the hash map to see if an item matches the complement
                return std::vector<int>{ seen[complement], index}; //returns a vector, containing the current index and the value stored in the hash map
            }
            seen[nums[index]] = index; // if not in the hash map, store the current item in the hash map, with the (potential) complement as the key, and the index as the value.
        }
        }

};
