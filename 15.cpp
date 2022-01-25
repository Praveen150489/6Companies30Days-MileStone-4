// Given two library versions of an executable: for example, “10.1.1.3” and “10.1.1.9” or “10” and “10.1”. Find out which one is more recent? Strings can be empty also.

#include<bits/stdc++.h>
using namespace std;

string solve(vector<string> v){
    sort(v.begin(),v.end());
    return v[v.size()-1];
}
int main()
{
    vector<string> v;
    int n;
    cout<<"Enter the size of list of strings : ";
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        v.push_back(str);
    }
    cout<<solve(v)<<endl;
    return 0;
}
