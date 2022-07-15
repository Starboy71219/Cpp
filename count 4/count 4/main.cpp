//
//  main.cpp
//  count 4
//
//  Created by Ritesh Kumar on 17/09/21.
//

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cin>>n;
        int i=0;
        while(n!=0){
            if(n%10==4){
                i++;
            }
            n=n/10;
        }
        cout<<i<<endl;
    }
    return 0;
}
