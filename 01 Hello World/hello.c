/**
 * hello.c
 * This file serves as an introduction to a basic C program. It simply prints out
 * "Hello, World!" to the console.
 * The code and general concepts are based on the 
 * KISS Institute for Practical Robotics introductory BotBall workshop.
 * Modified 2015 J.E. Cihlar for the Senn High School Robotics Team
 **/


	/** Multiline comments begin with "slash star" and end with "star slash"
	 * Some coding styles put a * at the beginning of each line,
	 * but it really doesn't matter. Just be consistent.
	 */
	 
	 /**
	  * Every C program begins with a main() function. The program starts running
	  * the instructions between the { } in the main() function.
	  */
int main()
{
	printf("Hello, World!\n"); // statements always end with a ;  
	return 0; // return ends a function - functions of type int must return an integer value
}
