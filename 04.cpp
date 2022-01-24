// Partition Equal Subset Sum.

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2==1){
            return 0;
        }
        int s1=sum/2;
        bool t[N+1][s1+1];
        for(int i=0;i<=N;i++){
            for(int j=0;j<=s1;j++){
                if(i==0){
                    t[i][j]=false;
                }
                if(j==0){
                    t[i][j]=true;
                }
            }
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=s1;j++){
                if(arr[i-1]<=j){
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        if(t[N][s1]==true){
            return 1;
        }
        return 0;
    }
};
