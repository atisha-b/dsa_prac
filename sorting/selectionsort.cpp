#include <iostream>
#include <vector>
using namespace std;

void selectionsort(vector<int>& arr){
    int n= arr.size();
    for(int i=0; i<n;i++){
        int min_int=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_int]){
                min_int=j;
            }
        }
        swap(arr[i],arr[min_int]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionsort(arr);
    cout << "Sorted array is: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    
    return 0;
}