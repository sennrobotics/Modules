/**
 * driversed.c
 * This program introduces variables and how you could use them to store values instead of typing them out everytime you want to use them again
 * or easily adjust them.
 * 
 * The code and general concepts are based on the 
 * KISS Institute for Practical Robotics introductory BotBall workshop.
 * Modified 2015 Rakesh Das for the Senn High School Robotics Team
 **/

int main()
{
		/** To declare a variable, first you must tell the program what type of variable this is.
		*This variable is a int, which stands for integer, there are a bunch of other different variable types, but we will only use ints for the robots :)
		* next, we just put an equals sign and put what value we want out variable to equal. In this case, I created a variable named 'power' that equals 50
		**/
	int power = 50;
		// BEST PRACTICE: print to the console what you are about to do 
	printf("Drive forward for 3 seconds.\n");	
		//Now, I can write 'power' anywhere and the program can subtitute it for my value, which happens to be 50, wherever the variable 'power' is present
	motor(0, power); // turn on the motor on port 0 at 50% power
	motor(1, power); // turn on the motor on port 1 at 50% power

	msleep(3000); // pause program execution for 3 seconds...the motors will keep going
	
	ao();	// ao turns off all motors
	
		// BEST PRACTICE: print to the console when you're done with the program
	printf ("Program is complete.\n");
	return 0;
}
