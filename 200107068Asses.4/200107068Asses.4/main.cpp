//
//  main.cpp
//  200107068Asses.4
//
//  Created by Ritesh Kumar on 31/03/21.
//

#include <iostream>
using namespace std;
int main(){
  
    
    
    
    const long  F = 1;
    const long  Y=9;
    const double M=10.76391041671;
    const long  A=43560;
    const double H=107639.1041671;
    const double I=0.0069444444444444;
    const double C=435.6;
    
    char n {0}; //(1);
    cin>>n;
    
    double m;   //(2);
    cout<<"enter the unit for conversion (select from F, Y, M, A, H, I, C): "<<endl;
    cin>>m;
    
    if (m==F|| m==Y|| m==M|| m==A|| m==H|| m==I|| m==C)
    
   
    {
        char p;  //(3);
        cout<<"enter the unit in which the conversion has to be done (select from F, Y, M, A, H, I, C): "<<endl;
        cin>>p;
        
        
        if (p==F|| p==Y|| p==M|| p==A|| p==H|| p==I|| p==C)
        
        {
             double X {0};
            X=n/p;
            double Z {0};
            Z=X*m;
            cout<<Z<<endl;
        }
        else{
            cout<<"ERROR!!"<<endl;
        }
     
        
    }
    else{
        cout<<"ERROR!!"<<endl;
    }
    return 0;
}
