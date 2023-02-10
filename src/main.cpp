// import pros
#include "main.h"

// include selectorlib
#include "selectorlib/selector.h"

void initialize() {
	const char* b[] = {AUTONS, ""};

	// initialize the selectorlib
	selectorlib::init(HUE, DEFAULT, b);
}

void disabled() {
}

void competition_initialize() {
}

void autonomous() {
}

void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor left_mtr(1);
	pros::Motor right_mtr(2);

	while (true) {
		int left = master.get_analog(ANALOG_LEFT_Y);
		int right = master.get_analog(ANALOG_RIGHT_X);

		left_mtr = left + right;
		right_mtr = left - right;

		pros::delay(20);
	}
}
