//
//  main.cpp
//  counting recursion
//
//  Created by Ritesh Kumar on 13/10/21.
//

#include <iostream>
using namespace std;
void count(int n){
    if (n<1){
        return;
    }
    count(n-1);
    cout<<n<<" ";
}
int main(){
    int n=5;

    count(n);
}
