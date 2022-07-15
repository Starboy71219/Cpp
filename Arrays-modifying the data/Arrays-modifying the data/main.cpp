//
//  main.cpp
//  Arrays-modifying the data
//
//  Created by Ritesh Kumar on 25/01/21.
//


#include <iostream>
int main(){
    using namespace std;
    
    cout<<"TEST SCORES"<<endl;
    cout<<"=========================================="<<endl;
    int test_scores [5]{50,60,70,80,90};
    cout<<"the test score of 1st entry is: "<<test_scores[0]<<endl;
    cout<<"the test score of 2nd entry is: "<<test_scores[1]<<endl;
    cout<<"the test score of 3rd entry is: "<<test_scores[2]<<endl;
    cout<<"the test score of 4th entry is: "<<test_scores[3]<<endl;
    cout<<"the test score of 5th entry is: "<<test_scores[4]<<endl;
    
    cout<<"CHANGING VALUES"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Change the values of the arrays: "<<endl;
    
    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cin>>test_scores[3];
    cin>>test_scores[4];
    
    cout<<"the new test score of 1st entry is: "<<test_scores[0]<<endl;
    cout<<"the new test score of 2nd entry is: "<<test_scores[1]<<endl;
    cout<<"the new test score of 3rd entry is: "<<test_scores[2]<<endl;
    cout<<"the new test score of 4th entry is: "<<test_scores[3]<<endl;
    cout<<"the new test score of 5th entry is: "<<test_scores[4]<<endl;
    
    
    
    return 0;
    
    
    
}
