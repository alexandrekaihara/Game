#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED


#include <iostream>
#include <stdlib.h>


using namespace std;


Game::Game(){
    // Verifica se há uma instância, se existir exibe o erro
    if(instance != nullptr){
        cout << "[ERROR] Already running an instance of Game\n"        
        exit(EXIT_FAILURE);
    }
    else{
        instance = this;
    }

}


#endif