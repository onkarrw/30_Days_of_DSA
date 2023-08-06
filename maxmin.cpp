#include <iostream>
using namespace std;

int main(){
    int arr[]={20,15,215,4163,98,44,54,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int min=arr[0];
    int max=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }else if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<" max "<<min<<" min "<<endl;
}