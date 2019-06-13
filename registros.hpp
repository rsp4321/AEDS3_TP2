/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   registros.hpp
 * Author: CAMPUSRP\rodrigo.pinto
 *
 * Created on 12 de Junho de 2019, 17:45
 */

#ifndef REGISTROS_HPP
#define REGISTROS_HPP

#include <string>

// Estruturas e constantes definidas no exercício
#define MAX_REGISTROS 1000000000
#define MAX_CHARS 80

/*
char ceps[] = {
//char ceps[10] = {
//char ceps[9][10] = {
 */
//const char ceps[10][9] = {
//char ceps[10][9] = {
//std::string ceps[] = {
const std::string ceps[] = {
    //
    "36180-000", "25500-000", "36140-000", "37510-234", "12240-000",
    "34567-111", "76456-322", "45654-987", "98765-216", "40000-000"
};
//
// Não podem ser colocadas variáveis constantes em arquivos do tipo header em C :^S

//std::string primeiros_nomes[] = {// um dicionário de nomes
const std::string primeiros_nomes[] = {// um dicionário de nomes

    "Rodrigo", "Rosana", "Marcelle", "Ernani", "Anderson", "Maria"
};

//std::string sobrenomes[] = {// Um dicionário de sobrenomes
const std::string sobrenomes[] = {// Um dicionário de sobrenomes

    "Silva", "Rafael", "Cruz", "Cândido", "Freitas"
};


// A estrutura do registro em si

typedef struct {
    char cpf[11]; // 11 algarismos aleatórios
    char nome[MAX_CHARS]; // até MAX_CHARS letras aleatórias dentre ’ ’ e A-Z
    int idade; // valor aleatório no intervalo [10, 50]
    char sexo; // valor aleatório ’F’ ou ’M’
    char cep[8]; // valor aleatório dentre 10 cep’s pré-definidos
} Registro;


Registro gerar_registro(); // Método para gerar um registro aleatoriamente

std::string gerar_cpf(); // Método para gerar um CPF aleatoriamente

int gerar_numero(int valor_max);    // Método para gerar um número inteiro de 0 até valor_max

int gerar_digito();    // Método para gerar um número inteiro

#endif /* REGISTROS_HPP */

