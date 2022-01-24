// Find the length of the Longest Arithmetic Progression (LLAP) in it.

class Solution{
public:
    int lengthOfLongestAP(int A[], int n) {
        // code here
        if(n==1){
            return 1;
        }
        int ans=2;
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(A[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int count=2;
                int d=A[j]-A[i];
                int x=A[j];
                while(s.find(x+d)!=s.end()){
                    count++;
                    x+=d;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};
