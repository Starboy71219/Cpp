//
//  main.cpp
//  deletion in an array
//
//  Created by Ritesh Kumar on 06/10/21.
//

#include <iostream>
using namespace std;

int deletion(int arr[],int n, int x){
    int idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            idx=i;
        }
    }
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    return (n-1);
}
int main(){
    int arr[]={3,8,12,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=12;
    deletion(arr, n, x);
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
