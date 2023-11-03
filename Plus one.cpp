class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i =n-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]++;
                return digits; //if the last element is not 9, we simply increase it by 1 and return the array. Done
            }
            else
            {
                digits[i]=0; //if the last element is 9, we replace it by 0, and move to next element to check
                //lets suppose me have [9,9,9]
            }
        }
        //after above operation our array in [0,0,0] from [9,9,9]
        digits.push_back(0); //now we push back another 0, this will make array [0,0,0,0]
        digits[0]=1;// now we replace first element by 1, this will make our array as [1,0,0,0]
        return digits;
        
    }
};