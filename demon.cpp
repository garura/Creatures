//
//  demon.cpp
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#include "demon.h"
#include <iostream>

using namespace std;


demon::demon() {}






demon::demon(int str, int hp): creature(str, hp) {}






string demon::getSpecies() {
   string speciesType = "demon";
   return speciesType;
}






int demon::getDamage() {
   int damage = creature::getDamage();
   if (rand() % 4 == 0) {
      cout << "Demonic attack inflicts 50 additional damage points!" << endl;
      damage += 50;
   }
   return damage;
}