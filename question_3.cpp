#include<iostream>
using namespace std;
int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    //bubble sort
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
       if(arr[j]==0){
        int temp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=false;
       }
        }
        if(flag==true) break;
    }
    //print sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}