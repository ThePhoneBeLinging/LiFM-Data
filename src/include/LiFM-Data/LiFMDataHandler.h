//
// Created by Elias Aggergaard Larsen on 27/04/2025.
//

#ifndef LIFMDATAHANDLER_H
#define LIFMDATAHANDLER_H
#include <vector>

#include "Club.h"
#include "League.h"
#include "Player.h"


class LiFMDataHandler
{
public:
  LiFMDataHandler() = default;
  League* getLeague(int id);
  Club* getClub(int id);
  Player* getPlayer(int id);
private:
  std::vector<League> leagues_;
  std::vector<Club> clubs_;
  std::vector<Player> players_;
};



#endif //LIFMDATAHANDLER_H
