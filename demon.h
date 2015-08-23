//
//  demon.h
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#ifndef DEMON_H
#define DEMON_H

#include "creature.h"
#include <stdio.h>
#include <string>

class demon: public creature {

   public:
      demon();
      demon(int str, int hp);
      std::string getSpecies();
      int getDamage();

   private:

};

#endif
