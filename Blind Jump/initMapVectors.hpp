//
//  initMapVectors.hpp
//  Blind Jump
//
//  Created by Evan Bowman on 10/20/15.
//  Copyright © 2015 Evan Bowman. All rights reserved.
//

#ifndef initMapVectors_hpp
#define initMapVectors_hpp

#include <stdio.h>
#include "SFML/graphics.hpp"
#include "wall.hpp"
#include "coordinate.h"


void initMapVectors(short mapArray[61][61], wall, std::vector<wall>&, float&, float&, std::vector<Coordinate>&, std::vector<Coordinate>&, std::vector<Coordinate>&, std::vector<Coordinate>&, Coordinate&, char itemArray[48][3], int);

#endif /* initMapVectors_hpp */
