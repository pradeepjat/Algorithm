#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std; 

int main() 
{
   vector<string> s;
   char ch='y';
   do
   { 
     string temp; 
   	 cin>>temp;
   	 s.push_back(temp);
   	 cout<<" y or n  :  ";
   	 cin>>ch;
   	 cout<<endl;
   }while(ch=='y'||ch=='Y');
   vector<string>::iterator i;
   for ( i = s.begin() ; i < s.end() ; ++i )
   {
      cout << *i << endl;
   }
   
   vector<string> s1;
   char ch1='y';
   do
   { 
     string temp; 
   	 cin>>temp;
   	 s1.push_back(temp);
   	 cout<<" y or n  :  ";
   	 cin>>ch1;
   	 cout<<endl;
   }while(ch1=='y'||ch1=='Y');
   vector<string>::iterator j;
   for ( j = s1.begin() ; j < s1.end() ; ++j )
   {
      cout << *j << endl;
   }
   
   i=s.begin();
   j=s1.begin();
   
   vector<string> k;
   
   while(i<s.end() && j<s1.end())
   {
   	 string temp1=*i;
     string temp2=*j;
   
     if(temp1.compare(temp2)==0)
     {
   	   k.push_back(temp1);
   	   i=i+1;
   	   j=j+1;
     }
      else
     {
       i=i+1;
     }

   }
   
   if(!k.empty())
   {
   	  cout<<"/nSubsequence Found ";
   	  vector<string>::iterator p;
      for (p = k.begin() ; p < k.end() ; ++p )
      {
         cout << *j << endl;
      }
   }  
   else 
   {
     cout<<"/nSubsequence Not Found ";	
   } 
   return 0;
}
