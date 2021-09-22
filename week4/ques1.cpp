#include<iostream>
using namespace std;
void merge(int *,int,int,int);
void MergeSort(int *,int,int);
int main(){
    int size;
    cout<<"enter the size of the array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"original array : \n";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    MergeSort(arr,0,size-1);
    cout<<"sorted array\n";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"  ";
    return 0;
}
void MergeSort(int *arr,int low,int high){
    if(low<high){
        int mid=(low+(high-low))/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }   
}
void merge(int *arr,int low,int mid,int high){
    int s1=mid-low+1,s2=high-mid;
    int left[s1],right[s2];
    for(int i=0;i<s1;i++)
        left[i]=arr[low+i];
    for(int j=0;j<s2;j++)
        right[j]=arr[mid+j+1];
    int i=0,j=0,k=0;
    while(i<s1 && j<s2){
        if(left[i]<right[j]){
            arr[k]=left[i];
            k++;i++;
        }
        else{
            arr[k]=right[j];
            k++;j++;
        }
    }
    while(i<s1){
        arr[k]=left[i];
        i++;k++;
    }
    while(j<s2){
        arr[k]=right[j];
        j++;k++;
    }
}