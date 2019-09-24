#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define n 3
typedef char string  [20];

struct nodo{
	string nombre_e;
	string nomb_cientifico;
	string reino;
	int cantidad_ejemplares;
	nodo *sig;
	
};
typedef struct nodo *puntero;

 struct pais{
	string nombre_p;
	string continente;
	
	nodo *cabeza;
	
};

void carga_especies(puntero &p)
{
	puntero nuevo;
	nuevo=(puntero)malloc(sizeof(struct nodo));
 	printf("Ingrese el nombre de la especie, Presione 'FIN' para salir: \n");	
	gets(nuevo->nombre_e);

	if((strcmp(nuevo->nombre_e,"fin")!=0))
	{
		//if(j<)  //preguntar si la cabeza es null
		
		printf("Ingrese el Nombre cientifico: \n");
		gets(nuevo->nomb_cientifico);
		printf("Ingrese el reino : \n");
		gets(nuevo->reino);
		printf("Ingrese la cantidad de ejemplares de esta especie: \n");
		scanf("%d",&nuevo->cantidad_ejemplares);
		nuevo->sig=p;
		p=nuevo;
		printf("Ingrese el nombre de la especie, Presione 'FIN' para salir: \n");	
	gets(nuevo->nombre_e);
		carga_especies(nuevo->sig);
	}

}

void precarga(pais pa[n])
{
for(int i=0;i<n;i++)
	{
		printf("igrese el nombre del pais: \n");
		gets(pa[i].nombre_p);
		printf("Ingrese el Nombre del continente:  \n");
		gets(pa[i].continente);
		pa[i].cabeza=NULL;
		carga_especies(pa[i].cabeza);
	}
}




int main()
{
	pais pa[n];
	
	precarga(pa);
	
	
	
	
}
