#include "iterate.h"
#include <iostream>
#include <sstream>
#include <cstdlib>

Control *initialise (int argc, char ** argv) {
	
	Control *control = NULL; // pointer to a control object, initialised as null
	
	if ( argc!=3 ) { // check command line input
		std::cerr << "Usage: " << argv[0] << " iterations seconds" << std::endl;
		exit(0);
	} else {
		control = new Control;
		control->iterations=0; // default values if no integers are found
		control->seconds=0;
		{
			std::istringstream stream(argv[1]);
			if ( !(stream >> control->iterations) ) return control;
		}
		{
			std::istringstream stream(argv[2]);
			if ( !(stream >> control->seconds) ) return control;
		}
	}

	return control;

}
