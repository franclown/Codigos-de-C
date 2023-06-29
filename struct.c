#include<stdio.h>
typedef struct 
 {
    int rut;
    char dv;
    char nombre[50] ;
    char apellido [20];
    int numero;
    char departamento[30];
    char deporte[30]; // deporte/s
    int edad;
    char calle[50];
 } Estudiante;
 
  void digito();
 
 main()
 {
 	Estudiante a,e[1000];
 	int i,n;
 	do
 	{
 		printf("\nIngrese nro de estudiantes (capacidad maxima 1000): ");
 		scanf("%d",&n);
	} while (n<1 || n>1000);
	for(i=0;i<n;i++)
	{	 
 		printf("\n   Ingrese Rut  : ");
		scanf("%d",&a.rut);
		fflush( stdin );
		
		printf("\n   Ingrese dv    : ");
		scanf("%c",&a.dv);
 		fflush( stdin );
 		
		printf("\n  Ingrese Nombre : ");
	    scanf("%s",&a.nombre) ;	
 		fflush( stdin );
 		
		printf("\nIngrese Apellido : ");
		scanf("%s",&a.apellido);
		fflush( stdin );
		
		printf("\n   Ingrese Edad  : ");
    	scanf("%d",&a.edad);
    	fflush( stdin );
		
		
		printf("\n Ingrese el numero : ");
   		scanf("%d",&a.numero);
   		fflush( stdin );
   		
		printf("\nIngrese el departamento: ");
	    scanf("%s",&a.departamento);
	    fflush( stdin );
	    
    	
		printf("\nIngrese el / los deporte/s que practica   : ");
	    scanf("%s",&a.deporte);
	    fflush( stdin );
	    
		e[i]=a;				
	} 
	printf("\nDatos Ingresado\n");
	printf("\n|  rut  |-|dv|  |   Nombre   |  |Edad|  | Numero | |Departamento|   | Deporte |\n");
	for(i=0;i<n;i++)
	
 	{
 	    a=e[i];
	 	printf("|%d|-|%c|  |%s %s|   |%d|     |%d|   |%s|      |%s| \n", a.rut, a.dv, a.nombre, a.apellido, a.edad, a.numero, a.departamento, a.deporte );
    
	}
	
 }
 
 
 
 /*void digito(){
 
 #include <stdio.h>



int longitud(int rut);
int calculoDigito(int rut);


int longitud(int rut)
{
    int contador = 0;
    while (rut > 0)
    {
        rut = rut / 10;
        contador++;
    }
    return contador;
}

int calculoDigito(int rut)
{
    int largo = longitud(rut), valor[largo], contador = 2, suma = 0, resta2, i, mod_f, resta;
    float mod;

    for (i = 0; i <= largo; i++)
    {
        valor[i] = rut % 10 * contador;
        contador = contador + 1;
        if (contador == 8)
        {
            contador = 2;
        }
        rut = rut / 10;
    }

    for (i = 0; i < largo; i++)
    {
        suma = suma + valor[i];
    }

    mod = suma / 11;      // Se obtiene el modulo
    mod_f = mod * 11;    // Se multiplica el modulo * 11
    resta = suma - mod_f; // Se resta la sumaatoria - el modulo
    resta2 = 11 - resta;    // Se resta 11 - la diferencia de la sumaatoria - el modulo
    return resta2;
}

int main(void)
{
    int rut, digito;
    printf("Calcular digito verificador RUT\n");
    printf("Ingrese el RUT sin digito: ");
    scanf("%d", &rut);
    digito = calculoDigito(rut);
    if (digito == 10)
    {
        printf("El digito verificador es: K\n");
        printf("El RUT completo es: %d-K\n", rut);
    }
    else
    {
        printf("El digito vertificador es: %d\n", digito);
        printf("El RUT completo es: %d-%d\n", rut, digito);
    }
    return 0;

 }
 */