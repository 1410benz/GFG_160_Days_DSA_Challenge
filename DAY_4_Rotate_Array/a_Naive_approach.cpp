#include<iostream>
#include<vector>
using namespace std;
void rotatearr(vector<int> &arr, int d){
    int n=arr.size();
    for(int i=0; i<d;i++){
        int first = arr[0];
        for(int j=0; j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=first;
    }
}
int main(){
    vector<int> arr={2,4,5,79,75};
    int n=arr.size();
    rotatearr(arr, 2);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}