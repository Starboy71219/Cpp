//
//  main.cpp
//  2nd largest number
//
//  Created by Ritesh Kumar on 26/09/21.
//

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a=0,b=0,c=0;
    while(t--){
        cin>>a;
        cin>>b;
        cin>>c;
        int larg2=0;
        if(a>b>c || c>b>a){
            larg2=b;
        }
        else if (b>a>c || c>a>b){
            larg2=a;
        }
        else if (b>c>a || a>c>b){
            larg2=c;
        }
        cout<<larg2<<endl;
    }
    return 0;
}
