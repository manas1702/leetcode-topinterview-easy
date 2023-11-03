class Solution {
public:
    bool isValid(string s) {
        
        stack<char> mystack;
        for(int i =0;i<s.size();i++)
        {
            char current = s[i];
            if(isopening(current)) mystack.push(current);

            else
            {
                if(mystack.empty()) return false;

                else if(!ismatching(mystack.top(), current)) return false;
                else mystack.pop();
            }
        }
        if(mystack.empty()) return true;
        else return false;
        
    }

    bool isopening(char c)
        {
            if(c=='('||c=='{'||c=='[') return true;
            return false;
        }
        bool ismatching(char a, char b)
        {
            if(a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']')
            return true;
            return false;
        }
};