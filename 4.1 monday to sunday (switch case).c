//w.a.p to show monday to sunday using switch case.//
#include<stdio.h>
int main()
{
	int week;
	printf("enter the number");
	scanf("%d",&week);
	switch (week)
	{
	
	  case 1:
	  printf("MONDAY");
	  break;
	
	  case 2:
	  printf("TUESDAY");
	  break;
	
	  case 3:
	  printf("WEDNESDAY");
	  break;
	
	  case 4:
	  printf("THURSDAY");
	  break;
	
	  case 5:
	  printf("FRIDAY");
	  break;
	
	  case 6:
	  printf("SATURDAY");
	  break;
	
	  case 7:
	  printf("SUNDAY");
	  break;
	
	  default:
		{
			printf("ENTER THE VALID NUMBER");
		}
    }
	 return 0;
	
}
	
	
	
	
	
	
	
	
	
	

