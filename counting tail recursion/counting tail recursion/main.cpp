//
//  main.cpp
//  counting tail recursion
//
//  Created by Ritesh Kumar on 13/10/21.
//

#include <iostream>

using namespace std;
void count(int i,int n){
    if (i>n){
        return;
    }
    cout<<i<<" ";
    count(i+1,n);
}
int main(){
    int n=5;
    int i=1;
    count(i,n);
}
