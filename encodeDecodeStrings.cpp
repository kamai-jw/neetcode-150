class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.size() == 0){ // To get past pesky testcases
            return "";
        }
        string x{};
        for (int index{0}; index < strs.size(); ++index){
            x += strs[index] + '.'; //For when there are sentences in the vector.

        }
        return x;
    }

    vector<string> decode(string s) { // imagine s = "Hello World! "
        string y {}; // empty string
        vector<string> myvec {}; // empty vector
        for (int i{0}; i < s.length(); ++i){ //for loop for 0 to the final letter in s.
            // if we have reached a full stop, which i implemented, then push y to the vector and reset it to ""
            if (s[i] == '.'){
                myvec.push_back(y);
                y ="";
            }
            // else, keep concatenating letters to y, as itll be the same word.
            else{
                y += s[i];
            }
        }
        // return the vector, as it is a function
        return myvec;
    }
};
