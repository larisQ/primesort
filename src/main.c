// Larissa Quintela
//160343

#include <stdio.h>
#include <unistd.h>


int main() {

  FILE *ordem;
  int i=0, k, flag=0;
  int x , y=2 ; //x é o número a ser lido e y o dividor
  int resto, out[20000];

  scanf("%d", &x); // lê o primeiro valor da entrada e assim por diante

  while(x != -1){ //reconhece o -1 como caracter de saída

  //lógica para encontrarmos os não primos
  if(x==1){ //Considera o número 1 sempre como um não primo quando aparece na sequência de entrada
    out[i] = x;
    i++;
  }
  while(y<=x/2 && flag==0){
    resto = x % y;
    if(resto == 0 ){
    out[i] = x; //vetor de não primos
    i++;
    flag=1;
    }
    y++;
  }
   flag = 0;
   y = 2;

 scanf("%d", &x);

}

  if((ordem = popen("sort -n -r", "w")) == NULL){
    perror("popen");
    exit(1);
  }

//percorre o vetor out
  for(k=0; k<i; k++){
  	fprintf(ordem, "%d\n", out[k]);
  }

  pclose(ordem); //encerra o arquivo file

  return 0;

}
