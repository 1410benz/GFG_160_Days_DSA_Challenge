#include<iostream>
#include<vector>

using namespace std;

int better(vector<int> &arr){
    int n=arr.size();
    int largest=-1;
    int secondlargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n; i++){
        if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}
int main(){
    vector<int> arr={24,30,10,35};
    cout<<better(arr);
    return 0;
}