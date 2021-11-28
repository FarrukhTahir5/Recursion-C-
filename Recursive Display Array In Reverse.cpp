#include<iostream>

using namespace std;
void display(int *arr,int i){
    if(i>=0) {
        cout << arr[i]<<endl;
        display(arr, --i);
    }
}
int main() {
    int array[5]={1,3,5,7,9};
    display(array,5);
    return 0;
}
