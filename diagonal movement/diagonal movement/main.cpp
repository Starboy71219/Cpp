//
//  main.cpp
//  diagonal movement
//
//  Created by Ritesh Kumar on 29/09/21.
//

#include <iostream>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n=0;
        scanf("%d",&n);
        int count[n];
        ll int arr[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        for(int i=0;i<n;i++){
            if (arr[i]%2==0){
                int c=0;
                while(arr[i]%2!=1&&arr[i]>1){
                    arr[i]=arr[i]/2;
                    c++;
                    count[i]=c;
                }
            }
            
            
        }
        for(int i=0;i<n;i++){
//            cout<<count[i]<<endl;
            
        }
        int min = count[0];
           for (int i = 0; i < n; i++)
           {
               if (min > count[i])
                   min = count[i];
           }
        printf("%d",min);
        printf("\n");

//        cout<<count-1<<endl;
    }
}
