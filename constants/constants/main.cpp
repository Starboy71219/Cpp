//
//  main.cpp
//  constants
//
//  Created by Ritesh Kumar on 18/01/21.
//

#include <iostream>
int main(){
    using namespace std;
    
    cout<<"WELCOME TO CARPET CLEANING COMPANY"<< endl<<endl;
    cout<<"Estimate the cost for carpet cleaning"<<endl<<endl;
    
    const int cost=32.5;
    const double tax=0.06;
    cout<<"Enter the number of carpets to be cleaned-----"<<endl<<endl;
    int number;
    cin>>number;
    double price= number*cost+number*cost*tax;
    
    cout<<"PRICE FOR THE ENTERRED NUMBER OF CARPETS TO BE CLEANED IS: ₹"<<price<<endl;
    return 0;
    
    


}
