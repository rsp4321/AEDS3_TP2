#ifndef IO_H_INCLUDED   // Esse código é gerado pelo próprio CodeBlocks
#define IO_H_INCLUDED

#include "registros.h"

#define NOME_ARQUIVO "registros.csv"

//#define CAMINHO_ARQUIVO ".."  PATH_SEPARATOR # ".." # PATH_SEPARATOR # "registros-csv" # PATH_SEPARATOR # NOME_ARQUIVO

//#define CAMINHO_ARQUIVO ".." # PATH_SEPARATOR() # ".." # PATH_SEPARATOR() # "registros-csv" # PATH_SEPARATOR() # NOME_ARQUIVO

//#define CAMINHO_ARQUIVO ".." ## PATH_SEPARATOR ## ".." ## PATH_SEPARATOR ## registros-csv ## PATH_SEPARATOR ## NOME_ARQUIVO


void salvarRegistroCSV(Registro *estrutura_registro);    // Assinatura do método de salvamento do registro em CSV

#endif // IO_H_INCLUDED
