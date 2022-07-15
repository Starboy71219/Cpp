//
//  main.cpp
//  antipal
//
//  Created by Ritesh Kumar on 15/12/21.
//

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        if(n%2==1){
            cout<<-1<<endl;
        }
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                s[i]='1';
            }
            for(int i=n/2;i<n;i++){
                s[i]='0';
            }
        }
        for(int i=0;i<n;i++){
            cout<<s[i];
            
        }
        cout<<endl;
    }
}
