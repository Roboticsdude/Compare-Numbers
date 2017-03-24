//
//  main.cpp
//  RoboticsDude_Practice
//
//  Created by Claudio Caldarescu on 3/23/17.
//  Copyright © 2017 Claudio Caldarescu. All rights reserved.
//

#include  <iostream>

using namespace std;

int main( )

{
    int num1, num2;
    
    cout << "Enter any two integers: ";
    cin >> num1 >> num2;
    cout << endl;
    
    cout << " The two integers entered are " << num1
    <<  " and " << num2 << endl;
    
    if (num1 > num2)
        cout << "The larger number is " <<num1 << endl;
    else if (num2 > num1)
        cout << "The larger number is " << num2 << endl;
   else
    cout << "Both numbers are equal." <<endl;
    return 0;

}

