#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for (int i = 0; i <n; i++)
    {
       int minindex=i;
       for (int j = i+1; j<n; j++)
       {
    if(arr[j]<arr[minindex])
        minindex=j;
       }
       swap(arr[minindex],arr[i]);
    }
    
}
int main () {
    int arr[200]={5,6,2,3,1,9};
    int n=6;
    sort(arr,n);
    for (int i = 0; i <n; i++)
    {
     cout<<arr[i]<<ends;
    }
}