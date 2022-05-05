#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	char s2[100][100];
	int i, k, j, p, max, dugaar, a;
	printf("Oguulberiig og:\n");
	gets(s);
	for(i = 0; i < strlen(s); i++)
	{
		if(s[i] == ' '|| s[i] == '\0')
		{
			k++;
			j = 0;
		}
		else
		{
			s2[k][j] = s[i];
			j++;
		}
	}
	max = 0;
	for(i = 0; i <= k; i++)
	{
		p = 0;
		for(j = 0; j < strlen(s2[i]);j++)
		{
				if(s2[i][j] == 'A' || s2[i][j] == 'E' || s2[i][j] == 'U' || s2[i][j] == 'I' || s2[i][j] == 'O' || s2[i][j] == 'a' || s2[i][j] == 'e' || s2[i][j] == 'u' || s2[i][j] == 'i' || s2[i][j] == 'o')
    	        {
    	        	p++;
				}     
		    
		}
		if(max < p)
		{
		 	   max = p;
		 	   dugaar = i;  // 1 ees helej toolno
	    }
	}
	
	printf("ih ugiin too : %d\ndugaar : %d dah ug %s",max,dugaar,s2[dugaar]);
}
