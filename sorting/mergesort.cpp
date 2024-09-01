// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& arr, int left, int mid, int right){
    int n1= mid-left+1;
    int n2= right-mid;
    vector<int> L(n1), R(n2);
    

    for(int i=0; i<n1; i++) L[i]=arr[left+i];
    for(int j=0; j<n2; j++) R[j]=arr[mid+1+j];

    int i=0, j=0, k=left;
    while(i<n1 && j<n2){
        
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i+=1;
        }
        else{
            arr[k]=R[j];
            j+=1;

        }
        k+=1;
        
    }
    while(i<n1){
        arr[k]=L[i];
        i+=1;
        k+=1;
    }
    while(j<n2){
        arr[k]=R[j];
        j+=1;
        k+=1;
    }

}
void mergesort(vector<int>& arr, int left, int right){
    if(left<right){
        int mid=left + (right-left)/2;
        mergesort(arr, left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);

    }
}
int main(){
    vector<int> arr={10,15,2,1,3,2};
    mergesort(arr,0,arr.size()-1);
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}