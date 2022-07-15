//
//  main.cpp
//  Beautiful Binary String
//
//  Created by Ritesh Kumar on 14/12/21.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counter=0;
    for(int i=1;i<n-1;i++){
        if(s[i-1]=='0'&&s[i]=='1'&&s[i+1]=='0'){
            s[i+1]='1';
            counter++;
        }
    }
    cout<<counter<<endl;
}
