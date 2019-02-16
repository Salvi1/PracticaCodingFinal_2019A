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

int juanSalazar()
{

	char* nombre_j = "Juan Salazar";
	int len_j = strlen(nombre_j);
	int i_j, r_j = 0;

	for(i_j = 0; i_j < len_j;i_j++)
	{
		r_j += nombre_j[i_j];
	}

	return r_j;
}

int main()
{
	printf("Mi valor en ASCCI es %i", omarAlvizo());
	printf("\nMi valor en ASCCI es %i",juanSalazar());
	return 0;
}
