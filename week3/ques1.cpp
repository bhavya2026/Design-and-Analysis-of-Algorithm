// I. Given an unsorted array of integers, design an algorithm and a program to sort the array using
// insertion sort. Your program should be able to find number of comparisons and shifts ( shifts total
// number of times the array elements are shifted from their place) required for sorting the array.
// Input Format:
// The first line contains number of test cases, T.
// For each test case, there will be two input lines.
// First line contains n (the size of array).
// Second line contains space-separated integers describing array.
// Output Format:
// The output will have T number of lines.
// For each test case T, there will be three output lines.
// First line will give the sorted array.
// Second line will give total number of comparisons.
// Third line will give total number of shift operations required
#include<iostream>
using namespace std;
int insertion_sort(int arr[],int size){
    int cmp=0,shift=0;
    for(int i=0;i<size ;i++){

        int index;

        int j=i-1;
        while(j>=0 && arr[j] > index){

            if(arr[j] > index){
                cmp++;
            }

            arr[j+1]=arr[j];
            j--;
            shift++;
        }
    }
}