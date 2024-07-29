//WAP to convert lowercase (a) to Uppercase (A)...............................

/*#include <stdio.h>
int main()
{
	char lowercase = 'a';
	char uppercase;

	uppercase = lowercase - 32;

	printf("Uppercase : %c\n", uppercase);
	return 0;
}



//WAP to convert Uppercase (A) to lowercase (a)...............................

#include <stdio.h>
int main()
{
	char uppercase ='A';
	char lowercase;
	
	lowercase = uppercase - 32;
	
	printf("lowercase:  %c\n",lowercase);
	return 0;
}


//WAP to check enter value is special symbol or not .....................

#include <stdio.h>
int main()
{
	char ch;
	
	printf("Your choice enter Alphabet,Number,Symbol: ");
	scanf("%c",&ch);
	
	if((ch >='a' && ch <='z') || (ch >='A' && ch <='Z'))
	{
		printf("It is a CHARACTER");
	}

		else if(ch >='0' && ch <='9')
		{
			printf("It is a DIGIT");
		}	

			else
			{
				printf("It is a special SYMBOL");
			}
			return 0;
}


//lowercase string convert into UPPERCASE string.......................................

#include <stdio.h>
int main()
{
	char str[7]="nagpur";
	
	for(int i=0; str[i] !='\0'; i++)
	{
		if(str[i]>='a' && str[i] <='z')
		{
		str[i]=str[i] - 32;
		}
		
	}
		printf("%s \n",str);
		return 0;
}

//...........................................................................



 


















