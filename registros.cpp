/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "registros.hpp"
#include <cstdlib>

int gerar_numero(int valor_max) {
    
//    Se baseando no fato de que os restos possíveis de uma divisão inteira
//    de um inteiro com "valor_max" é de 0 até "valor_max" exclusive
    return std::rand() % valor_max;
}

std::string gerar_cpf() {
    
    
}