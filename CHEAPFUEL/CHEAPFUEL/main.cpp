//
//  main.cpp
//  CHEAPFUEL
//
//  Created by Ritesh Kumar on 09/11/21.
//

#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        if((x+k*a)>(y+k*b)){
            cout<<"DIESEL"<<endl;
        }
        else if((x+k*a)<(y+k*b)){
            cout<<"PETROL"<<endl;
        }
        else{
            cout<<"SAME PRICE"<<endl;
        }
    }
    return 0;
}
