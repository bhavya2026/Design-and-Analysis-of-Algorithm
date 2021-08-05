/*Given a sorted array of positive integers containing few duplicate elements, design an algorithm
and implement it using a program to find whether the given key element is present in the array
or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))
*/
#include<iostream>
using namespace std;
int firstoccur(int arr[],int size,int val){


    int low=0,high=size-1,mid;

    while(low<=high){

        mid = ( low + high ) / 2;

        if( arr[mid] > val )

            high=mid-1;
        else
            if(arr[mid] < val)
                low=mid+1;
        
        if(arr[mid] == val){

            if( mid==0 || arr[mid] != arr[mid-1] )

                return mid;
            else
                high=mid-1;
        }

    }
    return -1;
}
int lastoccur(int arr[],int size,int val){

    int low=0,high=size-1,mid;

    while(low<=high){

        mid = ( low + high ) / 2;

        if( arr[mid] > val )

            high=mid-1;

        else if( arr[mid] < val)

            low=mid+1;
        else{
        if(arr[mid] == val){

            if( mid==size-1 || arr[mid] != arr[mid+1] )

                return mid;
            else
                low=mid+1;
            }

        }
    }
    return -1;

 }
int countoccur(int arr[],int size,int val){
    
    int last=lastoccur(arr,size,val) ;
    int first=firstoccur(arr,size,val);
    if(last !=-1 && first !=-1 )
        return ((last-first)+1);
    return -1;

}
int main(){
    int size,x;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size ; i++){
        cout<<"enter the "<<i+1 <<" element : ";
        cin>>arr[i];
    }
    cout<<"enter the value you want to find the occurence of";
    cin>>x;
    int val=countoccur(arr,size,x);
    if(val==-1)
        cout<<"value not found";
    else
        cout<<"the value "<<x <<" occurs "<< val<<" times";
    return 0;
}