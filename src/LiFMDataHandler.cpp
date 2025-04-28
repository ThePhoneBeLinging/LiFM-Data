//
// Created by Elias Aggergaard Larsen on 27/04/2025.
//

#include "LiFM-Data/LiFMDataHandler.h"

League* LiFMDataHandler::getLeague(int id)
{
  return &leagues_[id];
}

Club* LiFMDataHandler::getClub(int id)
{
  return &clubs_[id];
}

Player* LiFMDataHandler::getPlayer(int id)
{
  return &players_[id];
}
