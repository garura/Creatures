//
//  elf.cpp
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#include "elf.h"
#include <iostream>

using namespace std;

elf::elf() {}






elf::elf(int str, int hp): creature(str, hp) {}






string elf::getSpecies() {
   string speciesType = "elf";
   return speciesType;
}






int elf::getDamage() {
   int damage = creature::getDamage();
   if (rand() % 2 == 0) {
      cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
      damage *= 2;
   }
   return damage;
}
