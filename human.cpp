//
//  Human.cpp
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#include "human.h"
#include <iostream>

using namespace std;

human::human() {}






human::human(int str, int hp): creature(str, hp) {}






string human::getSpecies() {
   string speciesType = "human";
   return speciesType;
}

