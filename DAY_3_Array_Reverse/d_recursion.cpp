#include<iostream>
#include<vector>
using namespace std;
//recusion is done without using loops
void recur(vector<int> &arr, int left, int right){
  
    int n=arr.size();  if(left>=right)
  return;  

swap(arr[left], arr[right]);
recur(arr, left+1, right-1);

}
int main(){
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    recur(arr, 0, n-1);
for (int i=0; i<n;i++){
    cout<<arr[i];
}
    return 0;
}