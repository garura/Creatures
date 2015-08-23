//
//  elf.h
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#ifndef ELF_H
#define ELF_H

#include <stdio.h>
#include "creature.h"
#include <string>

class elf: public creature {

   public:
      elf();
      elf(int str, int hp);
      std::string getSpecies();
      int getDamage();

   private:

};



#endif
