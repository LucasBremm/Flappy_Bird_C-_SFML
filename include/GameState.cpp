#include <sstream>
#include "GameState.hpp"
#include "DEFINITIONS.hpp"

#include <iostream>

namespace Sonar {
  GameState::GameState(GameDataRef data): _data (data) {

  }

  void GameState::Init() {
    _data->assets.LoadTexture("Game Background", 
      GAME_BACKGROUND_FILEPATH);
    
    _background.setTexture(this->_data->assets.GetTexture("Game Background" ));
  }

  void GameState::HandleInput() {
    sf::Event event;

    while(_data->window.pollEvent(event)) {
      if (sf::Event::Closed == event.type) {
        _data->window.close();
      }
    }
  }

  void GameState::Update(float dt) {
  
  }

  void GameState::Draw(float dt) {
    _data->window.clear();

    _data->window.draw(_background);

    _data->window.display();
  }
}