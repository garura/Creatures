//
//  balrog.cpp
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#include "balrog.h"
#include <iostream>

using namespace std;

balrog::balrog() {}






balrog::balrog(int str, int hp): demon(str, hp) {}






string balrog::getSpecies() {
   string speciesType = "balrog";
   return speciesType;
}






int balrog::getDamage() {
   int damage = demon::getDamage();
   int damage2 = (rand() % creature::getStrength()) + 1;
   cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
   return damage+damage2;
}