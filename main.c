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


int EzequielDelaTorre()
{

	char* nombre = "Ezequiel De la Torre";
	int len = strlen(nombre);
	int i, r = 0;

	for(i = 0; i < len;i++)
	{
		r += nombre[i];
	}

	return r;
}

int axelCruz()
{

	char* nombre = "Axel Cruz";

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
	printf("Mi valor en ASCCI es %i\n", omarAlvizo());
	printf("Mi valor en ASCCI es %i\n", EzequielDelaTorre());
	printf("Mi valor en ASCCI es %i\n", axelCruz());

	return 0;
}
