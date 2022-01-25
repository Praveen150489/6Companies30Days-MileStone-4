// Number of distict Words with k maximum contiguous vowels

class Solution
{
  public:
    long long t[1001][1001];
    int kvowelwords(int N, int K) {
        // Write Your Code here
        int m=1000000007;
        memset(t,-1,sizeof(t));
        return solve(N,K,0,m)%m;
    }
    long long solve(int n,int k,int crt,int m){
        if(n==0){
            return 1;
        }
        if(t[n][crt]!=-1){
            return t[n][crt]%m;
        }
        if(crt<k){
            return t[n][crt]=(((21%m)*(solve(n-1,k,0,m))%m)%m + ((5%m)*(solve(n-1,k,crt+1,m))%m)%m)%m;
        }
        if(crt==k){
            return t[n][crt]=(((21%m)*(solve(n-1,k,0,m))%m)%m)%m;
        }
    }
};
