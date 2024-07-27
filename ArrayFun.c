//Table of 5 using function array...................................................

/*#include <stdio.h>
void num(int a, int c[20])
{
	for(int b=1; b<=10; b++)
	{
		for(int i=1; i<=1; i++)
		{
			c[i] = a*b;
			printf("%d * %d = %d \n",a ,b, c[i]);
		}
	}
}

int main()
{
	int a = 5;
	int c[20];

	num(a,c);
	
	return 0;
}*/



//  1 2 3 4 5.....10    ......................................
//  2 4 6 8 10....20    ......................................


/*#include <stdio.h>
void fun(int k[5])
{
	for (int i=1; i<=10; i++)
	{
		for (int j=1; j<=10; j++)
		{
			k[j]= i * j;
			printf("%d \t",k[j]);
		}
			printf("\n");
	}
}
int main()
{
	int k[5];
	
	fun(k);
	
	return 0;
}*/



//Seperate int and char.....................................................

/*#include <stdio.h>
void fun(char num[5])
{
	for(int a=0; a<=9; a++)
	{
		if(num[a] >='1' && num [a] <='5')
		{
			printf("num: %c \n ",num[a]);
		}
		else
		{
			printf("Alphabet: %c \n",num[a]);
		}		
	}
}
int main()
{
	char num[10]="1a2b3c4d5e";
	fun (num);

	return 0;
}*/



//.......................................................................


#include <stdio.h>
void fun(char ch[5])
{
	for(int i=0; i<=9; i++)
	{
		printf("%c \n",ch[i]);	
	}		
}

int main()
{
	char ch[20]="Tantransh";
	fun(ch);
	
	return 0;
}
//............................................................................



 
