#include<stdio.h>
#include<math.h>
int main(){
	double lemda, theta[3], a[3];
	int m;

	while(1){
        printf("Enter the value of Lemda: ");
		scanf("%lf", &lemda);
		if(lemda < 380 || lemda > 750){
			printf("Out of the range. Please enter a valid number\n");
		}
		else{
			break;
		}
	}

	printf("Enter the value of m: ");
	scanf("%d", &m);

	printf("Enter the 3 value of a: ");
	for(int i = 0; i < 3; i++){
        double temp;
		scanf("%lf", &temp);
		temp /= 1000000;
		a[i] = temp;
	}
	lemda /= 1000000000;

	theta[0] = asin((m * lemda) / a[0]);
	theta[1] = asin((m * lemda) / a[1]);
	theta[2] = asin((m * lemda) / a[2]);

	if(theta[0] >= theta[1] && theta[0] >= theta[2]){
		printf("%lf would bent the light most.\n", (a[0] * 1000000));
	}
	else if(theta[1] >= theta[0] && theta[1] >= theta[2]){
		printf("%lf would bent the light most.\n", (a[1] * 1000000));
	}
	else if(theta[2] >= theta[1] && theta[2] >= theta[0]){
		printf("%lf would bent the light most.\n", (a[2] * 1000000));
	}
	else{
        printf("(m * lemda) / a is greater then 1\n");
	}

	return 0;
}
