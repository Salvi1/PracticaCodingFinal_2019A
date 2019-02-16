#include<stdio.h>
#include<string.h>
int omarAlvizo()
{

	char* nombre = "Omar Alvizo";
	int len = strlen(nombre);
	int i, r = 0;

	for(i = 0; i < len;i++)
	{
		r += nombre[i];
	}

	return r;
}

int brianGonzalez()
{
	char* nombre = "Brian Gonzalez";
	int len = strlen(nombre);
	int i, r = 0;

	for(i = 0; i < len; i++)
	{	
		r += nombre[i];	
	}
	
	return r;
}

int diegoBecerra()
{

	char* nombre1 = "Diego Becerra";
	int len1 = strlen(nombre1);
	int i1, r1 = 0;

	for(i1 = 0; i1 < len1;i1++)
	{
		r1 += nombre1[i1];
	}

	return r1;
}


int main()
{
	printf("Mi valor en ASCCI es %i", omarAlvizo());
	printf("Mi valor en ASCCI es %i", brianGonzalez());
	printf("\nMi valor en ASCCI es %i", diegoBecerra());
	return 0;
}
