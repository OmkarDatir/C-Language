// check whether int or char in C using Ascii
//Implementing............................................

/*#include <stdio.h>
int main()
{
	int a[5] = {99,98,97,96,95};
	
	printf("Size is %d ",a[0]);
	return 0;
	

}

//implementing.............................................

#include <stdio.h>
int main()
{										
	int a[] = {99,98,97,96,95};
	
	printf("Size is %d ",a[4]);
	return 0;
}

//Index print..............................................	

#include <stdio.h>
int main()
{
	
	int a[3];	
	    a[0] = 10;
	    a[1] = 22;
	    a[2] = 32;	
   
	printf("Size is %d",a[1]);
	return 0;
}
	

//Size of Index.............................................

#include <stdio.h>
int main()
{
	
	int a[3];
	    a[0] = 10;
	    a[1] = 22;
	    a[2] = 33;
	int b;
	for(b=0; b<3; b++)
	{
		printf("index is %d \n",a[b]);
	}
	
	return 0;

}


// Concatination of two String.......................................

#include <stdio.h>
int main()
{
	char str1[10]="New";
	char str2[10]="Book";
	int a=0,b=0;

	while(str1[a] !=0)
	{
		a++;
	}
	while(str2[b] !=0)
	{
		str1[a]=str2[b];
		b++;
		a++;
		
	}
		printf("%s \n",str1);
	return 0;
}


//Concatination of two String .........................................

#include <stdio.h>
int size(char str[38])
{
	//char str[20]="ABCDEFG";
	int count=0; 
	for(int i=0; str[i]!=0;i++)
	
		count++;
		//printf("No of char is: %d \n",count);
			return count;
};
int main()
{
	int res=size("Hello");	
	printf("no of char : %d", res);
}





//Vertical Alphabet using Array................................

#include <stdio.h>

int main()
{
	
	char ch[20]="Characteristics"; 
	char b;
	for(b=0; b<=15; b++)
	{
	printf("%c \n",b[ch]);
	}
	return 0;

}


//Vowels and Consonants......................................
	
#include <stdio.h>
int main()
{

	char str[20]="CHARACTERISTICS";
	int a;
	for(a=0; a<=14; a++)
	{
		if(str[a]=='A' || str[a]=='E' || str[a]=='I' || str[a]=='O' || str[a]=='U')
		{
			printf("%c is a Vowel **\n \n", str[a]);
		}

		else
		{
			printf("%c is a Consonant \n \n",str[a]);
		}
	}
		return 0;
}

//Seperate number and character.................................

#include <stdio.h>
int main()
{
	char num[20]="1O3M5K6A7R";
	char a;
	
	for(a=0; a<=9; a++)
	{
		
		if(num[a]=='O'|| num[a]=='M'|| num[a]=='K'|| num[a]=='A'||num[a]=='R')
		{
			printf("%c is Alphabet \n",num[a]);
		}
		else

		{
			printf("%c is Number \n",num[a]);
		}

	}
		return 0;		
}	


//Seperate number and character.................................

#include <stdio.h>
int main()
{
	char num[10]="1a2b3c4d5e";
	int a;
	for(a=0; a<=9; a++)
	{
		if(num [a] >='1' && num [a] <='5')
		{	
			printf("num: %c \n ",num[a]);
		}
		
		else
		{
			printf("Alphabet: %c \n",num[a]);
		}

	}
	return 0;
}



//.....................................................

#include <stdio.h>
int main()
{
	int num[]={1,2,3,4,5,6,7,8,9,10};
	int a=0;
	for(a=0; a<=11; a++)
	{
		if(num[a]==2)
		{
			printf("Table of 2 \n");
		}
		if(num[a]==4)
		{
			printf("Table of 4 \n");

		}
		if(num[a]==6)
		{
			printf("Table of 6 \n");

		} 
		if(num[a]==8)
		{
			printf("Table of 8 \n");

		}
		
	}
	return 0;
}*/














