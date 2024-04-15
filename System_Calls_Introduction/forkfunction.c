#include <stdio.h>
#include <unistd.h>

// ATIVIDADE - Representação de SVCs com relatorio comentado
// ===================================================
// ALUNO: Rafael Sampaio e Silva
// RA: 
// ===================================================

// ---> Eu escolhi explorar a funcao - fork(); e sleep(); 

// Além do livro(S.O. Silberstein) usei esses sites e pdfs como referencia:
// http://www.inf.ufes.br/~rgomes/so_fichiers/aula6a.pdf
// https://pubs.opengroup.org/onlinepubs/7908799/xsh/unistd.h.html
// https://pubs.opengroup.org/onlinepubs/7908799/xsh/fork.html
// https://pubs.opengroup.org/onlinepubs/7908799/xsh/sleep.html


int main() {
  // Chamado do fork, e armazenando em uma variavel indentificadora
  // que nos ajudara a indentificar aguiar os processo pai e filho.
  int index = fork(); // Criando processo filho (o index no filho sempre será 0, enquanto o pai será outro)
  // (na pratica o codigo estara sendo executado ao mesmo tempo, mas com a ajuda da funcao wait eu vou organizar isso)
  int numbers; // Numero que seram exibidos apriori "fora de ordem"

  
  // Uma forma de checar para ver se o codigo esta no processo main(pai).
  // Logo, os numeros printados estiverem fora de ordem e começando com o 
  // numero "6" até "9", quer dizer que estamos no processo pai e ele executou
  // primeiro. Caso o Processo esteja em ordem, começando pelo "1" até o "5",
  // quer dizer que estamos no processo filho e ele que começou primeiro.
  if (index == 0) { 
    numbers = 1;
  } else {
    numbers = 6;
  }

  // Sugiro tentar comentar esse condicional para ver o que acontece.
    if(index != 0) {
      sleep(1); // Sleep INTERROMPE a execução por "1seg" determinado antes. (tempo suficiente para o programa filho acabar de executar).
    }
  // Um simples for loop que vai dentre todos os numeros
  int i;
  for(i = numbers; i < numbers + 5; i++) {
    printf(" %d", i); fflush(stdout);
  }

  return 0;
}
