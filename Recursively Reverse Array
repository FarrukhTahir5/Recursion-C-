#include<iostream>

using namespace std;
int rar[5];
int j=0;
int* rev(int *arr,int i){
    if((i-1)>=0) {
        rar[j] = arr[i - 1];
        j++;
        rev(arr, --i);
    }
    else
        return rar;
}
void display(int *arr){
    for(int i=0;i<5;i++)
        cout<<arr[i]<<endl;
}
int main() {
    int array[5]={1,3,5,7,9};
    int* p;
    p= rev(array,5);
    display(p);
    return 0;
}
