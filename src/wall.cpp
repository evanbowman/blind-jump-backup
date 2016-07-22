//========================================================================//
// Copyright (C) 2016 Evan Bowman                                         //
//                                                                        //
// This program is free software: you can redistribute it and/or modify   //
// it under the terms of the GNU General Public License as published by   //
// the Free Software Foundation, either version 3 of the License, or      //
// (at your option) any later version.                                    //
//                                                                        //
// This program is distributed in the hope that it will be useful,        //
// but WITHOUT ANY WARRANTY; without even the implied warranty of         //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          //
// GNU General Public License for more details.                           //
//                                                                        //
// You should have received a copy of the GNU General Public License      //
// along with this program.  If not, see <http://www.gnu.org/licenses/>.  //
//========================================================================//

#include "wall.hpp"

wall::wall()
	: xPosInitial{0.f},
	  yPosInitial{0.f},
	  xPos{0.f},
	  yPos{0.f}
{}

float wall::getPosY() const {
	return yPos;
}

float wall::getPosX() const {
	return xPos;
}

void wall::setPosition(float x, float y) {
	xPos = x;
	yPos = y;
}

void wall::setXinit(float x) {
	xPosInitial = x;
}

void wall::setYinit(float y) {
	yPosInitial = y;
}

float wall::getXinit() const {
	return xPosInitial;
}

float wall::getYinit() const {
	return yPosInitial;
}
