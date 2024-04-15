#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

// ATIVIDADE - Representação de SVCs com relatorio comentado
// ===================================================
// ALUNO: RAFAEL SAMPAIO E SILVA
// RA:
// ===================================================

// ---> Eu escolhi explorar a funcao - fork(); e wait(); 

// Além do livro(S.O. Silberstein) usei esses sites e pdfs como referencia:
// http://www.inf.ufes.br/~rgomes/so_fichiers/aula6a.pdf
// https://pubs.opengroup.org/onlinepubs/7908799/xsh/unistd.h.html
// https://pubs.opengroup.org/onlinepubs/7908799/xsh/fork.html

int main(int argc, char * argv[]) {
  
  int id = fork(); // Criando uma variavel identificadora, e chamado do fork
  // Em outras palavras, criando um processo filho sendo tudo a partir do fork será executado duas vezes.
  
  // Um sera executado no processo main(principal), 
  // e outro será executado como processo filho.

  // Eu criei um identificado para visualizar na pratica que existe uma diferença entre o processo pai e filho
  if(id == 0){ 
    printf("\nOla programa filho! \nid_filho: %d", id); // Logo, o ID no child process sepre será 0 (zero).
  }

  if(id != 00{
    wait();
  }
  
  if(id != 0){
    printf("\nOla do programa pai! \nid_pai: %d", id);
  }

  

  return 0;
}
