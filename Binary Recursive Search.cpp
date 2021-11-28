#include<iostream>

using namespace std;
int search(int *arr,int find,int head,int tail){
    int i=find;
    int mid=(tail+head)/2;
    if(arr[mid]==i)
        return mid;
    else if(arr[mid]>i)
        search(arr, i,head ,mid);
    else if(arr[mid]<i)
        search(arr,i,mid,tail);
}
int main() {
    int array[5]={1,3,5,7,9};
    cout<<"Element at:"<<search(array,9,0,5);
    return 0;
}
