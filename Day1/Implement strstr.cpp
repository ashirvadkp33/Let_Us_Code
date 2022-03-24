// { Driver Code Starts
//https://practice.geeksforgeeks.org/problems/implement-strstr/1/?page=1&status[]=unsolved&category[]=Strings&curated[]=1&sortBy=submissions#
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int ans=-1;
     int n=s.length();
     int m=x.length();
     for(int i=0;i<n;i++)
     {
         if(s[i]==x[0])
         {  ans=i;
            int k=i;
             for(int j=0;j<m;j++)
             {
                 if(s[k]==x[j])
                 {   k++;
                     continue;
                 }
                 else{
                    ans=-1;
                    break;
                 }
             }
         }
        
         if(ans!=-1)
         break;
     }
     return ans;
}
