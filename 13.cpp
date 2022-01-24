// Minimum operations to convert array A to B

class Solution {
  public:
    int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        int lcs=LCS(A,B,N,M);
        int del=N-lcs;
        int insert=M-lcs;
        return del+insert;
    }
    int LCS(int A[],int B[],int N,int M){
        int t[N+1][M+1];
        for(int i=0;i<=N;i++){
            for(int j=0;j<=M;j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                if(A[i-1]==B[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[N][M];
    }
};
