#include<iostream>
#include<vector>
using namespace std;

void reversearr(vector<int> &arr){
int n=arr.size();
vector<int> temp(n);
for(int i=0; i<n ; i++){
    temp[i]=arr[n-i-1];
}
for(int i=0; i<n; i++){
    arr[i]=temp[i];
}
}

int main(){
    vector<int> arr = {1,3,4,5,6,7};
    reversearr(arr);
    int n=arr.size();
    for(int i=0; i<n;i++){
    cout<<arr[i];  
    }
   return 0;
}