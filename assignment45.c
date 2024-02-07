#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
int main()
{
    int choice,option,index;
    int pos[5];
    int c_flag=0,f_flag=0,s_flag=0,i_flag=0,d_flag=0;
    void *ptr;
    ptr=malloc(8*sizeof(char));					//allocating memory
    while(1)
    {
	    printf("Menu:\n1. Add elements\n2. Remove elements\n3. Display element\n4. Exit from the program\nChoice ---> ");
	    scanf("%d",&choice);					//loop to select option
	    switch(choice)
	    {
	        case 1 :						//to add element
		    {
		        printf("Enter the type you have to insert:\n1.int\n2.char\n3.short\n4.float\n5.double\nChoice --->");
		        scanf("%d",&option);
		        switch(option)
		        {
			        case 1:					//to store int element
			            if(i_flag ==0 && f_flag ==0 && d_flag ==0)
			            {
				            i_flag++;
				            printf("Enter the int: ");
				            scanf("%d",((int*)ptr)+1);
			            }
			            else
				            printf("Memory is occupied\n");
			        break;
			case 2:					//to store char element
			    if(c_flag < 2 && d_flag ==0)
			    {
				    //c_flag++;
				    printf("Enter the char: ");
			    	__fpurge(stdin);
			    	scanf("%c",(((char*)ptr)+ c_flag));
			    	c_flag++;
			    }
			    else
				    printf("Memory is occupied\n");
			    break;
			case 3:
			    if(s_flag ==0 && d_flag ==0)	//to store short element
			    {
				    s_flag++;
				    printf("Enter the short: ");
				    scanf("%hd",((short*)ptr)+1);
			    }
			    else
				    printf("Memory is occupied\n");
			    break;
			case 4:
			    if(i_flag ==0 && f_flag ==0 && d_flag ==0)	//to store float element
			    {
				    f_flag++;
				    printf("Enter the float: ");
				    scanf("%f",((float*)ptr)+1);
			    }
			    else
				    printf("Memory is occupied");
			    break;
			case 5:
			    if(c_flag ==0 && i_flag==0 && s_flag==0 && f_flag==0 && d_flag==0)  //to store double element
			    {
				    d_flag++;
				    printf("Enter the double: ");
				    scanf("%lf",((double*)ptr));
			    }
			    else
				    printf("Memory is occupied");
			    break;
			default:
			    printf("Invalid option");
		    }
		    break;
		}
	    case 2:					//to print element
		{
		    index=0;
		    if(c_flag > 0)
		    {
			    printf("%d -> %c\n",index,*((char*)ptr));
			    pos[index++]=1;
			    if(c_flag > 1)
			    {
			        printf("%d -> %c\n",index,*(((char*)ptr)+1));
			        pos[index++]=1;
			    }
		    }
		    if(s_flag ==1)
		    {
			    printf("%d -> %hd\n",index,*(((short*)ptr) +1));
			    pos[index++]=2;
		    }
		    if(i_flag ==1)
		    {
			    printf("%d -> %d\n",index,*(((int*)ptr)+1));
			    pos[index++]=3;
		    }
		    if(f_flag ==1)
		    {
			    printf("%d -> %f\n",index,*(((float*)ptr)+1));
			    pos[index++]=4;
		    }
		    if(d_flag==1)
		    {
			    printf("%d -> %lf\n",index,*(((double*)ptr)+1));
			    pos[index++]=5;
		    }
		    printf("Enter the index value to be deleted : ");
		    scanf("%d",&index);

		    switch(pos[index])					//to delete element
		    {
			    case 1:
			        if(c_flag > 0)
			        {
				        if(index ==0)
				        {
				            *((char*)ptr) = *(((char*)ptr)+1);
				            c_flag--;
				        }
				        if(index ==1)
				        {
				            c_flag--;
			        	}
				        printf("Index %d is successfully deleted\n",index);
			         }
			         else
				     printf("Already deleted\n");
			        break;
			    case 2:
			        if(s_flag ==1)
			        {
				        s_flag--;
				        printf("Index %d is successfully deleted\n",index);
			        }
			        else
				        printf("Already deleted\n");
			        break;
			    case 3:
			        if(i_flag ==1)
			        {
				        i_flag--;
				        printf("Index %d is successfully deleted\n",index);
			        }
			        else
				    printf("Already deleted\n");
			        break;
			    case 4:
			        if(f_flag==1)
			        {
				        f_flag--;
				        printf("Index %d is successfully deleted\n",index);
			        }
			        else
				        printf("Already deleted\n");
			        break;
			    case 5:
			        if(d_flag ==1)
			        {
				        d_flag--;
				        printf("Index %d is successfully deleted\n",index);
			        }
			        else
				        printf("Already deleted\n");
			        break;
			    default:
			        printf("Invalid option\n");
		        }
		        break;
		    }
	   case 3:					//displaying element
		    {
		        index=0;
		        printf("\n");
		        if(c_flag >0)
		        {
			        printf("\n%d -> %c\t(char)\n",index++,*((char*)ptr));
			        if(c_flag > 1)
			             printf("%d -> %c\t(char)\n", index++,*(((char*)ptr)+1));
		        }
		        if(s_flag ==1)
			        printf("%d -> %hd\t(short)\n",index++,*(((short*)ptr)+1));
		        if(i_flag==1)
			        printf("%d -> %d\t(int)\n",index++,*(((int*)ptr)+1));
		        if(f_flag==1)
			        printf("%d -> %f\t(float)\n",index++,*(((float*)ptr)+1));
		        if(d_flag==1)
			        printf("%d -> %lf\t(double)\n",index++,*(((double*)ptr)+1));
		        if(c_flag ==0 && s_flag ==0 && i_flag ==0 && f_flag==0 && d_flag ==0)
			        printf("Nothing available all indexes are empty\n");
		    break;
		    }
	    case 4:						//to exit the program
		    free(ptr);
		    ptr=NULL;
	    	exit(1);
		    break;
	        default :
		    printf("Invalid option\n");
	    }
    }
}

