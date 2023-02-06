#ifndef _DEF_SELECTOR_H_
#define _DEF_SELECTOR_H_

#include <string>

namespace selectorlib {
/* Auton selector configuration constants */
#define AUTONS "Short", "Long", "Sit." // Names of autonomi, up to 10
#define HUE 0     // Color of theme from 0-359(H part of HSV)
#define DEFAULT 0 // Default auton selected

// variable to store selected auton and number of discs to fire
extern int auton;
extern int discs;

inline const char* autons[] = {AUTONS, ""};

// function to initialize auton selector
void init(int hue, int default_auton, const char** autons);

// function to destroy auton selector
void destroy();

} // namespace selectorlib

#endif
