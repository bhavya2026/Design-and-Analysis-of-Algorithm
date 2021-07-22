/*Given an array of nonnegative integers, design a linear algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case.
*/
#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){

    for(int i=0;i<size;i++)
        if(arr[i]==key)
            return i;
    return -1;
}
int main(){
    int size,val;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"enter the value you want to search";
    cin>>val;
    int v=linearSearch(arr,size,val);
    if(v==-1)
        cout<<"the value not found";
    else 
        cout<<"the value is found at position "<<v+1;
    return 0;
}