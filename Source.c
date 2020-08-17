//-------------------------------------
// Bello Abarchi
// date of 03/31/2017
//Arrays
//-------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define PAUSE system("pause")
#define CLS system("cls")
#define FLUSH myFlush()
#define SIZE 3
//Function Prototype
char getChoice();
int getNumber(int a[]);
int displaySum(int a[]);
void displayAverage(int a[], int c);
void displaylowest(int a[]);
void displayProduct(int a[]);
void myFlush();
int main() {
	//Variable Declaration
	char choice;
	int c = 0;
	int a[SIZE] = { 0 };
	int NSum = 0;
	//Menu System
	do {
		choice = getChoice();
		switch (choice) {
		case 'A':// 
			c = getNumber(a);
			PAUSE;
			break;
		case 'B':// display sum
			NSum = displaySum(a);
			PAUSE;
			break;
		case 'C':// Average
			displayAverage(a, c);
			PAUSE;
			break;
		case 'D':// display Product
			displayProduct(a);
			PAUSE;
			break;
		case 'E':// display lowest
			displaylowest(a);
			PAUSE;
			break;
		case 'Q':// Quits the program
			printf("\n\tHave a nice day!\n");
			PAUSE;
			break;
		default:
			break;
		}//end switch
	} while (choice != 'Q');

}//end main

 //**********************************************************************************



void displayMenu() {
	CLS;
	printf("\n\n\n");
	printf("\t=======================================\n");
	printf("\t==         M A I N   M E N U         ==\n");
	printf("\t=======================================\n");
	printf("\t=======================================\n\n");
	printf("\t[A] Input number\n\n");
	printf("\t=======================================\n");
	printf("\t[B] Display Sum \n");
	printf("\t[C] Display Average \n");
	printf("\t[D] Display Product \n");
	printf("\t[E] Display Lowest\n");
	printf("\t[Q]uit\n");
	printf("\tEnter choice: ");
}//end displayMenu

void displayAverage(int a[], int c) {
	int i, total = 0;
	for (i = 0; i < c; i++)
		total = total + a[i];
	printf("\n\tThe Average of the values in the array is: %.2f\n",
		(float)total / (float)c);
}//end of display average
void displayNumbers(int a[]) {
	int i;
	printf("\n\t=================================\n\n");
	printf("\tHERE IS THE CONTENTS OF THE ARRAY\n\n");
	printf("\n\t=================================\n\n");
	for (i = 0; i < SIZE; i++)
		printf("%i. contains %i\n", i + 1, a[i]);
}//end of display numbers
int displaySum(int a[]) {
	int i, total = 0;
	for (i = 0; i < SIZE; i++)
		total = total + a[i];
	printf("\n\tThe sum of the values in the array is: %i\n", total);
	return total;
}//end of display sum
void displaylowest(int a[]) {
	int i = 0;
	int min = 0;
	int max = 0;
	min = a[0];

	for (i = 1; i < SIZE; i++)
		if (a[i] > max)
		{
			max = a[i];
		}
		else if (a[i] < min)
		{
			min = a[i];
		}
	printf("Lowest value : %i\n", min);
}
void displayProduct(int a[]) {
	int i, totalP = 1;
	for (i = 0; i < SIZE; i++)
		totalP = totalP * a[i];
	printf("\n\tThe product of the values in the array is: %i\n", totalP);
};
char getChoice() {
	char choice;
	displayMenu();
	scanf("%c", &choice); FLUSH;

	return toupper(choice);
}//end getChoice
int getNumber(int a[]) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		printf("\n enter a number: ");
		scanf_s("%i", &a[i]);
		printf("the array %i has %i", i, a[i]);
	}
	return i;
}
void myFlush() {
	while (getchar() != '\n');
}
//*userChoice is the value or letter 
//userChoice is the adress of
//always pass by value unless you have to pass by reference
//void function because it's not next to a get operator
//