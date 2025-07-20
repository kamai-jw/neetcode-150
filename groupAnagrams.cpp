class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> groups; //Creates a hash map, with the key as the word, and the value as a vector.
        for (const std::string& word : strs){ // For loop for each word in the vector.
            std::string key = word; // sets the key to the word
            std::sort(key.begin(), key.end()); // Sorts the key itself, i.e "kam" -> "akm"
            groups[key].push_back(word); //maps this sorted key to the value of the original word. 
        }
        std::vector<std::vector<std::string>> result; //creates a vector of vectors of strings for pairing
        for (auto& pair: groups){ // for loop of each pair in the group
            result.push_back(std::move(pair.second)); //pushes each WORD that matches the key to the vector, under the same key. 
        // multiple strings can have the same sorted version, making them match, which is what is intended.
        }
        return result; // returns the vector as required.
    }
    // Logically medium, syntactically quite difficult.
};
