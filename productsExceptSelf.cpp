class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output{}; 
        int prefix {1};
        int postfix{1};
        int length = nums.size();
        for (int i{0}; i < length; ++i){
            output.push_back(prefix);
            prefix *=nums[i];
        }
        for (int i{length -1}; i > -1; --i)
        {
            output[i] *= postfix;
            postfix*=nums[i];
        }
        return output;
}
};
