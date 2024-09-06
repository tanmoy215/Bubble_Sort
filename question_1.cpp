#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    //sorting program
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count+=1;
            }
        }
    }
   
   cout<<"total swappping  ; "<<count;
}