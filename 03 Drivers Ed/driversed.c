/**
 * driversed.c
 * This program introduces functions and concepts necessary to drive a robot.
 * The program can operate with the Link Simulator that KISS provides. For this program,
 * we'll use the left and right wheels. Check the configuration in the Simulator to make
 * sure that the motor ports match what you have set in the program.
 *
 * The code and general concepts are based on the 
 * KISS Institute for Practical Robotics introductory BotBall workshop.
 * Modified 2015 J.E. Cihlar for the Senn High School Robotics Team
 **/

int main()
{
		// BEST PRACTICE: print to the console what you are about to do 
	printf("Drive forward for 3 seconds.\n");	
	
	motor(0, 50); // turn on the motor on port 0 at 50% power
	motor(1, 50); // turn on the motor on port 1 at 50% power

	msleep(3000); // pause program execution for 3 seconds...the motors will keep going
	
	ao();	// ao turns off all motors
	
		// BEST PRACTICE: print to the console when you're done with the program
	printf ("Program is complete.\n");
	return 0;
}
