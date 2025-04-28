//
// Created by Elias Aggergaard Larsen on 27/04/2025.
//

#include "LiFM-Data/LiFMDataHandler.h"

League* LiFMDataHandler::getLeague(const int id)
{
  return &leagues_[id];
}

Club* LiFMDataHandler::getClub(const int id)
{
  return &clubs_[id];
}

Player* LiFMDataHandler::getPlayer(const int id)
{
  return &players_[id];
}

League* LiFMDataHandler::createLeague()
{
  leagues_.emplace_back();
  leagues_.back().leagueID = leagues_.size() - 1;
  return &leagues_.back();
}

Club* LiFMDataHandler::createClub()
{
  clubs_.emplace_back();
  clubs_.back().clubID = clubs_.size() - 1;
  return &clubs_.back();
}

Player* LiFMDataHandler::createPlayer()
{
  players_.emplace_back();
  players_.back().playerID = players_.size() - 1;
  return &players_.back();
}
