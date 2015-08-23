//
//  Human.h
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#ifndef HUMAN_H
#define HUMAN_H

#include <stdio.h>
#include "creature.h"
#include <string>

class human: public creature {

   public:
      human();
      human(int str, int hp);
      std::string getSpecies();

   private:

};

#endif
