//
//  main.cpp
//  array calculations
//
//  Created by Ritesh Kumar on 08/09/21.
//

#include <iostream>

using namespace std;
int main(){
    int array[5]={21,22,43,747,32};
    int sum=0;
    
    for (int x=0;x<=4;x++){
        sum=array[x]+sum;
    }
    cout<<"  "<<sum<<endl;
}
