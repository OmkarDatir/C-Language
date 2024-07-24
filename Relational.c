//EQUAL (==)

/*#include <stdio.h>
int main()
{
	int a,b;
	a = 9;
	b = 1;
	printf("Equal Number: %d \n",a==b);
	return 0;
}*/



/*#include <stdio.h>	
int main()
{
        int X,Y;
	X = 20;
	Y = 20;
	printf("Equal Number: %d \n",X==Y);
	return 0;
}*/


// NOT EQUAL (!=)

/*#include <stdio.h>
int main()
{
	int a,b;
	a = 2;
	b = 3;
	printf("Not Equal Number: %d \n",a!=b);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a,b;
	a = 3;
	b = 3;
	printf("Not Equal Number: %d \n",a!=b);
	return 0;
}*/


// Greater Than (>)

/*#include <stdio.h>
int main()
{
	int num1;
	int num2;
	printf("Enter num1: ");
	scanf("%d",&num1);

	printf("Enter num2: ");
	scanf("%d",& num2);
	printf("True(1) or Flase(0): %d \n", num1>num2);
	return 0;
}*/


// Less Than (<)

/*#include <stdio.h>
int main()
{
	int a,b;
	a = 8;
	b = 10;
	printf("Less Number: %d \n",a<b);
	return 0;

}*/

	
//(>=)	Greater than equal to

/*#include <stdio.h>
int main()
{
	int Y,Z;
	Y = 21;
	Z = 22;
	Y = Y>=Z;
	printf("Number is: %d \n",Y);
	return 0;
}*/


//(<=) Less than equal to

/*#include <stdio.h>
int main()
{
	int O,P;
	printf("Enter first and second Number:  ");
	scanf("%d %d",&O,&P);
	
	O=O<=P;
	printf("Number is: %d \n",O);
	return 0;
}*/				

#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter value a and b: \n");
	
	scanf("%d %d",&a,&b);
	
	a=a%b;
	printf("Number is: %d \n",a);
	return 0;
}


























