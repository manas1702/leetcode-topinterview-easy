class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int k =1; //k is the index at which we will star storing the unique element, whenever we catch a unique element we place it in kth index and move k by one step forward (as first element of array will obviously be unique we start k from 1)
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1]!=nums[i])
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
        
    }
};