#include <iostream>
#include <stdlib.h>
#include "Game.h"


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


int main(int argc, char* argv[]){
  
  
  
  
  return 0;
}