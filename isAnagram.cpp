class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<char> v1{}; // Creates two vectors to compare
        std::vector<char> v2{};
        if (s.length() != t.length()){ // Base case, cant be anagram if not the same size
            return false; 
        }

        for (int index{0}; index < s.length();++index) // Either length is fine, because we're past base case.
        {
            v1.push_back(s[index]); // Pushing the char to the vectors
            v2.push_back(t[index]);
        }
        std::sort(v1.begin(), v1.end()); // sort both, if theyre anagrams their sorted will be equal
        std::sort(v2.begin(), v2.end());
        return (v1 == v2); // returns a bool, true of false.
    }
};
