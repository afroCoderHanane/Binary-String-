#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

bool isBinary(string str){
  int i=0;
  bool isbinary =false;
  while(i<str.length())
  {
    if(str[i]=='0' || str[i]=='1')
      isbinary = true;
    else{
       isbinary = false;
      break;
    }
      i++;
  }
return isbinary;
}


int main() {
  stack<int> stack_of_zeros,stack_of_ones;
  cout<<"Enter a binary string"<<endl;
  string str;
  cin>> str;
  if(isBinary(str)==true)
  {
     for(int i=0;i<str.length();i++)
     {
      if(str[i]=='0')
         stack_of_zeros.push(0);
      else
         stack_of_ones.push(1);   
    }
    //comparison of stack 
    if(stack_of_ones.size()==stack_of_zeros.size())
       cout<<"equal length of zeros and ones."<<endl<<"length: "<<stack_of_zeros.size()<<endl;
    else{
      if(stack_of_zeros.size()>stack_of_ones.size()){
        while(!stack_of_ones.empty()){
          stack_of_ones.pop();
          stack_of_zeros.pop();
      }
       cout<<"we have "<<stack_of_zeros.size()<<"   zeros than ones"<<endl;
       
      }
      else{
         
         while(!stack_of_zeros.empty()){
           stack_of_zeros.pop();
           stack_of_ones.pop();
         }
         cout<<"we have "<< stack_of_ones.size()<<" ones than zeros "<<endl;
      } 
  }
  
}
else{
 cout<<"non binary entered"<<endl;
}
return 0;
}