/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   io.h
 * Author: rodrigo
 *
 * Created on 6 de junho de 2019, 00:28
 */

#ifndef IO_H
#define IO_H

#ifdef __cplusplus
extern "C" {
#endif

    //#ifndef IO_H_INCLUDED   // Esse código é gerado pelo próprio CodeBlocks
    //#define IO_H_INCLUDED

#include "registros.h"
    
#include <string.h>

#define NOME_ARQUIVO "registros.csv"


    // A proposta desses códigos consistia em  concatenar a "string" do diretório. Não funcionou

    //#define CAMINHO_ARQUIVO ".."  PATH_SEPARATOR # ".." # PATH_SEPARATOR # "registros-csv" # PATH_SEPARATOR # NOME_ARQUIVO

    //#define CAMINHO_ARQUIVO ".." # PATH_SEPARATOR() # ".." # PATH_SEPARATOR() # "registros-csv" # PATH_SEPARATOR() # NOME_ARQUIVO

    //#define CAMINHO_ARQUIVO ".." ## PATH_SEPARATOR ## ".." ## PATH_SEPARATOR ## registros-csv ## PATH_SEPARATOR ## NOME_ARQUIVO



    void salvarRegistroCSV(Registro *estrutura_registro); // Assinatura do método de salvamento do registro em CSV

    //#endif // IO_H_INCLUDED



#ifdef __cplusplus
}
#endif

#endif /* IO_H */

