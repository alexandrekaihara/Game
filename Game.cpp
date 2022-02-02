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


Game& Game::GetInstance(){
    if(instance == nullptr){
        instance = new Game(title, diwth, heght);
    }
    return *instance;
}


int main(int argc, char* argv[]){
  
  
  
  
  return 0;
}