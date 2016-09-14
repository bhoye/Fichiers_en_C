#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct information 
{
	int numero;
	char nom[20];
	char prenom[30];
};
struct information info;

int main()
{
	FILE *f;
	int i;
	int NA;
	
	f=fopen("INFORM.txt","a");
	printf("veuillez entrer le nbre d'enregistrement: ");
	scanf("%d",&NA);
	for(i=0;i<NA;i++)
	{
		printf("\nveuillez entrer le numero de matricule: ");
		scanf("%d",&info.numero);
		printf("\nveuillez entrer le nom: ");
		scanf("%s",info.nom);
		printf("\nveuillez entrer le prenom: ");
		scanf("%s",info.prenom);
		fprintf(f,"%d %s %s \n",info.numero,info.nom,info.prenom);
	}
	
	getch();
}
