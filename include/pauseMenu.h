#ifndef _PAUSEMENU_H_
#define _PAUSEMENU_H_

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <stdlib.h>

#include <iostream>
#include <vector>

#include "constants.h"
#include "enum.h"
#include "vec2d.h"

class PauseMenu {
 public:
  PauseMenu(){};
  PauseMenu(SDL_Renderer* renderer);
  SDL_Texture* returnTexture(void) { return this->menuTexture; };

 private:
  SDL_Texture* menuTexture;
  SDL_Rect resumeButton;
  SDL_Rect exitButton;
  SDL_Renderer* renderer;

  void createTexture(void);
};

#endif