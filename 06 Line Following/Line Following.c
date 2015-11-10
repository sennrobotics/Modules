// Created on Tues November 10 2015
/** 
 * This program demonstrates the basics of using a while loop to execute some statements
  * while a condition holds true. It will be extended to following a black line using the IR
  * sensor.
  **/

int main()
{	
	int leftPort = 0;
	int rightPort = 1;
	int power = 75;
	int IRPort = 0;
	int IRThreshold = 512;
	int IRInterval = 3000;
	
		// engage the motors
	printf("Move foward until a black line is detected. Check IR sensor every %d ms\n", IRInterval);
	motor(leftPort, power);
	motor(rightPort, power);
		// the while loop runs until a black line is hit
	while (analog(IRPort) >= IRThreshold) {
		msleep(IRInterval);
	}
	printf("We have reached a black line. Stopping\n");
	ao();
	
		// add your challenge code here to get the robot to follow the black line.
	
	return 0;
}
