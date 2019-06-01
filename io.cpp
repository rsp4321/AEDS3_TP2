//#include "io.h"
#include "io.hpp"
#include <iostream>

const std::string NOME_ARQUIVO = "registros.csv";

//const std::string CAMINHO_ARQUIVO = "";

#ifdef __WIN32  // Essa macro é definida no compilador minGW do CodeBlocks para identificar o sistema operacionasl

    const std::string CAMINHO_ARQUIVO = "..\\..\\registros-aeds3-tp2\\" + NOME_ARQUIVO;
//    CAMINHO_ARQUIVO = "..\\..\\registros-aeds3-tp2\\" + NOME_ARQUIVO;

#endif // __WIN32

#ifdef __unix   // Conforme acima, detectando sistemas opercionais unix-like, como o linux e o OS X

    const std::string CAMINHO_ARQUIVO = "../../registros-aeds3-tp2/" + NOME_ARQUIVO;
//    CAMINHO_ARQUIVO = "../../registros-aeds3-tp2/" + NOME_ARQUIVO;

#endif // __unix



//const std::filesystem     // Só é suportado compilando com o GCC 8 a princípio

//const boost::path *CAMINHO_ARQUIVO;   // Não vem na instalação do CodeBlocks por padrão

void salvarRegistroCSV(Registro *estrutura_registro) {

    // TODO: Implementar o salvamento em um arquivo dentro de um diretório padronizado

    std::cout << CAMINHO_ARQUIVO << std::endl;
}
