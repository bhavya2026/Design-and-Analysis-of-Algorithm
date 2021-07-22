/*Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).*/
#include<iostream>
using namespace std;
int binary_search(int arr[],int low,int high,int key){
    while(low<high){
        int mid=(low+(high-1))/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int size,val,v=0;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"enter the value you want to search";
    cin>>val;
    v=binary_search(arr,0,size-1,val);
    if(v==-1)
        cout<<"the value not found";
    else 
        cout<<"the value is found at position "<<v+1;
    return 0;
}