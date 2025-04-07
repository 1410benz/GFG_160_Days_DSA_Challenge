#include<iostream>
#include<vector>
using namespace std;
void reversearr(vector<int> & arr){
    int n=arr.size();
    int left=0; 
    int right = n-1;
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

}
int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    reversearr(arr);
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
    
    return 0;
}