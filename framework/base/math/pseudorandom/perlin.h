///////////////////////////////////////////////////////////////////////////////////////
// perlin.h
//
// Perlin noise generation functions based on Ken Perlin algorithm.
// Generates values in range -1,1.
//
///////////////////////////////////////////////////////////////////////////////////////

#ifndef __PERLIN_NOISE_H_
#define __PERLIN_NOISE_H_

///////////////////////////////////////////////////////////////////////////////////////
float mnoise(float x);
///////////////////////////////////////////////////////////////////////////////////////
float mnoise(float x, float y);
///////////////////////////////////////////////////////////////////////////////////////
float mnoise(float x, float y, float z);
///////////////////////////////////////////////////////////////////////////////////////


#endif //__PERLIN_NOISE_H_