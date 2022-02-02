#include <string>


using namespace std;


class Game{
  private:
    Game(string title, int width, int height);
    static Game* instance;
    SDL_Window* window;
    SDL_Renderer* renderer;
    State& state;
  public:
    Game(Game& other) = delete;
    ~Game();
    void run();
    SDL_Renderer* GetRenderer();
    State& GetState();
    static Game& GetInstance();
  protected:
  
};


Game& Game::GetInstance(){
    if(instance == nullptr){
        instance = new Game();
    }
    return *instance;
}


int main(int argc, char* argv[]){
  
  
  
  
  return 0;
}