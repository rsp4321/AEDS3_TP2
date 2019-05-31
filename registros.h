#ifndef REGISTROS_INCLUDED
#define REGISTROS_INCLUDED

// Estruturas e constantes definidas no exercício
#define MAX_REGISTROS 1000000000
#define MAX_CHARS 80

char ceps[] = {
    "36180-000", "25500-000", "36140-000", "37510-234", "12240-000",
    "34567-111", "76456-322", "45654-987", "98765-216", "40000-000"
};

typedef struct {
    char cpf[11];           // 11 algarismos aleatórios
    char nome[MAX_CHARS];   // até MAX_CHARS letras aleatórias dentre ’ ’ e A-Z
    int idade;              // valor aleatório no intervalo [10, 50]
    char sexo;              // valor aleatório ’F’ ou ’M’
    char cep[8];            // valor aleatório dentre 10 cep’s pré-definidos
} Registro;


#endif // REGISTROS_INCLUDED
