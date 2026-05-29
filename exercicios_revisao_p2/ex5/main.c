#include "listaPacotes.h"
#include "pacote.h"
#include "pilhaErros.h"
#include "filaTransmissao.h"




int main(){
    Fila *filaEnvio = iniciarFila(10);
    Pilha*pilhaErro = iniciarPilha(10);
    ListaAtivos *pacotesAtivos = iniciarLista();

    printf("==================================================\n");
    printf("   INICIANDO SIMULADOR DE REDE         \n");
    printf("==================================================\n");

    printf("\nPASSO 1: Chegada de 4 pacotes na Fila de Envio\n");
    
    Pacote p1 = {1, 500, 1.5}; 
    Pacote p2 = {2, 1024, 3.0}; 
    Pacote p3 = {3, 250, 0.75}; 
    Pacote p4 = {4, 750, 2.2};  

    filaEnvio = enfileirar(filaEnvio, p1);
    filaEnvio = enfileirar(filaEnvio, p2);
    filaEnvio = enfileirar(filaEnvio, p3);
    filaEnvio = enfileirar(filaEnvio, p4);

    mostrarFila(filaEnvio);


    int sucessoFila;


    printf("\nPASSO 2 e 3: Processando transmissões da Fila \n");
    
  for (int i = 0; i < 2; i++) {
        Pacote pAtual = Transmitir(filaEnvio, &sucessoFila);
        
        if (sucessoFila) {
            
            if (pAtual.numeroPacote == 2) {
                printf("[ERRO] Falha de conexao no Pacote %d! Enviando para a Pilha de Erros.\n", pAtual.numeroPacote);
                pilhaErro = empilhar(pilhaErro, pAtual);
            } 
            
            else {
                printf("[SUCESSO] Pacote %d enviado! Entrando na rede como Ativo.\n", pAtual.numeroPacote);
                
                PacoteAtivo ativo;
                ativo.ID = pAtual.numeroPacote;
                strcpy(ativo.origem, "192.168.0.10");
                strcpy(ativo.destino, "10.0.0.1");
                strcpy(ativo.status, "em transito");
                
                inserirInicio(pacotesAtivos, ativo);
            }
        }
    }


    printf("\n--- ESTADO ATUAL DA REDE ---\n");
    mostrarFila(filaEnvio);
    mostrarLista(pacotesAtivos);


    printf("\n PASSO 4: Pacote com sucesso foi entregue ao destino\n");
    
    printf("Mudando status do Pacote 1 para 'entregue' e removendo da rede...\n");
    
    removerLista(pacotesAtivos, 1); 

   
    printf("\n SIMULAÇÃO CONCLUÍDA. RELATÓRIO FINAL: \n");
    mostrarLista(pacotesAtivos);

  

    return 0;
}

