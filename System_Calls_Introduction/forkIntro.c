#include <stdio.h>
#include <unistd.h>

// APAGAR DEPOIS ===============================
// youtube --->
// SVC linux unistd.h



// ATIVIDADE - Representação de SVCs com relatorio comentado

// ===================================================
// ALUNO: RAFAEL SAMPAIO E SILVA
// RA: 
// ===================================================

// Além do livro(S.O. Silberstein) usei esses sites e pdfs como referencia:
//
// http://www.inf.ufes.br/~rgomes/so_fichiers/aula6a.pdf
// https://pubs.opengroup.org/onlinepubs/7908799/xsh/unistd.h.html
// https://pubs.opengroup.org/onlinepubs/7908799/xsh/fork.html



int main(int argc, char * argv[]) {

  int id = fork(); // O printf seguinte printa duas vezes.
  // Em outras palavras tudo apartir do fork será executado duas vezes.
  // Um sera executado no processo main(principal), e outro será executado como processo filho.
  // Logo, o ID no child process sepre será 0 (zero).
  //printf("Ola mundo, eu vou repetir\nid: %d\n", id);

  if(id == 0){
    printf("Ola programa filho!\n");
  }else{
    printf("Olha do programa main\n");
  }

  return 0;
}
