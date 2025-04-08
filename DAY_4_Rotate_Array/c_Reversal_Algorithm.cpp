#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void rotatearr(vector<int> &arr, int d){
    int n=arr.size();

    reverse(arr.begin() , arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(), arr.end());
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    int n=arr.size();
    int d=2;
    rotatearr(arr, d);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}