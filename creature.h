//
//  creature.h
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//



#ifndef CREATURE_H
#define CREATURE_H
#include <string>

class creature {

   public:
      creature();
      creature(int str, int hp);
      virtual int getDamage();
      int getStrength() const;
      int getHitpoints() const;
      void setStrength(int str);
      void setHitpoints(int hp); 
      virtual std::string getSpecies() = 0;

   private:
      int strength;
      int hitpoints;
   
};

#endif
