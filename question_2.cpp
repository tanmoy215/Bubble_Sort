#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "yz4zerexjzx";
    string sttr = "";
    int n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]>=120) {
           sttr.push_back(str[i]);
        }
    }
 int a = sttr.size();
  for(int i=0;i<a-1;i++){
      bool flag = true;
      for(int j=0;j<a-1-i;j++){
          if(sttr[j]<sttr[j+1]){
              int temp = sttr[j];
              sttr[j]=sttr[j+1];
              sttr[j+1]=temp;
              flag =false;
          }
      }
      if(flag==true) break;
  }
  int i=0;
    while(sttr[i]!='\0'){
            cout<<sttr[i]<<" ";
        i++;
    }
}