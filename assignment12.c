#include<stdio.h>
int main()
{
        int i,j,num,count;
        printf("enter the number\n");
        scanf("%d",&num);

        if( num > 0)
        {
		int arr[num];

		for(i=0;i<num-2;i++)
		{
			scanf("%d ",&arr[i]);
		}
		 printf("arr[%d] = { ",num);

		for(i=0;i<num-2;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("} \n");
		
		printf("arr[%d] = { 2 ",num);
	
		for(i=1;i<=num-2;i++)
		{
			if(arr[i] % arr[0] == 0)
			{
				arr[i] = 0;
					
			}
			else
				printf("%d ",arr[i]);

		
		}
		printf("} \n");
		printf("arr[%d] = { 2 3 ",num);
		for(i=2;i<num-2;i++)
		{
			if(arr[i] % arr[1] == 0)
                        {
                                arr[i] = 0;

                        }
                        else
                                printf("%d ",arr[i]);

                }
                printf("} \n");
		 printf("arr[%d] = { 2 3 5 ",num);
                for(i=4;i<num-2;i++)
                {
                        if(arr[i] % arr[3] == 0)
                        {
                                arr[i] = 0;

                        }
                        else
                                printf("%d ",arr[i]);

                }
                printf("} \n");


        }
        else
                printf("please enter a positive number which is >1");
        printf("\n");

        return 0;
}

