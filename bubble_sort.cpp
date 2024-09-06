#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    //sorting program
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //print the sorted array
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }
}


//using function

/*
#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" th element : ";
        cin>>arr[i];
    }
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
}
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int arr[n];
    input(arr,n);
    bubblesort(arr,n);
    cout<<"final sorted array"<<endl;
    printarray(arr,n);
    
}
*/