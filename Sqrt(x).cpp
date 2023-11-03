class Solution {
public:
    int mySqrt(int x) {
        long long low = 1;
        long long high = x;
        long long mid;
        long long ans;
        if(x==0) return 0;
        while(low<=high)
        {
            mid=(low+high)/2;
            if((mid*mid)<=x)
            {
                ans = mid;
                low = mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return static_cast<int>(ans);
        
    }
};
/*The approach is that we use binary search, we asssign 1 as low and our x as high
Then we assign mid (the middle value)
If this mid<=x then we discard finding the root before mid and we do low = mid +1 and search again for perfect number.
But we also store this mid in a variable as this could possibly be our answer.

else if mid > x then we do high = mid-1, because then anything above mid will definitely not be square root.*/