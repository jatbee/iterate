#include "iterate.h"
#include <iostream>
#include <unistd.h> // library for sleeping

void execute(Control *control) {
	if(control) {
		for( int i=0; i<control->iterations; i++) {
			std::cout << i << " sleeping for " << control->seconds << " seconds" << std::endl;
			sleep(control->seconds);
		}
	}
}
