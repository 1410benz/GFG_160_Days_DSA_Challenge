#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int naive(vector<int> &arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=n-2;i>=0;i--){
        if(arr[n-1]!=arr[i]){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> arr={24,30,10,35};
    cout<<naive(arr);
    
    return 0;
}
