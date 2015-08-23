//
//  client.cpp
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#include <stdio.h>
#include "balrog.h"
#include "cyberdemon.h"
#include "elf.h"
#include "human.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void battleArena(creature &fighterOne, creature &fighterTwo);

int main() {
   srand(time(0));
   
   human h1;
   elf e1;
   cyberdemon c1;
   balrog b1;

   human h(20, 30);
   elf e(40, 50);
   cyberdemon c(30, 30);
   balrog b(20, 30);

   battleArena(h, h);
   cout << " \n============\n\n";
   battleArena(h1, c1);
   cout << " \n============\n\n";
   battleArena(e, b1);
   cout << " \n============\n\n";
   battleArena(c, b);
}







void battleArena(creature &fighterOne, creature &fighterTwo) {
   if (&fighterOne != &fighterTwo) {
      int roundNum = 0;
      while (fighterOne.getHitpoints() > 0 && fighterTwo.getHitpoints() > 0) {
         roundNum++;
         cout << "Starting round " << roundNum << endl;
         cout << "First gladiator: " << fighterOne.getSpecies() << ". ";
         cout << "Stats (str, hp): " << fighterOne.getStrength()<< ", " << fighterOne.getHitpoints() << endl;
         cout << "Second gladiator: " << fighterTwo.getSpecies() << ". ";
         cout << "Stats (str, hp): " << fighterTwo.getStrength()<< ", " << fighterTwo.getHitpoints() << endl;
         cout << endl;
         int damageOne = fighterOne.getDamage();
         cout << "(" << damageOne << " total damage)" << endl;
         int damageTwo = fighterTwo.getDamage();
         cout << "(" << damageTwo << " total damage)" << endl;
         fighterOne.setHitpoints((fighterOne.getHitpoints() - damageTwo));
         fighterTwo.setHitpoints((fighterTwo.getHitpoints() - damageOne));
         cout << "\nRound " << roundNum << " finished.\n" << endl;
      }
      if (fighterOne.getHitpoints() >= 0) {
         cout << fighterOne.getSpecies() + " has emerged victorious!" << endl;
         cout << fighterTwo.getSpecies() + " has died." << endl;
      }
      else if (fighterTwo.getHitpoints() >= 0) {
         cout << fighterTwo.getSpecies() + " has emerged victorious!" << endl;
         cout << fighterOne.getSpecies() + " has died." << endl;
      }
      else {
         cout << fighterOne.getSpecies() + " has died." << endl;
         cout << fighterTwo.getSpecies() + " has died." << endl;
         cout << "It is a tie." << endl;
      }
   }
   else {
      cout << "A gladiator cannot be their own opponent." << endl;
   }
}




/* Output:

 A gladiator cannot be their own opponent.

 ============

 First gladiator: human. Stats (str, hp): 10, 10
 Second gladiator: cyberdemon. Stats (str, hp): 10, 10

 The human attacks for 1 points!
 (1 total damage)
 The cyberdemon attacks for 10 points!
 (10 total damage)
 human has died.
 cyberdemon has emerged victorious!

 ============

 First gladiator: elf. Stats (str, hp): 40, 50
 Second gladiator: balrog. Stats (str, hp): 10, 10

 The elf attacks for 38 points!
 Magical attack inflicts 38 additional damage points!
 (76 total damage)
 The balrog attacks for 5 points!
 Balrog speed attack inflicts 8 additional damage points!
 (13 total damage)
 balrog has died.
 elf has emerged victorious!

 ============

 First gladiator: cyberdemon. Stats (str, hp): 30, 30
 Second gladiator: balrog. Stats (str, hp): 20, 30

 The cyberdemon attacks for 15 points!
 (15 total damage)
 The balrog attacks for 4 points!
 Balrog speed attack inflicts 11 additional damage points!
 (15 total damage)

 Round 1 finished. Starting round 2.

 First gladiator: cyberdemon. Stats (str, hp): 30, 15
 Second gladiator: balrog. Stats (str, hp): 20, 15

 The cyberdemon attacks for 17 points!
 Demonic attack inflicts 50 additional damage points!
 (67 total damage)
 The balrog attacks for 11 points!
 Demonic attack inflicts 50 additional damage points!
 Balrog speed attack inflicts 5 additional damage points!
 (66 total damage)
 cyberdemon has died.
 balrog has died.
 It is a tie.

 
*/