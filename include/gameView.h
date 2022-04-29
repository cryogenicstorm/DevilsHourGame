#ifndef _GAMEVIEW_H_
#define _GAMEVIEW_H_

#include <iostream>

#include "actor.h"
#include "constants.h"
#include "enum.h"
#include "pauseMenu.h"
#include "room.h"
#include "spriteSheet.h"
#include "stdio.h"
#include "vec2d.h"

class GameView {
 public:
  /* constructor */
  GameView(){};

  GameView(SDL_Renderer *renderer);

  /* methods to draw element */
  void drawStartScreen(SDL_Renderer *renderer);
  void displayGame(Actor *actor);
  void drawUI();
  void drawRoom(Room *r, Rooms room_name);
  void drawActor(Vec2d position, Vec2d size, direction direction);
  void drawDoor();
  void drawPauseMenu(void);

  void drawInventory();
  void presentScreen(void);
  void clearScreen(void);

 private:
  /* helper function for drawInventory() */
  void drawItem();
  SpriteSheet sprite;
  SDL_Rect rect;
  PauseMenu pauseMenu;
  SDL_Renderer *renderer;
  Room *currentR;
  Rooms currentRoom;
  SDL_Texture *roomTexture;
};

#endif /* _GAMEVIEW_H_ */