#include<stdio.h>
#define MAXWORDLENGTH 30
#define DEPTH 2
int word(char *pointer);
int analize(char *pointer1, char *pointer2, int cantidad1, int cantidad2);
//probando gitttttttt e_e, Y AHORA Q PASA?????
int main (void)
{
	int result;
	char wordmatrix[DEPTH][MAXWORDLENGTH];
	char *pointer1,*pointer2;
	pointer1=&wordmatrix[0][0];
	pointer2=&wordmatrix[1][0];
	result=0; //probando cosas gittt
	if(word(pointer1)>MAXWORDLENGTH)
	{
		printf("Invalid length of text\n");
		printf("The program will stop running\n");
		return 0;
	}
//asdasjdasldjasdj borre todo jajajajaja (?
	//int cantidad1=countchar(pointer1);
	//int cantidad2=countchar(pointer2);

	result=analize(pointer1, pointer2, 4, 4); // faltan cantidad1 y cantidad2
	if(result==1)
	{
		printf("Congrats, is an anagram(?)\n");
	}
	else 
	{
		 printf("SORRY, those words are not anagrams\n"  );
	}	 

	system("./ANA.out");
	return 0;
	

}

int analize(char *pointer1, char *pointer2, int cantidad1, int cantidad2)
{	char *punt;
	punt=pointer1;
	int i,x,z;
	for(i=0,z=0;i<cantidad2;pointer2++,z=0,i++)
	{punt=pointer1;

		for(x=0;x<cantidad1;x++,punt++)
		{
			if((*punt)==(*pointer2))
			{	
				*punt=0;
				z++;

			}
			
		}
		if (z==0)
			{
				return 0;
			}
			
	}
	return 1;
}

int word(char *pointer) // estamos pasandole un puntero a la funcion
{
	int i=0; // Contador para conocer la longitud del texto.
	char *pointer2;
	pointer2=pointer;
	char word = getchar();
	while (word != '\n')
	{
			*pointer2=word;
			pointer2++;
			i++;

		word = getchar();

	}	
		
	return i;
}
