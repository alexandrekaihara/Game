#include <iostream>
#include <stdlib.h>
#include "Game.h"


using namespace std;


string title = "Jogo do Pinguin";
int width = 400;
int height = 400;


Game* Game::instance = nullptr;


Game& Game::GetInstance(){
    if(instance == nullptr){
        return *(new Game(title, width, height));
    }
    return *instance;
}


Game::Game(string title, int width, int height){
    // Verifica se há uma instância, se existir exibe o erro
    if(instance != nullptr){
        cout << "[ERROR] Already running an instance of Game\n";      
        exit(EXIT_FAILURE);
    }
    else{
        instance = this;
    }
    
}


int main(int argc, char* argv[]){
  
  
  
  
  return 0;
}