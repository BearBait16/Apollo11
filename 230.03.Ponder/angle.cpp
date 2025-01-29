/***********************************************************************
 * Source File:
 *    ANGLE
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a direction
 ************************************************************************/

#include "angle.h"
#include <math.h>  // for floor()
#include <cassert>
using namespace std;

 /************************************
  * ANGLE : NORMALIZE
  ************************************/
double Angle::normalize(double radians) const
{
   while (radians < 0)
   {
      radians += 2 * M_PI;
   }
   
   while (radians > (2 * M_PI))
   {
      radians -= 2 * M_PI;
   }
   return radians;
}

/************************************

// Sets degrees based off of the Radians built into the class
void Angle::setDegrees(double degrees)
{
	degrees = radians * 180 / M_PI;
}

void Angle::setRadians(double radians)
{
	this->radians = radians;
}

// sets radians to an up position
void Angle::setUp()
{
	radians = 0.0;
}

// sets radians to a downward angle
void Angle::setDown()
{
	radians = 180.0;
}

// sets radians to a directly right angle
void Angle::setRight()
{
	radians = 90.0;
}
  ************************************/
