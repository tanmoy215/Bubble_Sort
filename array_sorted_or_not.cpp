// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
// vector<int>v{1,2,3,4,6,7};
// int n = v.size();
// vector<int>vv(n);
//  for(int i=0;i<n;i++){
//     vv[i]=v[i];
//  }
//  sort(vv.begin(),vv.end());
//  bool flag = true;
// for(int i =0;i<n;i++){
//     if(v[i]!=vv[i]){
//         flag = false;
//         break;
//     }
// }
// if(flag == true){
//     cout<<"sorted";
// }
// else cout<<"Not sorted";
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<i+1<<" th element : ";
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"sorted";
    else cout<<"unsoretd";
}