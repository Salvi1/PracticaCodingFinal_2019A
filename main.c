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
int kalebJimenez()
{
	char* nombre = "Kaleb Jimenez";
	int len = strlen(nombre);
	int i, k = 0;
	for(i = 0;i < len; i++)
	{
		k += nombre[i];
	}
	return k;
}

int main()
{
	printf("Mi valor en ASCCI es %i\n", omarAlvizo());
	printf("Soy Kaleb y mi valor en ASCII es %i\n", kalebJimenez());
	return 0;
}
