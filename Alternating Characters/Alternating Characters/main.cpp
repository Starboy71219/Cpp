//
//  main.cpp
//  Alternating Characters
//
//  Created by Ritesh Kumar on 14/12/21.
//

#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int counter=0;
        int i=0;
        while(i<s.size()-1){
            if(s[i+1]==s[i]){
                counter++;
            }
            i++;
        }
        cout<<counter<<endl;
    }
}
