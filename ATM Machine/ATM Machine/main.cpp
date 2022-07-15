//
//  main.cpp
//  ATM Machine
//
//  Created by Ritesh Kumar on 09/09/21.
//

#include <iostream>
using namespace std;

double balance;
double newBal;
int withdraw;
int main(){
    
    cin>>withdraw;
    cin>>balance;
    
    if (withdraw>0&&withdraw<=balance&&withdraw%5==0){
        newBal=balance-withdraw-0.5;
        if (newBal>=0){
        cout<<"YOUR TRANSACTION WAS SUCCESSFUL!"<<endl;
        cout<<"New balance in your account is "<<newBal<<endl;
        }
        else {
            cout<<"NOT ENOUGH BALANCE. YOUR BALANCE IS "<<balance<<endl;
        }
    }
    else {
        cout<<"NO TRANSACTION FOR THIS AMOUNT."<<endl<<"YOUR BALANCE IS "<<balance<<endl;
    }
}

