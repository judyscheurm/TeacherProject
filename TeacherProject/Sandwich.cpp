//
//  Sandwich.cpp
//  TeacherProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 Scheurman, Judy. All rights reserved.
//

#include "Sandwich.h"

//Constructors

Sandwich :: Sandwich()
{
    this->breadCount = 2;
    this->filling = "peanut butter and honey";
    this->name = "PB and Honey";
}


//end contructors

int Sandwich :: getBreadCount()
{
    return breadCount;
}

void Sandwich :: setBreadCount(int breadCount)
{
    this->breadCount = breadCount;
}
string Sandwich :: getFilling()
{
    return filling;
}

void Sandwich :: setFilling(string filling)
{
    this->filling = filling;
    
}
string Sandwich :: getName()
{
    return name;
}

void Sandwich :: setName(string name)
{
    this->name = name;
}
