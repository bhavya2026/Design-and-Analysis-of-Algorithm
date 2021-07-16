/*Given an array of nonnegative integers, design a linear algorithm and implement it using a program 
to find whether a given key element is present in the array or not. Also, find the total number of 
comparisons for each input case. (Time Complexity = O(n), where n is the size of input).*/
#include<iostream>
using namespace std;
bool linear_search(int arr[],int size,int key);
int main(){
    int n,k;
    cout<<"enter the numbers of elements you want to enter";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"\nenter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"enter the element you want to search";
    cin>>k;
    if(linear_search(arr,n,k)){
        cout<<"ELEMENT FOUND\n";
    }
    else
        cout<<"ELEMENT NOT FOUND";
}
bool linear_search(int arr[],int size,int key){
    for(int i=0;i<size;i++)
        if(arr[i]==key)
            return 1;
    return 0;
}