#ifndef PACOTE_H
#define PACOTE_H  

typedef struct {
    int numeroPacote;
    int tamanho;
    float tempo_estimado_transmissao;

}Pacote;


typedef struct{
    int ID;
    char origem[100];
    char destino[100];
    char status[100];
    
}PacoteAtivo;




#endif

