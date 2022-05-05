#include <stdio.h>
#include <string.h>

int is_valid(char pwd[]);

int main() 
{
	char a[100];
	int t;
	printf("Nuuts ugiig oruul:\n");
	gets(a);
	t = is_valid(a);
	if(t == 4)
	{
		printf("aldaa dugaar : %d\n",t);
		printf("?, !, $, *, (, ), -, + temdguudiin ydaj 1 ni baih\n");
	}
	else if(t == 3)
	{
		printf("aldaa dugaar : %d\n",t);
		printf("Ydaj 3 too orson baih.\n");
	}
	else if(t == 2)
	{
		printf("aldaa dugaar : %d\n",t);
		printf("Dor hayj neg tom vseg orson baih.\n");
	}
	else if(t == 1)
	{
		printf("aldaa dugaar : %d\n",t);
		printf("urt ni ydaj 6 bna.\n");
	}
	else
	{
		printf("aldaa dugaar : %d\n",t);
		printf("Nuuts vgiin chanar shaardlagad niitsej bna.\n");
	}
	
	
}

int is_valid(char pwd[])
{
	int i, k, count = 0, too = 0, vseg = 0, temdeg = 0;
	k = strlen(pwd);
	
		for(i = 0; i < strlen(pwd); i++)
	    {
		    if(pwd[i] >= 'A' && pwd[i] <= 'Z')
		    {
		    	vseg++;	
			}
			else if(pwd[i] >= '0' && pwd[i] <= '9')
		    {
		    		too++;
			}
			else if(pwd[i] == '?' || pwd[i] == '!' || pwd[i] == '$' || pwd[i] == '*' || pwd[i] == '(' || pwd[i] == ')' || pwd[i] == '-' || pwd[i] == '+')
			{
				     temdeg++;
			}
	    }
	    
	    if(k >= 6)
	    {
	    	if(vseg >= 1)
	    	{
	    		if(too >= 3)
	    		{
	    			if(temdeg >= 1)
	    			{
	    				count = 0;
					}
					else 
					{
						count = 4;
					}
				}
				else 
				{
					count = 3;
				}
			}
			else 
			{
				count = 2;
			}
		}
		else 
		{
			count = 1;
		}
		
		return count;
}
