/*Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether a given key element is present in the sorted array or not. For an array
arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on. 
Once the interval (arr[2k]< key < arr[ 2k+1] ) is found, perform a linear search operation 
from the index 2k to find the elementkey. (Complexity < O(n), where n is the number of elements 
need to be scanned for searching):
*/
#include<iostream>
using namespace std;
int exponential_search(int arr[],int size,int key){

    if(arr[0]==key)
        return 0;
    int i=1;
    while(i<size && arr[i]<=key){
        i*=2;
    }
    int low = i/2 , high = size-1;
    while( low < high ){
 
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

    int size,val,result=0;
    cout<<"enter the array size";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"enter the value you want to search";
    cin>>val;
    result=exponential_search(arr,size,val);
    if(result==-1)
        cout<<"element not present";
    else cout<<"element found at position "<<result+1;
    return 0;
}