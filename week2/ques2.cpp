// Given a sorted array of positive integers, design an algorithm and implement it using a program
// to find three indices i, j, k such that arr[i] + arr[j] = arr[k].
// Input format:
// The first line contains number of test cases, T.
// For each test case, there will be two input lines.
// First line contains n (the size of array).
// Second line contains space-separated integers describing array.
// Output:
// The output will have T number of lines.
// For each test case T, print the value of i, j and k, if found else print “No sequence found”.
#include<iostream>
using namespace std;
void triplets(int arr[],int size){

    int i,j,k,flag=0;

    for(i=0;i<size;i++){

        for(j=i+1;j<size;j++){

            for(k=i+2;k<size;k++){

                if(arr[j]+arr[j]==arr[k]){

                    flag++;

                    cout<<i<<" , "<<j<<" , "<<k;

                }
            }
        }
    }
    if(flag==0){
        cout<<"No sequence found";
    }
}
int main(){

    int test;
    do{
        int size;
        cout<<"enter the size of the array : ";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cout<<"enter the element "<<i+1<<" : ";
            cin>>arr[i];
        }
        triplets(arr,size);
        cout<<"\n press any key to continue , press 0 to stop";
        cin>>test;

    }
    while(test);
    return 0;
}