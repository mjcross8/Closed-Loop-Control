

#ifndef MAIN_H_

// This prevents multiple inclusion, which isn't bad for this file but is good practice
#define MAIN_H_

#include <API.h>

// Digital port number for top and bottom port of quad encoder
#define QUAD_TOP_PORT 2
#define QUAD_BOTTOM_PORT 3

#define ELBOWQUAD_TOP_PORT 8
#define ELBOWQUAD_BOTTOM_PORT 9

// digital port number limit switch is plugged into
#define LIMIT_SWITCH 6
#define UPPER_LIMIT 5

// Multiple encoders can be declared
Encoder shoulderencoder;
Encoder elbowencoder;

// Allow usage of this file in C++ programs
#ifdef __cplusplus
extern "C" {
#endif


void autonomous();

void initializeIO();

void initialize();

void operatorControl();

// End C++ export structure
#ifdef __cplusplus
}
#endif

#endif
