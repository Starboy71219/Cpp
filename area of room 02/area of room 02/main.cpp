//
//  main.cpp
//  area of room 02
//
//  Created by Ritesh Kumar on 24/03/21.
//

#include <iostream>
int main()
{
using namespace std;
    cout<<"WELCOME TO AREA CALCULATOR"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"You can use this programme to calculate the area of your room!!"<<endl;
    cout<<"let's get started!!"<<endl;
    cout<<"enter your room length:- "<<endl;
    float Length {0};
    cin>>Length;
    cout<<"Length of the room enterred is "<<Length<<endl;
    cout<<"enter your room width:- "<<endl;
    float Width {0};
    cin>>Width;
    cout<<"width of the room enterred is "<<Width<<endl;
    float Area {0};
    Area=Length*Width;
    cout<<"Area of the room for the enterred dimensions is:- "<<Area<<endl;
    return 0;
   
    
    
}
