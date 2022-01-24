// Winner of an election.

class Solution{
  public:

    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int m=INT_MIN;
        string ans="";
        for(auto x:mp){
            if(x.second>m){
                m=x.second;
                ans=x.first;
            }
        }
        vector<string> res;
        res.push_back(ans);
        string y=to_string(m);
        res.push_back(y);
        return res;
    }
};
