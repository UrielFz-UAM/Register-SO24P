//Uriel Franco Zavala
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
    if (argc!=2){
        printf("Forma de uso: %s ValorLong \n",argv[0]);
        return -1;
    }
    long max=atol(argv[1]);
    //Calcula tiempo de ejecucion
    clock_t t=clock();
    printf("Inicio\n");
    register int n=0;
    for(n=0;n<max;n++);
    printf("Fin\n");
    t=clock()-t;
    double tiempo= ((double)t)/CLOCKS_PER_SEC; //Calculo de tiempo
    printf("Tiempo Transcurrido: %f segundos\n",tiempo);
    return 0;
}
