#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int Id;
	char name[30];
	int rollno;
}s;

int main()
{
	char name;
	int i=0, rollno,Id;
	char choice; char ch;
	typedef struct Student emp;
	emp s[50];

		while(1)
		{
			printf("\nCRUD operations menu: \n");

			printf("1. Insert Student Info \n");
	        	printf("2. Display Student Info \n");
			printf("3. Update Student Info \n");
			printf("4. Delete Student Info \n");	
			

			printf("Enter your choice: ");
			scanf("%d", &choice);
			
			printf("\n");

			switch(choice)
			      {
				case 1:
					printf("Enter Unique Id: ");
					if (scanf("%d", &s[i].Id) != 1)
					{
            					printf("Invalid input...Please enter an integer \n");
						exit(10);
                			}

					printf("Enter student Name: ");
					scanf("%s", &s[i].name);
										
					printf("Enter student Roll No: ");
					if(scanf("%d", &s[i].rollno) != 1)
					{
						printf("Invalid input...Please enter an integer \n");
						exit(10);
					}
					i++;
					break;

				case 2: 	
					for(int j=0; j<i; j++)
					{
						printf("Unique Id: %d \n",s[j].Id);
						printf("Student Name: %s \n",s[j].name);
						printf("Roll No: %d \n",s[j].rollno);
						printf("\n");
					}
						break;
						
				case 3:
    					printf("Enter Id which you want UPDATE: ");
					int a,j;
    					scanf("%d", &a);

    					for(j=0; j<i; j++)
					{
        					if(s[j].Id == a)
						{
            						printf("Update Name: ");
            						scanf("%s", &s[j].name);

           						printf("Update Roll No: ");
            						scanf("%d", &s[j].rollno);
            
            						printf("Student information updated successfully.\n");
						}		
					}
							break;				
				case 4:
					printf("Enter Id which you want DELETE: ");
					int b;
    					scanf("%d", &b);

    					for(int j=0; j<i; j++)
					{
        					if(s[j].Id == b)
						{
							for (int k=0; k<i-1;k++)
							{
                           
                       					}
                       					i--;
            
							printf("Student information Deleted successfully.\n");
           						break;
						}
					}
			      }

		}	
	return 0;
}

                       





      