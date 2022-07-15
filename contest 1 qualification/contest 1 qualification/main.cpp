//
//  main.cpp
//  contest 1 qualification
//
//  Created by Ritesh Kumar on 11/09/21.
//

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,k;
        scanf("%d%d",&n,&k);
        int s=0;
        int res=0;
        for(int x=1;x<=n;x++){
            cin>>s;
            int c=0;
            if(s>=k){
                c++;
            }
            res=c;
        }
        cout<<res<<endl;
        
    }
    return 0;
}
