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

	return r;
}

int anaGonzalez()
{

	char* nombre = "Ana Gonzalez";
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

int leslieMorales()
{

	char* nombre = "Leslie Morales";
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
	printf("Mi valor en ASCCI es %i \n", omarAlvizo());
	printf("Mi valor en ASCCI es %i \n", ivanOrozco());
	printf("Mi valor en ASCCI es %i \n", andreaDenise());

	printf("Mi valor en ASCCI es %i \n", anaGonzalez());

	printf("Mi valor en ASCCI es %i\n", leslieMorales());
	return 0;
}