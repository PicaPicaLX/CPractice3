#include <stdio.h>
void SimpleMtehod()
{
	printf("#--------Simple Method--------#\n");
	int iInt1, iInt2;
	puts("Please enter two numbers: ");
	scanf_s("%d%d", &iInt1, &iInt2);
	printf("The first is: %d\n", iInt1);
	printf("The second is: %d\n", iInt2);
}

void ComplexMethod()
{
	printf("#--------Complex Method--------#\n");
	long iLong;
	short iShort;
	int iNumber1 = 1;
	int iNumber2 = 2;
	char cChar[10];

	printf("Enter the long integer\n");
	scanf_s("%ld", &iLong);

	printf("Enter the short integer\n");
	scanf_s("%hd", &iShort); /*%h表示短*/

	printf("Enter the number: \n");
	scanf_s("%d*%d", &iNumber1, &iNumber2);

	printf("Enter the string but only show three character: \n");
	scanf_s("%3s", cChar,10);

	printf("The long interger is: %ld\n", iLong);
	printf("The short interger is: %hd\n", iShort);
	printf("The Number1 is: %d\n", iNumber1);
	printf("The Number2 is: %d\n", iNumber2);
	printf("The three character are: %s\n", cChar);
}

void CircleArea()
{
	float Pie = 3.14f;

	float fArea;
	float fRadius;

	puts("Enter the radius: ");
	scanf_s("%f", &fRadius);
	fArea = fRadius * fRadius*Pie;
	printf("The area is: %.2f\n", fArea); /*表示取2位小数*/
}

void TransForm()
{

}