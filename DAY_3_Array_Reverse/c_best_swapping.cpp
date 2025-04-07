#include<iostream>
#include<vector>

using namespace std;
void reversearr(vector<int> & arr){
    int n = arr.size();
    for(int i=0; i<n/2;i++){
        swap(arr[i], arr[n-i-1]);
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