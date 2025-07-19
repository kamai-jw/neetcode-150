class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqmap{}; //creates a frequency map

        for (int num: nums){ // goes through the vector nums, for each number.
            freqmap[num] ++; //increments the value mapped to the current number, the current number is the key, value is what is compared to K
        }
        vector<std::pair<int,int>> topvector{}; //creating a vector pair.
        copy(freqmap.begin(), freqmap.end(), back_inserter(topvector)); // copies the hashmap to the vector, with the key and value now becoming a (slightly more) interactable pair
        std::sort(topvector.begin(), topvector.end(),[](auto &a, auto &b){ //sorts the values(the amount thats there) for the keys, in descending order.
            return a.second > b.second;
        });

        vector<int> result{}; // creates a vector to store the result to prep for return requirement
        for (int index{0}; index < k; ++index) // index and k now become comparable, as it wants K amount of values that appear the most. 
        {
            result.push_back(topvector[index].first); //pushes the key, which is the number itself, e.g 2, but 2 appears 5 times.
        }
        return result;
    }
};
