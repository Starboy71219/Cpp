//
//  main.cpp
//  Connected Cells in a Grid
//
//  Created by Ritesh Kumar on 15/12/21.
//

#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n+2][m+2];
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cin>>arr[i][j];
        }
    }
    int counter[100]={0};
    int x=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(arr[i][j]==1){
                counter[x]++;
                if(arr[i][j+1]==1){
                    counter[x]++;
                }
                if(arr[i+1][j+1]==1){
                    counter[x]++;
                }
                if(arr[i+1][j]==1){
                    counter[x]++;
                }
                if(arr[i][j-1]==1){
                    counter[x]++;
                }
                if(arr[i-1][j-1]==1){
                    counter[x]++;
                }
                if(arr[i-1][j]==1){
                    counter[x]++;
                }
                if(arr[i+1][j-1]==1){
                    counter[x]++;
                }
                if(arr[i-1][j+1]==1){
                    counter[x]++;
                }
            }
            x++;
        }
    }
    sort(counter, counter+100, greater<int>());
    cout<<counter[0]-1<<endl;
    return 0;
}
