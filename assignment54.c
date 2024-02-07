#include<stdio.h>
#include <string.h>
#include<stdlib.h>
//int my_strcmp(char *str1, char *str2);   //function definition
//char grade(float avg);      //function definition

struct student          //creating structure
{
    int roll_num;
    char name[50];
    int *mark;
    char grade;
    float avg;
};
int main()
{
    char ch1, ch2;
    int no_of_students = 0, no_of_subjects = 0;
    char (*str)[30];
    int option, choice;
    float sum = 0, avg = 0;
    printf("Enter number of students : ");			//reading the no. of students
    scanf("%d", &no_of_students);
    printf("Enter number of subjects : ");			//readiing no. of subjects
    scanf("%d", &no_of_subjects);
    str = malloc (sizeof(*str) * no_of_subjects);		//allocating memory 
    struct student S[no_of_students];
    for (int i = 0; i < no_of_subjects; i++)			// loop to read the subject names
    {
	    printf("Enter name of the Subject %d : ", i + 1 );
	    scanf("%s", str[i]);  // read subject name
    }
    for (int i = 0; i < no_of_students; i++)			//loop to read the student details
    {
	    printf("-------------------------Enter students details--------------------\n");
	    printf("Enter the student %d Roll Number : ", i + 1);
	    scanf("%d", &S[i].roll_num);   // Read roll num from user
	    printf("Enter the student %d name : ", i + 1);
	    //getchar();

	    scanf("%s",S[i].name);        // Read name from user
    	// Memory allocation to store mark for each student
    	S[i].mark = ( int * )malloc ( sizeof(int) * no_of_subjects);
    	for (int j = 0; j < no_of_subjects; j++)
	    {
	        printf("Enter the %s mark : ", str[j]);
	        scanf("%d", &S[i].mark[j]);   // read mark from user
	    }
	    sum = 0;
	    for (int j = 0; j < no_of_subjects; j++)		//loop to add all marks and store it in sum variable
	    {
	        sum=sum+S[i].mark[j];
	    }

	    S[i].avg=(float)sum/no_of_subjects;			//taking average of marks

	    if (S[i].avg >= 90 )					//conditions to check grade
	    {
	        S[i].grade='A';
	    }
	    else if (S[i].avg >= 80 && S[i].avg < 90)
	    {      
	        S[i].grade='B';
	    }
	    else if (S[i].avg >= 70 && S[i].avg < 80)
	    {
	        S[i].grade='C';
    	}
    	else if (S[i].avg >= 60 && S[i].avg < 70)
    	{
	        S[i].grade='D';
    	}
    	else if (S[i].avg >= 50 && S[i].avg < 60)
	    {
	        S[i].grade='E';
	    }
    	else
    	{
	        S[i].grade='F';
	    }

    }
    do							//loop to display menu
    {
	    printf("-----------------------DISPLAY MENU-----------------------------\n");
	    printf("1. All Student Details\n2. Particular Student Details\nEnter your choice : ");
	    scanf("%d", &option);
	    switch (option)					//case to display all student details or particular student details
	    {
	        case 1 :
		        {
		            printf("Menu for All Student Details\n");
		            printf("Roll no\t\tName\t\t");
		            for(int j = 0; j < no_of_subjects; j++)		
		            {
			            printf("%s\t\t", str[j]);  // printing subjects
		            }
		            printf("Average\t\tGrade\n");
		            for (int i = 0; i < no_of_students; i++)
		            {
			            printf("%d\t\t%s\t\t", S[i].roll_num, S[i].name);   // display roll num and name

			            for (int j = 0; j < no_of_subjects; j++)
			            {
			                printf("%d\t\t", S[i].mark[j]);   // display mark of each subject
			            }
		        	    printf("%g\t\t%c\n", S[i].avg, S[i].grade);  // display avg and grade
		             }
		            break;
		        }
	        case 2 :
		        {
		            printf("-----------------------Menu for particular student--------------------\n");
		            printf("1. Name\n2. Roll no\nEnter your choice: ");
		            scanf("%d",&choice);
		            if (choice == 1)
		            {
			            char student_name[40];
			            // Prompt to read name of the student to display the detail of that particular student
			            printf("Enter name of the student : ");
			            scanf("%s",student_name);
			            sum = 0;
			            avg = 0;
			            int count = 0;
			            for (int i=0; i < no_of_students; i++)
			            {
			                if ( strcmp(student_name, S[i].name) == 0)   // function call to compare names
			                {
				                count++;
				                printf("Roll No\t\tName\t\t\t");
				                for(int j = 0; j < no_of_subjects; j++)
				                {
				                    printf("%s\t\t", str[j]);
				                }   
			                	printf("Average\t\tGrade\n");
			                	printf("%d\t\t%s\t\t",S[i].roll_num, S[i].name);
				                for(int j = 0; j < no_of_subjects; j++)
				                {
				                    printf("%d\t\t",S[i].mark[j] );
				                }
				                printf("%g\t\t%c\n",S[i].avg,S[i].grade);
			                }
			            }
			            if (count == 0)
			            {
			                printf("%s student detail is not available\n", student_name);
			            }
		            }
		            else if ( choice == 2)
		            {
			            int number;
			            sum = 0;
			            avg = 0;                                 
			            printf("Enter the Student Roll Number : ");
			            scanf("%d",&number);
			            for (int i=0; i < no_of_students; i++)
			            {
			                if ( number == S[i].roll_num )  // comparing roll number
			                {
				                printf("Roll No\t\tName\t\t\t");
				                for(int j=0; j < no_of_subjects; j++)
				                {
				                    printf("%s\t\t", str[j]);
				                }
				                printf("Average\t\tGrade\n");
				                printf("%d\t\t%s\t\t",S[i].roll_num, S[i].name);
				                for(int j=0; j < no_of_subjects; j++)
				                {
				                    printf("%d\t\t",S[i].mark[j] );
				                }

				                printf("%g\t\t%c\n",S[i].avg,S[i].grade);
			                }

			            }
		            }
		            else if (choice != 1 && choice != 2)
		            {
			            printf("Enter valid option\n");
		            }
		            break;
		        }
	        default :
		    printf("Error : Invalid choice \n");
		    break;

	    }
	printf("Do you want to continue to display(y/Y) : "); // asks permisssion from user to repeat the operation
	scanf(" %c",&ch2);
    }while(ch2 == 'Y' || ch2 == 'y');   
    free(str);						
    str = NULL;
    return 0;
}

