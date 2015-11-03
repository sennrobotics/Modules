/**
 * sleepyhello.c
 * This program introduces the BotBall specific msleep() function. 
 *
 * The code and general concepts are based on the 
 * KISS Institute for Practical Robotics introductory BotBall workshop.
 * Modified 2015 J.E. Cihlar for the Senn High School Robotics Team
 **/

int main()
{
	printf("Hello...\n");
	msleep(3000); // msleep pauses the program for 3000 milliseconds (3 seconds)
	printf("I'm very sleepy!\n");
	return 0;
}
