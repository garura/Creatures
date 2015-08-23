//
//  creature.cpp
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#include <iostream>
#include <string>
#include "creature.h"

using namespace std;


creature::creature() {
   strength = 10;
   hitpoints = 10;
}






creature::creature(int str, int hp) {
   strength = str;
   hitpoints = hp;
}






int creature::getDamage() {
   int damage;
   damage = (rand( ) % strength) + 1;
   cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
   return damage;
}






int creature::getStrength() const {
   return strength;
}






int creature::getHitpoints() const {
   return hitpoints;
}






void creature::setStrength(int str) {
   strength = str;
}






void creature::setHitpoints(int hp) {
   hitpoints = hp;
}







