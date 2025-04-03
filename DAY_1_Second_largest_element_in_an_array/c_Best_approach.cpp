#include<iostream>
#include<vector>

using namespace std;

int best(vector<int> &arr){
    int n=arr.size();
    int largest=-1;
    int secondlargest=-1;
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            secondlargest= largest;
            largest= arr[i];
        }
        if (arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }    
    }
    return secondlargest;
}
int main(){
    vector<int> arr ={24, 24, 24, 24};
    cout<<best(arr);
    return 0;
}
