Dia 18/03/2003__________________________________________________________

Infra_Marcus

S.O. Sistema operacional é um programa que gerencia o hardware de um computador. Ex: Ubuntu, Windows.

Alguns sistemas operacionais sao projetados para serem convenintes, outros para serem eficientes, e outros para atenderem a alguma combinação de ambos os aspectos



O que fazem os sistemas operacionais?_____________
Bem, um sistema de computacao pode ser dividido grosseiramente me quatro componentes:
  * Hardware
  * Sistema Operacional
  * Programas aplicativos
  * Usuarios
O *Hardware* -> Por exemplo a unidade central de processamento (CPU), a Memoria e os dispositivos de entrada/saída(I/O - input/output). fornece os recursos básicos de computacao do sistema.


Os *Programas Aplicativos* -> Como processamento de texto, planilhas, compiladores, e navegadores da web - definem as formas pelas quais esses recursos sao utilizados para resolver os problemas computacionais dos usuarios.

O *Sistema Operacional* controla o hardware e coordena seu uso pelos diversos programas aplicativos de varios usuarios.

  *HARDWARE*
      |
      v
    *S.O.*
      |
      V
  *Progs.Apps.*
      |    -> Chamadas de usuarios
      V
  * Compilador
  * Montador
  * Editor de texto
  * Sistemas de Banco de dados

* Definição de Kernel -
  
  https://www.certificacaolinux.com.br/como-funciona-o-kernel-do-linux/
  https://chat.openai.com/share/876d6940-4869-42dc-9bfd-945ba4d311de


  
Responsabilidades do Kernel:

  * Unir hardware e Software
  * Organizar, controlar processar os dados de solicitacoes de usuarios e demandas dos ocmpionentes de hardware do dispositivos.
  * Alocação e distribuição de hierarquias de arquivos na memoria, alem da leitura (traducao) dos dados em acoes.
  * Gerenciamento de processos - Todos os porcessos desde a inicializacao do S.O. até a manuntecao dos softwares daemons que rodam em simultaneo são responsabilidades do kernel.
  * Gerenciamento de memoria - Aloca cada "item" lido após leitura e identificacao.
  * Gerenciamento de dispositivos - CTodos dispositivos novos nas entradas USBs, esses "novos elementos" acoplados ao sistema passam pela leitura e aprovacao do kernel.
  * Chamada do Sistema - As Chamadas, correspondem a execucao de comandos e solicitacoes como de maior prioridade. Assim, a *requisicao é analisada pelo kernel, que aprova as atividades e permite* que o S.O. retorne a acao desejada.

* Operação do Sistema de Operacional
Um moderno sistema de computacao de uso geral é composto *por uma ou mais CPUs* e varios controladores de dispositivos conectados por intermedio de um *BUS* comum que dá acesso à *memoria compartilhada*

Programa *Bootstrap*, é um programa que inicial onde inicialza, liga, reinicia o computador. O Bootstrap normalmente é armazenado dentro do *hardware do computador em memória somente de leitura (ROM)* ou em memória somente de leitura eletricamente apagavel e programavel (EEPROM), conhecida tambem como *firmware*.

Ele iniciliza todos os aspectos do sistema, dos registradores da CPU aos controladores de dispositivos e conteúdos da memoria.

Enfim, o programa bootstrap precisa saber como carrega o sistema operacional e iniciar sua execução. Para alcançar esse objetivo, o programa tem que lozalizar e carregar na memoria o *kernel do sistema operacional*.

* Interrupcao -> Ocorrencia de um evento proveniente do hardware ou software pode disparar uma interrupcao executando uma chamada no sistema. Sao partes importantes da arquiteturas de um computador. Cada computador tem seu sistema de interrupcao, uma interrupcao deve transferir o controle para a rotina de serviço de interrupcao apropriada.
  * Aplicacao -> Chama do Sistema(Varias) -> Nucleo do SO(Kernel) -> Hardware 

FAZER UMA ORDEM DE ETAPAS DESDE QUE VOCE LIGA O COMPUTADOR
* Por enquanto vai ser nessa ordem 

Firmware
Bootstrap
Kernel
init no UNIX
Daemons
login



* Memoria e Estrutura de Armazenamento 

A CPU para carregar instrucoes precisa partir da memoria, sendo assim, os programas propriamente ditos devem estar armazenados na memoria.

Computadores em geral executam a maioria de seus programas a aprtir de memoria regradavel, ou seja, a *memoria principal*(Ou, chamada de *memoria de acesso randomico ou *RAM**).




* Arquitetura dos Sistemas de Computação -

Relacao de rotina do S.O. para a memoria, CPUs(Registradores, caches) e etc. 




* Operações do Sistema Operacional

  -  As interrupcoes estam sempre presentes nos S.O.s modernos, eles sao praticamente dirigidos por interrupcoes. E se nao existe processo para serem executados ou dispositivos I/O a quem responder entao o S.O. permanece inativo esperando que algo aconteça. Os eventos sao quase sempre sinalizados pela ocorrencia de uma interrupcao ou de uma *exceção*(trap).

  -  Uma exceção é uma interrupcao gerada por software causada por um erro* (por exemplo, divisão por zero ou acesso invalido a memoria) ou por uma solicitacao especifica proveniente de um programa de usuario para que um serviço do sistema operacional seja executado

  -  Para cada tipo de interrupcao, *segmentos sao criados*, separados do codigo do sistema operacional, eles determinam qual ação deve ser executada.


* Gerenciamento de Processos -

Um programa nada faz, a menos que suas intrucoes sejam executadas por uma CPU.

  *Um Programa  em execução é um processo*

- Um programa de processamento de texto, sendo executado por um usuario individual em um PC, é um processo.
- Uma tarefa do sistema, como o envio de saída de uma impressora, também pode ser um processo (ou pelo menos parte de um).

EX: 
*Diversos Programas Armazenados (HDD)* <-> **CPU** <->  RAM, Diversos de processos sendo carregados, tirados do HDD como programas.


* Gerenciamento da Memoria

- A memoria principal é um grande array de bytes que variam de centenas de milhares a bilhoes. Cada byte com seu proprio endereco, a memoria principal é um repositorio de dados rapidamente acessiveis compartilhado pela CPU e dispositivos I/O.






_______________________________________________________________________//
