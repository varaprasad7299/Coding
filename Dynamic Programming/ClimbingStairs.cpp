/* You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 */


class Solution {
public:
    int climbStairs(int n) {
        int fps = 1;
        int sps = 1+fps;
        if(n<3) return n;
        int ans;
        for(int i=3;i<=n;i++){
            ans=sps+fps;
            fps=sps;
            sps=ans;
            
        }
        return ans;
    }
};
