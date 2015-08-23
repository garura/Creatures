//
//  balrog.h
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#ifndef BALROG_H
#define BALROG_H

#include "demon.h"
#include <stdio.h>
#include <string>

class balrog: public demon {

   public:
      balrog();
      balrog(int str, int hp);
      std::string getSpecies();
      int getDamage();

   private:

};

#endif
