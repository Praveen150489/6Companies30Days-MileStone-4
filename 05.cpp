// Total number of ways n can be expressed as sum of xth power of unique natural numbers

class Solution{
    public:
    long long t[1001][1001];
    int numOfWays(int n, int x)
    {
        // code here
        int m=1000000007;
        memset(t,-1,sizeof(t));
        return solve(n,x,1,m)%m;
    }
    long long solve(int n,int x,int i,int m){
        if(n==0){
            return 1;
        }
        if(i>n){
            return 0;
        }
        if(t[n][i]!=-1){
            return t[n][i]%m;
        }
        long long temp=pow(i,x);
        if(temp<=n){
            return t[n][i]=(solve(n-temp,x,i+1,m)%m + solve(n,x,i+1,m)%m)%m;
        }
        else{
            return t[n][i]=0;
        }
    }
};
