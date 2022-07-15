//
//  main.cpp
//  chef and remissness
//
//  Created by Ritesh Kumar on 29/09/21.
//

#include <iostream>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    ll int max=0;
    ll int min=0;
    while(t--){
       ll int a,b;
        scanf("%lld%lld",&a,&b);
        max=a+b;
        if(a>=b){
            min=a;
        }
        else if(b>a){
            min=b;
        }
        else{
            break;
        }
        printf("%lld",min);
        printf(" ");
        printf("%lld",max);
        printf("\n");
    }
    return 0;
}
