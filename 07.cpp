// Pots of Gold Game.

class Solution {
public:
    int t[501][501];
    int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    memset(t,-1,sizeof(t));
	    int i=0;
	    int j=n-1;
	    int ans=solve(i,j,A);
	    return ans;
    }
    int solve(int i,int j,vector<int>& A){
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(i>j){
            return 0;
        }
        if(i==j){
            return A[i];
        }
        int ans1=A[i]+min(solve(i+2,j,A),solve(i+1,j-1,A));
        int ans2=A[j]+min(solve(i,j-2,A),solve(i+1,j-1,A));
        return t[i][j]=max(ans1,ans2);
    }
};
