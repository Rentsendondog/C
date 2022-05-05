#include <stdio.h>
#include <string.h>

char user[100];
char pass[100];
int check(char u[], char p[])
{
	int t;
	if(strcmp(u, user) == 0 && strcmp(p, pass) == 0)
	{
		     t = 1;
	}
	else t = 0;

    return t;	
}

int main() 
{
    char name[4][100] ={"bat","dorj","bold","tsetsgee"};
    char key[4][100] = {"123456","password","pass247","justinbeaber"};
    int i, k, p = 0;
    printf("Nevtreh ner:\n");
    gets(user);
    printf("Password:\n");
    gets(pass);
    for(i = 0; i < 4; i++)
    {
    	if(strcmp(name[i], user) == 0)
    	{
    		p++;
    		k = check(name[i], key[i]);
    		if(k == 1)
    		{
    			printf("Nevtreh ner, Nuuts vg taarj bna.\n");
			}
			else 
			{
				printf("Nevtreh ner, Nuuts vg taarahgui bna\n");
			}
		}
	}
	if(p == 0)
	{
		printf("Newtreh ner oldohgui bna.\n");
	}
		
}
