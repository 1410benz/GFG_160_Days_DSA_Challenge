#include<iostream>
#include<vector>

using namespace std;

void movezero(vector<int> &arr){
    int n=arr.size();
    int count = 0;


    for(int i=0; i<n;i++){
        if(arr[i]!=0){
            arr[count++]=arr[i];
        }
    }
    while(count<n){
        arr[count++]=0;
    }
    
}
int main(){
    vector<int> arr = {1,3,0,5,2,0,5,3};
    int n=arr.size();
    int count;
    movezero(arr);
    for(int i=0; i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}