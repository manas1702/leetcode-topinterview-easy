class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result ="";

        sort(strs.begin(), strs.end()); 

        string first = strs[0];
        string last = strs[strs.size()-1];

        for(int i =0; i<first.length();i++)
        {
            if(first[i]!=last[i])
            break;
            result.push_back(first[i]); //storing the prefixes till we gett different letters in first and last
        }

        return result;
        
    }
};