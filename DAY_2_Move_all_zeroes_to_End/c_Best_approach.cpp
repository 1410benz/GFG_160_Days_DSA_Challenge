#include<iostream>
#include<vector>

using namespace std;
void movezero(vector<int> &arr){
    int n=arr.size();
    int count =0;
    for(int i=0; i<n;i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
        count++;
    }
        
    }
}
int main(){
    vector<int> arr={1,3,0,4,0,3,5,0,4};
    movezero(arr);
    int n=arr.size();
    int count;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}