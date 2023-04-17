#include <stdio.h>
int main(void){
  	int numeros[5],aux,erro,i,j;
      for(i=0;i<5;i++){
        do{
        	erro=0;
	        printf("Insira o %i numero: ",i+1);
	        scanf("%i",&aux);
	        if(i==0)
	          numeros[i]=aux;
	        else{
	          for(j=0;j<i;j++){
	            if(numeros[j]!=aux){
	              numeros[i]=aux;
	            }else{
	              printf("Numero ja existente\n");
	              erro=1;
	            }
	          }
	        }
      }while(erro==1);
    }
  	printf("\nNumeros digitados:\n");
  	for(i=0;i<5;i++){
      printf("%i\n",numeros[i]);
    }
  return (0);
}
