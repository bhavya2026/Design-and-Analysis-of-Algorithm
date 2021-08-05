//Given an array of nonnegative integers, design an algorithm and a program to count the number
// of pairs of integers such that their difference is equal to a given key, K.
// Input format:
// The first line contains number of test cases, T.
// For each test case, there will be three input lines.
// First line contains n (the size of array).
// Second line contains space-separated integers describing array.
// Third line contains the key element.
// Output format:
// The output will have T number of lines.
// For each test case T, output will be the total count i.e., number of times such pair exists.
#include<iostream>
using namespace std;
int Diff_pair(int arr[],int size,int key){

    int count=0;

    for(int i = 0 ; i < size ; i++ ){

        for( int j = i+1 ; j < size ; j++ ){

            if( ( arr[i] - arr[j] == key ) || ( arr[j] - arr[i] == key ) )

                count++;
        }
    }

    return count;
}
int main(){
    int test;
    do{
        int size;
        cout<<"enter the size of the array";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cout<<"enter the element "<<i+1<<" : ";
            cin>>arr[i];
        }
        int key;
        cout<<"enter the key element  ";
        cin>>key;
        cout<<"the key element "<<key<<" has pairs  "<<Diff_pair(arr,size,key)<<" \n";
        cout<<"press 1 to continue\npress 0 to stop" ;
        cin>>test;
    }
    while(test);
    return 0;
}