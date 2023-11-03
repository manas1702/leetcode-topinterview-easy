class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() < needle.size()) return -1;
       

        for (int i = 0; i <= haystack.size() - needle.size(); i++) { //looping through the haystack
            int j = 0; // j will again become 0 if any character of needle gets mismatched, to start the process again

            while (j < needle.size() && haystack[i + j] == needle[j]) {// here we are using i+j instead of i++ as we dont want to lose the index of our first occurance. So we won't mess with i. 
                j++;
            }

            if (j == needle.size()) {
                return i; // when the complete needle string gets matched we rtuen i
            }
        }
        return -1;
    }
};
