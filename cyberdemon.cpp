//
//  cyberdemon.cpp
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#include "cyberdemon.h"
#include <iostream>

using namespace std;

cyberdemon::cyberdemon() {}






cyberdemon::cyberdemon(int str, int hp): demon(str, hp) {}






string cyberdemon::getSpecies() {
   string speciesType = "cyberdemon";
   return speciesType;
}




