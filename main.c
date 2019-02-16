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

int pedroLopez()
{

	char* nombre = "Pedro Lopez";
	int len = strlen(nombre);
	int i, r = 0;

	for(i = 0; i < len;i++)
	{
		r += nombre[i];
	}

	return r;
}
int pabloSanchez(){

	char* nombre = "Pablo Sanchez";
	int len = strlen(nombre);
	int i, r = 0;

	for(i = 0; i < len;i++)
	{
		r += nombre[i];
	}

	return r;
}

int alfredNieves()
{

	char* nombre = "Alfred Nieves";
	int len = strlen(nombre);
	int i, r = 0;

	for(i = 0; i < len;i++)
	{
		r += nombre[i];
	}

	return r;
}
int julietaRenteria()
{

	char* nombre = "Julieta Renteria\n";
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
	printf("Mi valor en ASCCI es %i \n ", omarAlvizo());
	printf("Soy pedro y Mi valor en ASCCI es %i \n ", pedroLopez());
	printf("Soy Alfred y Mi valor en ASCCI es %i \n", alfredNieves());
	printf("Soy Pablo y mi valor en ASCCI es %i\n", pabloSanchez());
	printf("Soy Julieta y mi valor en ASCCI es %i\n", julietaRenteria());
	return 0;

}
