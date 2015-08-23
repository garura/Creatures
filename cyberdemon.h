//
//  cyberdemon.h
//  CS 2b_6
//
//  Created by Chris on 7/21/15.
//  Copyright (c) 2015 Chris. All rights reserved.
//

#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include "demon.h"
#include <stdio.h>
#include <string>

class cyberdemon: public demon {

   public:
      cyberdemon();
      cyberdemon(int str, int hp);
      std::string getSpecies();
   
   private:

};


#endif 