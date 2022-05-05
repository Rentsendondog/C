#include <stdio.h>
#include <string.h>

int main() {
	char ovog[20], ner[20], color[10], hobbi[20], freetime[20];
	int year, month, day, nas;
	
	printf("Tanii ovog?\n");
	gets(ovog);
	printf("Tanii ner?\n");
	gets(ner);
	printf("Tanii torson on sar odor?\n");
	printf("Torson on------");
	scanf("%d",&year);
	printf("Torson sar-----");
	scanf("%d",&month);
	printf("Torson odor----");
	scanf("%d",&day);
	getchar();
	printf("Durtai ongo?\n");
	gets(color);
	printf("Hobbi yu ve?\n");
	gets(hobbi);
	printf("Choloot tsagaaraa yu hiideg ve?\n");
	gets(freetime);
	
	nas = 2022 - year;
	
	printf("%s ovogtoi %s ni %d onii %d sariin %d nii odor torson.Odoo %d nastai.Tvvnii durtai ongo bol %s .Ter choloot tsagaaraa %s hiideg.Tvvnii hobbi bol %s.",ovog,ner,year,month,day,nas,color,freetime,hobbi);
}
