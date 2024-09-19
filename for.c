// Table of 5 (5*1=5)............................

/*#include <stdio.h>
int main()
{	
	int a=5;
	int b=1;
	
	for(b=1; b<=10; b++)
	{
		printf("%d * %d = %d \n",a,b,a*b);
	}	
	return 0;
}


// Table of 3 (3,6,9...)...........................

#include <stdio.h>
int main()
{	
	int a=3;
	int b=1;
	
	for(b=1; b<=10; b++)
	{
		printf("%d \n",a*b);
	}	
	return 0;
}
 

// same code but logic different(2nd code).............................

#include <stdio.h>
int main()
{

	int a=3;
	int b=1;
	int product;
	
	for(b=1; b<=10; b++)
	{
	     product=a*b;
	     printf("%d \n",product);
	}
	return 0;
}

// While loop***************************************************

#include <stdio.h>
int main()
{
	int a=13;
	int b=1;
	int product;
	
	  while(b<=10)
	  {
	    product=a*b;
	    printf("%d \n",product);
	    b++;
	  }
	  return 0;
}

//While loop.............................................................

#include <stdio.h>
int main()
{
	int a=15;
	int b=1;

	while(b<=10)
	{
	  printf("%d*%d=%d \n",a,b,a*b);
	  ++b;
	}
	return 0;
}
	
	

// do while********************************************************

#include <stdio.h>
int main()
{
	int x=1,y=3;
	do
	{
	printf("%d * %d = %d\n",x,y,x*y);
	++x;
	}
	
	while(x<=10);
	return 0;
}

//same code but logic different............................................

#include <stdio.h>
int main()
{
	int a=12;
	int b=1;
	int product;
	do
	  {
	     product=a*b;
	     printf("%d \n",product);
	     ++b;
	  }
	 
	  while(b<=10);
	  return 0;
}
	

// star using for,while,do while************************************************


#include <stdio.h>
int main()
{
	int row;
	int colm;
	
	for(row=1; row<=5; row++)
	{
	for(colm=1; colm<=row; colm++)
	{
		printf("*");
	}
		printf("\n");
	}
	return 0;
}

// do while..........................................................	

#include <stdio.h>
int main()
{
    int row = 1;
    int colm;

    do {
        colm = 1;
    do {
        printf("*");
        colm++;
       } 

    while (colm <= row);
	
        printf("\n");
        row++;

    } 
    while (row <= 5);

    return 0;
}



#include <stdio.h>
int main()
{
    int row=1;
    int colm;

    while (row<=5)
    {
        int colm=1;
        while (colm<=row)
        {
            printf("*");
            colm++;
        }
        
        printf("\n");
        row++;
    }
    
    return 0;
}*/

//..................................................................

/*#include <stdio.h>
int main()
{
	int row,colm;
	int a = 5;
	
	for(row=0;row<a;row++)
	{
	for(colm=0;colm<a-row;colm++)
	{
		printf("*");
	}
		printf("\n");
	}
	return 0;
}



#include <stdio.h>
int main() 
{
    int row = 0, colm;
    int a = 5;
    
    while (row < a) 
    {
        colm = 0;
    while (colm < a - row)
    {
            printf("*");
            colm++;
    }
        printf("\n");
        row++;
    }

    
    return 0;
}
	

#include <stdio.h>
int main()
{
	int row,colm,sp;
	for(row=1;row<=5;row++)
	{
	for(sp=row;sp<5;sp++)
	{
	     printf(" ");
	}
	     printf("*");

	for(colm=1;colm<=(2*row-1);colm++)
	{
	     printf(" ");
	}
	for(sp=0;sp<=0;sp++)
	{
	     printf("*");
	}
	     printf("\n");
	}
	for(row=1;row<=6;row++)
	{
	     printf(" *");
	}	
	return 0;
}*/


	
#include <stdio.h>
int main()
{
    	int row, col, space;
   
        for (row = 1; row <= 5; row++)
	{
        for (space = row; space < 5; space++)
        {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++)
	{
            printf("*");
        }
        printf("\n");
        }
        return 0;
}















                                                                                                                                                           
	


