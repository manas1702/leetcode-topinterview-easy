class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        vector<int> steps(n+1);
        steps[0]=0;
        steps[1]=1;
        steps[2]=2;
        for(int i = 3; i<=n;i++)
        {
            steps[i]=steps[i-1]+steps[i-2];
        }

        return steps[n];
    }
};
/*
The problem says that we have to climb a staircase, we are given a number of steps to reach at the top(n)
Each time we can either climb 1 or 2 steps only from the current stair

Now, to climb 1 stair we have 1 way
to climb 2 stairs we have two ways -> 1,1 and 2
to climb 3 stairs we have three ways -> 1,1,1 | 1,2 | 2,1

Now let us suppose we have to reach stair 7 and we can only climb 1 or 2 steps from the current stair
So, if we are at 6th step we can climb 1 stair and if we are at 5th step we can climb 2 stairs

This gives us a formula -

Total no of ways to reach at stair 7 =
Total no of ways to reach at stair 6 + Total no of ways to reach at stair 5

Now we will create an arrya of size n+1, where each index will denote the number of step(position)
and the value at each index will denote the number of ways you can reach that step

so, we know a[0]=0
a[1]=1 and a[2] = 2 Hence we will initialize the array this way

From a[3] to a [n] we will do

a[n] = a[n-1]+a[n-2]

and we will return a[n]
*/
