#include<bits/stdc++.h>
using namespace  std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"size of array[0]:"<<sizeof(arr[0])<<endl;
    cout<<"size of array:"<<sizeof(arr)<<endl;
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<"length of array :"<<n<<endl;
    return 0;
}