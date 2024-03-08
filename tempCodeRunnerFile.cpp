// Ques-1: Binary to octal 
#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin>>s;
   
   if(s.length()%3==1){
    s= "00"+s;
   }
   if(s.length()%3==2){
    s= "0"+s;
   }
   string result ="";
   for(int i=s=0; i<s.length(); i++){
      int temp =(s[i]-'0')*4 + (s[i]-'0')*2 + (s[i]-'0')*1;
      result.push_back(temp + '0');
   }
   cout<<result;
    return 0;
}