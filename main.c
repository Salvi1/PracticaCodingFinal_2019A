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

	for(i = 0; 1 < len; i++)
	{	
		r += nombre[i];	
	}
	
	return r;
}


int main()
{
	printf("Mi valor en ASCCI es %i", omarAlvizo());
	printf("Mi valor en ASCCI es %i", brianGonzalez());
	return 0;
}
