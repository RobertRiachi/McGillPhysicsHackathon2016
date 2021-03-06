
#include "simulation.hpp"

#include <pthread.h>
#include <thread>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 


int main(int argc, char **argv) {
	
	Simulation sim(0.3, 9);
	
	vec3 pos1, vel1;
	vec3 pos2, vel2;
	vec3 pos3, vel3;
	vec3 pos4, vel4;
	vec3 pos5, vel5;
	vec3 pos6, vel6;
	vec3 pos7, vel7;
	vec3 pos8, vel8;
	vec3 pos9, vel9;

	pos1 = {0.0, 0.0, 0.0};
	vel1 = {0.0, 0.0, 0.0};
	pos2 = {1.0, 0.0, 0.0};
	vel2 = {0.0, 40.0, 0.0};
	pos3 = {3.0, 0.0, 0.0};
	vel3 = {0.0, 4.0, 0.0};	
	pos4 = {1.0, 1.0, 0.0};
	vel4 = {-4.0, 4.0, 0.0};	
	pos5 = {4.0, 0.0, 0.0};
	vel5 = {0.0, 3.0, 0.0};
	pos6 = {-4.0, 1.0, 0.0};
	vel6 = {0.0, 4.0, 0.0};
	pos7 = {0.0, 1.0, 0.0};
	vel7 = {1.0, 1.1, 0.0};
	pos8 = {1.0, 0.5, 0.0};
	vel8 = {0.1, 0.0, 0.0};
	pos9 = {-2.9, 0.0, 0.0};
	vel9 = {0.0, -3.1, 0.0};

	sim.addBody(pos1, vel1, 1e6);
	sim.addBody(pos2, vel2, 1.0);
	sim.addBody(pos3, vel3, 1.0);
	sim.addBody(pos4, vel4, 1.5);
	sim.addBody(pos5, vel5, 3.0);
	sim.addBody(pos6, vel6, 3.9);
	sim.addBody(pos7, vel7, 3.0);
	sim.addBody(pos8, vel8, 3.1);	
	sim.addBody(pos9, vel9, 1.1);

	while (true) {
		sim.tick();
	}
    	
	return 0;
}
