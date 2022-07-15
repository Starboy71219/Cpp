//
//  main.cpp
//  codechef div by 3
//
//  Created by Ritesh Kumar on 22/09/21.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int ans;
    for(int i=0;i<=t;i++){
        cin>>n;
        if(n==1){
            ans=3;
        }
        else{
            ans=pow(10,(n-1))+5;
        }
        cout<<ans<<endl;
    }
    return 0;
}
