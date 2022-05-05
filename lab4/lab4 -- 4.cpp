#include <stdio.h>

int main() {
	int n;
	printf("Sain baina uu?\n");
    printf("Sholtei ustai hool ideh uu? tiim bol 1, ugui bol 0\n");
    scanf("%d",&n);
    if(n == 1)
    {
    	printf("Tsaitai bol 1, ugui bol sholtei baih ni 0\n");
    	scanf("%d",&n);
    	if(n == 1)
    	{
    		printf("Budaatai bol 1, ugui bol banshtai baih ni 0\n");
    		scanf("%d",&n);
    		if(n == 1) 
    		   printf("Budaatai tsai\n");
    		else printf("Banshtai tsai\n");
		}
		else 
		{
			printf("Yutai shol idmeer bna ?\n");
			printf("guriltai bol 1, pvntvvztei bol 2, goimontoi bol 3, banshtai bol 4, mahtai bol 5, nogootoi bol 6\n");
			scanf("%d",&n);
			switch(n){
				case 1:
					printf("lapsha\n");
					break;
				case 2:
					printf("huitsaa\n");
					break;
				case 3:
					printf("goimontoi shol\n");
					break;
				case 4:
					printf("banshtai shol\n");
					break;
				case 5:
					printf("har shol\n");
					break;
				case 6:
					printf("nogootoi shol\n");
					break;	
			}		
		}
    	
	}
	else 
	{
	   printf("Mah ni tatsan uu?\n Tatsan bol1, ugui bol 0\n");
	   scanf("%d",&n);
	   if(n == 1)
	   {
	   	  printf("guriland orooson uu?\n Orooson bol 1, gui bol 0\n");
	   	  scanf("%d",&n);
	   	  if(n == 1)
	      {
			 
	   	     printf("Yaj bolgoson\n sharsan bol 1, jignesen bol 0\n");
	   	     scanf("%d",&n);
	   	     if(n == 1)
	   	     {
	   	  	    printf("Yaj sharsan bol\n hoolgon sharsan bol 1,shuud sharsan bol 0\n");
	   	  	    scanf("%d",&n);
	   	  	    if(n == 1)
	   	  	         printf("piroshki\n");
	   	  	    else printf("huushuur\n");
		     }
		     else
		     {
		     	printf("Yaj jignesen bol\n hoolgon jignesen bol 1,shuud jignesen bol 0\n");
	   	  	    scanf("%d",&n);
	   	  	    if(n == 1)
	   	  	         printf("Mantuun buuz\n");
	   	  	    else printf("buuz\n");
			 }
	   	
	      }
	      else
	      {
	      	printf("budaatai yu\n ondgond orooson bol 1, mahaa booronhiilson bol 0\n");
	      	scanf("%d",&n);
	      	if(n == 1)
	      	     printf("ondogtoi pipsshteks\n");
	        else printf("tepteli\n");
		  }
	    
	   }
	   else
	   {
	   	printf("Yutai holison\n guriltai bol 1, ondogtei bol 2, budaatai bol 3, nogootoi bol 4\n");
	   	scanf("%d",&n);
	   	if(n == 1)
	   	   printf("Tsuivan");
	   	else if (n == 2)
	   	     printf("ondogtei huurga");
	   	else if(n == 3)
	   	{
	   		printf("hoorond ni holih uu\n tiim bol 1, ugui bol 0\n");
	   		scanf("%d",&n);
	   		if(n == 1)
	   		   printf("guliash\n");
	   		else printf("budaatai huurga\n");
		}
		else printf("nogootoi huurga\n");
	   }	
	}
	
	return 0;	
}
