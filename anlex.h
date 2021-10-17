/*********** Librerias utilizadas **************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/************* Definiciones ********************/

//Codigos
#define L_CORCHETE      256
#define R_CORCHETE      257
#define L_LLAVE         258
#define R_LLAVE         259
#define COMA            260
#define DOS_PUNTOS      261
#define STRING          262  
#define NUMBER          263
#define PR_TRUE         264
#define PR_FALSE        265
#define PR_NULL         266

// Fin Codigos
#define TAMBUFF 	5
#define TAMLEX 		50
#define TAMHASH 	101

/************* Estructuras ********************/

typedef struct entrada{
    int compLex;
    char lexema[TAMLEX];	
    struct entrada *tipoDato;
    char componenteLexico[TAMLEX];
} entrada;

typedef struct {
	int compLex;
	entrada *pe;
} token;

/************* Prototipos ********************/
void insertar(entrada e);
entrada* buscar(const char *clave);
void initTabla();
void initTablaSimbolos();
void getToken();