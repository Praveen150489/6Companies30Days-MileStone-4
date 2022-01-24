//  Smallest palindromic number greater than N using the same set of digits as in N.

class Solution{
  public:
    string nextPalin(string N) {
        //complete the function here
        int n=N.length()/2;
        if(n==1){
            return "-1";
        }
        int k=-1;
        for(int i=0;i<n-1;i++){
            if(N[i]<N[i+1]){
                k=i;
            }
        }
        if(k==-1){
            return "-1";
        }
        int index=-1;
        for(int i=n-1;i>k;i--){
            if(N[i]>N[k]){
                index=i;
                break;
            }
        }
        char temp=N[k];
        N[k]=N[index];
        N[index]=temp;
        vector<char> v;
        for(int i=k+1;i<n;i++){
            v.push_back(N[i]);
        }
        sort(v.begin(),v.end());
        string ans="";
        for(int i=0;i<=k;i++){
            ans+=N[i];
        }
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        string str=ans;
        if(N.length()%2==1){
            ans+=N[n];
        }
        reverse(str.begin(),str.end());
        ans+=str;
        return ans;
    }
};
