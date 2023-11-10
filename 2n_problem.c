#include<stdio.h>
#include<math.h>
int main(){
	double theta1, theta2, lemda1 , lemda2, d;
	int m1, m2;
	const double pi = 3.1416;

	lemda1 = 530 / 1000000000.0;
	lemda2 = 700 / 1000000000.0;

	theta1 = 65.0 * (pi / 180.0);
	m1 = 3;
	m2 = 2;

	d = (m1 * lemda1) / sin(theta1);
	theta2 = asin((m2 * lemda2)/d);

	printf("At %lf angle will the second order bright spot before red light\n", (theta2 * (180/pi)));

	return 0;
}
