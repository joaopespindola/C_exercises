#include <stdio.h>

int leitura(){
  int input;
  
  scanf("%d", &input);
  
  return input;
}

void resolve(idade_gemeos){
  int idade_Giullia, idade_Bruno;
  
  idade_Giullia = idade_gemeos + 26;
  idade_Bruno = idade_gemeos + 5;
  
  printf("%d %d", idade_Bruno, idade_Giullia);
}

int main(void) {
  int idade_gemeos;
  
  idade_gemeos = leitura();
  
  resolve(idade_gemeos);
  
  return 0;
}