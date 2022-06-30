//
//  main.cpp
//  2nd largest number in an array
//
//  Created by Ritesh Kumar on 06/10/21.
//

#include <iostream>

using namespace std;
int seclargest(int arr[],int n){
    int largest=0;
    int secondlargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            secondlargest=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(secondlargest==-1 || arr[i]>arr[secondlargest]){
                secondlargest=i;
            }
        }
    }
    return secondlargest;
}
int main(){
    int arr[]={5,20,12,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<seclargest(arr, n)<<endl;
    return 0;
}
