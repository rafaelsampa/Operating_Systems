#include <stdio.h>
#include <pthread.h>


// Escalonamento, processos(thread, main)
// Escalonamente = escolher quem vai ser executado


void * thread_1(){

  for(int i = 0; i < 10; i++){
    printf("Valor: %i\n", i);
  }

  return 0;
}

void * thread_2(){

  for(int i = 10; i < 20; i++){
    printf("Valor: %i\n", i);
  }
  return 0;
}

int main (){
  
  pthread_t t1, t2 ; // controlador
  
                            // é NULL pois nao esta passando nada na thread_1
  pthread_create(&t1, NULL, thread_1, NULL); 
  // "join" => Dizendo para o escalonador forçar a t1 obrigatoriamente termine antes da t2. Estabelecendo criterios de controle sobe as threads.
  pthread_join(t1, NULL); // Arbritario
  
  pthread_create(&t2, NULL, thread_2, NULL);
  pthread_join(t2, NULL);
  
  printf("\nFIM\n");
  pthread_exit(0);
  
  return 0;
}

// O que é o deadlock ???
