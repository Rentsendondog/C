#include <stdio.h>
#include <string.h>


// ----------online editor deer ajillaj bgaa !!!------------------
// ----------bagshaas asuuna ??-----------------------------------
// ----------const char, char ylgaatai----------------------------
struct Student {
char fname[20], lname[20], id[10];
float golch;
};
void read(struct Student *s)
{
    printf("Ner:    ");
	scanf("%s",s->fname);
    printf("\nOvog:   ");
    scanf("%s",s->lname);
    printf("\nId:     ");
    scanf("%s",s->id);
    printf("\nGolch:  ");
	scanf("%f",&s->golch); 
	printf("\n");
}
// oyutnii medeelel hewlex funkts
void print(struct Student *s)
{
    printf("\n\nNer:    %s\n",s->fname);
    printf("Ovog:   %s\n",s->lname);
    printf("Id:     %s\n",s->id);
    printf("Golch:  %.2f\n",s->golch); 
}

void set_fname( struct Student *p, const char ner[]);
void set_lname( struct Student *p, const char ovog[]);
void set_id( struct Student *p, const char id[]);
void set_golch( struct Student *p, float golch);
int main ()
{
    struct Student bat, t;
    read(&bat);
    print(&bat);
    set_fname(&t,"dorj");
    set_lname(&t,"bold");
    set_id(&t,"1324");
    set_golch(&t, 3);
    print(&t);
    return 0;
}

// Neriin oorchildog funkts
void set_fname( struct Student *p, const char ner[])
{
    int i;
    for(i = 0; ner[i] != '\0'; ++i)
        p->fname[i] = ner[i];
        
    p->fname[i] = '\0';
}
// Ovgiin oorchloh
void set_lname( struct Student *p, const char ovog[])
{
    int i;
    for(i = 0; ovog[i] != '\0'; ++i)
        p->lname[i] = ovog[i];
        
    p->lname[i] = '\0';
}

//Id giin oorchloh
void set_id( struct Student *p, const char id[])
{
    int i;
    for(i = 0; id[i] != '\0'; ++i)
        p->id[i] = id[i];
        
    p->id[i] = '\0';
}
// golchiin solih
void set_golch( struct Student *p, float golch)
{
    p->golch = golch;
}

