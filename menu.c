#include<stdio.h>
#include<stdlib.h>
main()
{
	//1. display the menu
	printf("pick an item : \n1. burger\n2. peri peri fries\n3. pizza\n4. sandwich\n5. pasta"); 
	//2. read their choice
	int choice=0;
	scanf("%d",&choice);
	//3. display based on their choice
	
	switch(choice)
	{
		case 1: 
		printf("you picked burger\nRs 129\n");
		break;
		case 2:
			printf("you picked peri peri fries\nRs 99\n");
			break;
		case 3:
			printf("you picked pizza\nRs 239\n");
		break;
		case 4:
			printf("you picked sandwich\nRs 149\n");
		break;
	case 5:
	printf("you picked pasta\nRs 179\n");
	break;
	default :
	 printf("invalid choice");
	 		
				}
}
