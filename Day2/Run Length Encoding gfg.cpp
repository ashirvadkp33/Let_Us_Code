// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string str)
{     
  //Your code here 
//   string ans;
//   int n=src.length();
  
//   if(src[0]!=src[1])
//   {
//       ans=ans+src[0]+to_string(1);
//   }
  
//   for(int i=1;i<n;i++){
//      //int j=i;
//      ans=ans+src[i];
//      int count=1;
     
//      while(src[i]==src[i-1])
//      {
//          count++;
//          i++;
         
//      }
     
//      ans=ans+to_string(count);
    
//   }
//   return ans;
string s ="";
          int count = 1;
          for(int i = 0;i<str.length()-1;i++){
              if(str[i]==str[i+1]){
                  count++;
              }
              else{
                  s+=str[i]+to_string(count);
                  count = 1;
              }
          }
          return s+=str[str.length()-1]+to_string(count);

}     
 
