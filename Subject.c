// Write program to Addition of 5 subject and Calculate Average

/*#include <stdio.h>
int main()
{

	float Sub1,Sub2,Sub3,Sub4,Sub5;
        float Average;

  
        printf("Enter marks Sub1: ");
        scanf("%f", &Sub1);

        printf("Enter marks Sub2: ");
        scanf("%f", &Sub2);

        printf("Enter marks Sub3: ");
        scanf("%f", &Sub3);

        printf("Enter marks Sub4: ");
        scanf("%f", &Sub4);

        printf("Enter marks Sub5: ");
        scanf("%f", &Sub5);

	Sub1 = Sub1 + Sub2 + Sub3 + Sub4 + Sub5;

	Average = Sub1/5;
	
	printf("Sum of all Marks: %f \n",Sub1);
	printf("Average is: %f \n",Average);

	return 0;
}*/

#include <stdio.h>
int main()
{

	float Sub1,Sub2,Sub3,Sub4,Sub5;
        float Percentage;

	printf("Enter Marks Sub1,Sub2,Sub3,Sub4,Sub5: ");
	scanf("%f %f %f %f %f",&Sub1,&Sub2,&Sub3,&Sub4,&Sub5);
	
	Sub1 = Sub1 + Sub2 + Sub3 + Sub4 + Sub5;

	Percentage = Sub1/500;
	
	printf("Sum of all Marks: %f \n",Sub1);
	printf("Percentage is: %f \n",Percentage);

	return 0;
}








	
