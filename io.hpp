#ifndef IO_HPP_INCLUDED  // Esse c�digo � gerado pelo pr�prio CodeBlocks
#define IO_HPP_INCLUDED

#include "registros.h"
#include <string>

//#define NOME_ARQUIVO "registros.csv"

//#define CAMINHO_ARQUIVO ".."  PATH_SEPARATOR # ".." # PATH_SEPARATOR # "registros-csv" # PATH_SEPARATOR # NOME_ARQUIVO

//#define CAMINHO_ARQUIVO ".." # PATH_SEPARATOR() # ".." # PATH_SEPARATOR() # "registros-csv" # PATH_SEPARATOR() # NOME_ARQUIVO

//#define CAMINHO_ARQUIVO ".." ## PATH_SEPARATOR ## ".." ## PATH_SEPARATOR ## registros-csv ## PATH_SEPARATOR ## NOME_ARQUIVO


void salvarRegistroCSV(Registro *estrutura_registro);    // Assinatura do m�todo de salvamento do registro em CSV


#endif // IO_HPP_INCLUDED
