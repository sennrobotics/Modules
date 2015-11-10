// Created on Mon November 9 2015
//This program will make use of the IR sensor and if statements to test if the robot is running on top of a black or white area
/*This program demonstrates how to follow a line with a top hat
sensor. This is for a robot with the left motor in port 0, right
motor in port 3 and a top hat sensor in port 0 and mounted at
the front of the robot. This program uses bang-bang control. You
will need to adjust the threshold value to work for you (here it
is 512, right in the middle)*/
int main()
{
	printf("Using sensors!\n");
	
	motor(0, 75);
	motor(1, 75);
	msleep(1000);
	if(analog10(0)>=512){
		printf("I saw a white color!\n");
		ao();
		msleep(3000);
	}
	else if (analog10(0) < 512){
		printf("I saw a dark color!\n");
		ao();
		msleep (3000);
	}
	else {
		printf("I didn't see a color. Something went horribly wrong!\n");
		motor(0, 75);
		motor(1, 75);
		msleep(2000);
	}
	motor(0, 75);
	motor(1, 75);
	msleep(1500);
	ao();
	printf("Finished running the program!\n");
	return 0;
}
