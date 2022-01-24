// Find a continuous sub-array which adds to a given number S.

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> ans;
        vector<long long> v;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            v.push_back(sum);
        }
        int j=0;
        for(int i=0;i<n;i++){
            if(v[i]==s){
                ans.push_back(1);
                ans.push_back(i+1);
                return ans;
            }
            else if(v[i]>s){
                while(v[i]-v[j]>=s){
                    if(v[i]-v[j]==s){
                        ans.push_back(j+2);
                        ans.push_back(i+1);
                        return ans;
                    }
                    else{
                        j++;
                    }
                }
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
