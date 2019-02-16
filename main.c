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

int ivanOrozco(){

	char* nombre = "Ivan Orozco";
	int len = strlen(nombre);
	int i, r = 0;

	for(i = 0; i < len;i++)
	{
		r += nombre[i];
	}
}

int andreaDenise()
{

	char* nombre = "Andrea Denise";
	int len = strlen(nombre);
	int i, r = 0;

	for(i = 0; i < len;i++)
	{
		r += nombre[i];
	}

	return r;
}

int main()
{
	printf("Mi valor en ASCCI es %i", omarAlvizo());
	printf("Mi valor en ASCCI es %i", ivanOrozco());
	printf("Mi valor en ASCCI es %i", andreaDenise());
	return 0;
}
