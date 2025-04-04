#include<iostream>
#include<vector>


using namespace std;

void movezeroes(vector<int> &arr){
int n=arr.size();
vector<int> temp(n);
int j=0;
for(int i =0; i<n;i++){
    if(arr[i]!=0){
        temp[j++]=arr[i];
    }
}
while(j<n)
temp[j++]=0;
for(int i=0; i<n;i++){
    arr[i]=temp[i];
}
}
int main(){
    
    vector<int> arr={2,4,5,9,0,3,0,1,4};
    int n=arr.size();
    movezeroes(arr);
    for(int i=0; i<n;i++){
    cout<<arr[i]<< " ";
}
    
    return 0;
}