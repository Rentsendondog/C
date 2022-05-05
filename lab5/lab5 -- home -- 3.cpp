#include <stdio.h>

int main() 
{
	int n, odor, i, ehnii_mor = 1;
	printf("ehleh odoroo oruulna uu:\n"); // 3 sar 31 honogtoi  ehleh odor = 2
	scanf("%d",&n);                                        
	printf("\n\n");
	printf("-------------------March------------------\n\n");
	printf(" Mon | Tue | Wed | Thu | Fri | Sat | Sun\n");
	for(odor = 1; odor <= 31; odor++)
	{
		if(ehnii_mor)
		{
			if(n > odor)     // ehleliin odor > odor
			{
				printf("      ");
			}
			else 
			{
				printf("   1  ");
				odor = 1;
				// ehnii mor gsen nohtsol ruu ahij orohgui  
				ehnii_mor = 0;
				i = n;
			}
		}
		else
		{
		
			if(i == 7)
			{
				i = 1;
				printf("\n");
			}
			else 
			{
				i++;
			}
			if(odor < 10)
			   printf(" ");
			if(odor == 8)
			{
				printf(" $%d  ",odor);
			}
			else if(odor == 18)
			        printf(" #%d  ",odor);
			else if(odor % 7 == 7 - n || odor % 7 == 8 - n)
			{
				printf(" *%d  ",odor);
			}
			else
			{
				printf("  %d  ",odor);
			}
			
		}
	}
	printf("\n\n");
	printf("Tailbar: * - Amraltiin odor\n");
	printf("Tailbar: $ - Olon ulsin emegteichuudiin erhiig hamgaalah odor\n");
	printf("Tailbar: # - Er tsergiin bayr\n");
	
	return 0;
}
