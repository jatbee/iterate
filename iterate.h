#ifndef _ITERATE_H_
#define _ITERATE_H_

// data structure moderating the control loop
struct Control {
	int iterations;
	int seconds;
};

// initialise: parse the command line
Control *initialise(int argc, char ** argv);

// execute the command loop
void execute(Control *control);

// finalize: clean up the memory
void finalize(Control *control);

#endif
