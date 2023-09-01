
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> /* For working with POSIX threads*/
#include <unistd.h>  /* For pause() and sleep() */
#include <errno.h>	 /* For using Global variable errno */

/* A thread callback fn must have following prototypes 
 * void *(*thread_fn)(void *)
 * */
static void *
thread_fn_callback(void *arg) {

	char *input = (char *)arg;

	while(1) {	
		printf("input string = %s\n", input);
		sleep(1);
	}
}

void
thread1_create() {

	/* opaque object, dont bother about its internal
	 * members */
	pthread_t pthread1;

	/* Take some argument to be passed to the thread fn,
 	 * Look after that you always paas the persistent memory
 	 * as an argument to the thread, do not pass caller's 
 	 * local variables Or stack Memory*/	
	static char *thread_input1 = "I am thread no 1";

	/* Return 0 on success, otherwise returns errorcode, all
 	 * pthread functions return -ve error code on failure, they
 	 * do not set global 'errno' variable */
	int rc = pthread_create(&pthread1, 
				   NULL, 
				   thread_fn_callback,
				   (void *)thread_input1);
	if(rc != 0) {

		printf("Error occurred, thread could not be created, errno = %d\n", rc);
		exit(0);
	}
}

int
main(int argc, char **argv){

	thread1_create();
	printf("main fn paused\n");
	pause();
	return 0;
}
