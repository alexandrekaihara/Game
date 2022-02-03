#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED


#include <string>


using namespace std;


string title = "Jogo do Pinguin";
int width = 400;
int height = 400;


class Game{
  private:
    Game(string title, int width, int height);
    static Game* instance;
    //SDL_Window* window;
    //SDL_Renderer* renderer;
    //State& state;
  public:
    ~Game();
    void run();
    //SDL_Renderer* GetRenderer();
    //State& GetState();
    static Game& GetInstance();
  protected:
};


Game* Game::instance = nullptr;


Game& Game::GetInstance(){
    if(instance == nullptr){
        return *(new Game(title, width, height));
    }
    return *instance;
}


#endif