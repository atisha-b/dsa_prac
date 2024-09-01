#include <iostream>
#include <vector>
using namespace std;

void insertionsort(vector<int>& arr){
    int n= arr.size();
    for(int j=1; j<n;j++){
       int key=arr[j];
       int i=j-1;
       while(i>=0 && key<arr[i]){
           arr[i+1]=arr[i];
           i=i-1;
       }
       arr[i+1]=key;
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    insertionsort(arr);
    cout << "Sorted array is: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    
    return 0;
}