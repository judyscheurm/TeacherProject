//
//  main.cpp
//  TeacherProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 Scheurman, Judy. All rights reserved.
//

#include <iostream>
#include <string>
#include "Sandwich.h"

using namespace std;

int main()
{
    // insert code here...
//    cout << "Hello, World!" << endl;
//    double myFraction;
//    cout << myFraction << endl;
//    myFraction = 3.15;
//    cout << myFraction << endl;
//    int myFavoriteNumber;
//    cout << myFavoriteNumber << endl;
//    cout << "Please type in your favorite number.";
//    cin >> myFavoriteNumber;
//    cout << myFavoriteNumber <<endl;
//    string myWords;
//    myWords = "Wow! This is so much fun!";
//    cout << myWords << endl;
    
    Sandwich mySandwich;
    cout  <<mySandwich.getName() << endl;
    cout << "Let's rename my sandwich" <<endl;
    cout << "Please type a new name" <<endl;
    string tempName;
    // cin >> tempName;
    getline (cin, tempName);
    mySandwich.setName(tempName);
    cout << "The new name is: " << mySandwich.getName() << endl;
    
    
    return 0;
}
