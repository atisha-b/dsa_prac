#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int>& arr){
    int n= arr.size();
    for(int i=0; i<n;i++){
        for (int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    bubblesort(arr);
    cout << "Sorted array is: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    
    return 0;
}