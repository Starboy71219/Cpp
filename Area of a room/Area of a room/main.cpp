//
//  main.cpp
//  Area of a room
//
//  Created by Ritesh Kumar on 18/01/21.
//
#include <iostream>
int main(){
    using namespace std;
    
    long double length;
    cout<<"what is the lenth of your room-- ";
    cin>>length;
    
    long double breadth;
    cout<<"what is the breadth of your room-- ";
    cin>>breadth;
    
    cout<<"length is ="<<length<<"\n";
    cout <<"breadth is ="<<breadth<<"\n";
    
    long double area = length*breadth;
    
    cout<<"the area of your room is "<<area<<" metres square."<<"\n";
    return 0;

}
