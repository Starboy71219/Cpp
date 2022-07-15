//
//  main.cpp
//  CIELRCPT
//
//  Created by Ritesh Kumar on 02/10/21.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int p;
        cin>>p;
        for(int i=11;i>=0;i--){
            int item;
            item=pow(2,i);
            while (p>=item){
                p=p-item;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
