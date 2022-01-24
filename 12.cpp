// Leaders in an array.

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int h=a[n-1];
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=h){
                ans.push_back(a[i]);
                h=a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
