#include <stdio.h>
#include <stdlib.h>

int main() {

	double num1;
	double num2;
	char user_choice;
	double result;

	int random = 1;
	char *menu = " "
		"\n[1] Multiply"
		"\n[2] Add"
		"\n[3] Substract\n\n";

	printf("\nEnter your first number: ");
	if (scanf("%lf", &num1) == 1) {
		printf("Your first number is: %f\n", num1);
	} else {
		printf("You must enter an integer.\n");
		exit(EXIT_FAILURE);
	}

	printf("\nEnter your second number: ");
	if(scanf("%lf", &num2) == 1) {
		printf("Your second number is: %f\n", num2);
	} else {
		printf("You must enter an integer.\n");
		exit(EXIT_FAILURE);
	}

	printf("\nPlease choose what you wish to do with %f and %f\n", num1, num2);

	while(1) {
		printf("%s", menu);
		printf("\nSelect(1/2/3): ");
		if(scanf("%d", &user_choice) == 0) {
			printf("You may only enter an integer between 1 and 3.\n");
			exit(EXIT_FAILURE);
		}
		else if(user_choice ==  1 || user_choice == 2 || user_choice == 3){
			break;
		} else {
			if(user_choice > 3) {
				system("clear");
				printf("\n%d is higher than 3, 3 is the highest option.\n", user_choice);
			} else if(user_choice < 1) {
				system("clear");
				printf("\n%d is lower than 1, 1 is the lowest option.\n", user_choice);
			} else {
				exit(EXIT_FAILURE);
			}
		}
	}

	if(user_choice == 1) {
		result = num1 * num2;
		printf("\n%f x (multiplied by) %f is equal to: %f\n", num1, num2, result);
	} else if(user_choice == 2) {
		result = num1 + num2;
		printf("\n%f + %f is equal to: %f\n", num1, num2, result);
	} else if (user_choice == 3) {
		result = num1 - num2;
		printf("%f - %f is equal to: %f\n", num1, num2, result);
	} else {
		printf("Error");
		exit(EXIT_FAILURE);
	}
	return 0;
}
