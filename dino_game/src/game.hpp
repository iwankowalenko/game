#pragma once

#pragma warning(disable: 4267)

#include <iostream>
#include <fstream>

#include "dino.hpp"

class game {
private:
    int max_dino_in_group = 3;
    int cur_dino_in_group = 0;
    std::string choose_menu, buy_menu;
    bool is_fighting = false;
    Terrain fight_terrain = Terrain::Plain;
    const std::string filename = "save.dino";

    std::string GetASCIIByName(const std::string &s) {
        for (auto& d : all_dinos) {
            if (d->GetName() == s) {
                return d->GetASCII();
            }
        }

        return "";
    }

    void Load();

    void FightInitiation();

    void FightEnd();

    void Attack(std::vector<Dino*>& v1, std::vector<Dino*>& v2);

    void CheckDinoStates(void);

    void CreateEnemyLoadout(void);

    void DeleteDinoFromEnemyDinos(int en_ind);

    void DeleteDinoFromMyDinosAndGroup(int group_ind);

    Terrain GetRandTerrain(void) {
        int r = rand() % 3;

        switch (r) {
        case 0:
            return Terrain::Mountain;
        case 1:
            return Terrain::Plain;
        case 2:
            return Terrain::River;
        }

        return Terrain::Plain;
    }

    Dino* CreateTiranosaurus(void);

    Dino* CreateStegosaurus(void);

    Dino* CreateTriceratops(void);

    Dino* CreatePterodactyl(void);

    Dino* CreateDiplodoc(void);

    Dino* CreateDino(int i);

    Dino* CreateRandomDinosaur(void);

    void InitDinosaurs(void);

protected:
public:
    std::vector<Dino*> my_dinos{}, my_dino_group{};
    std::vector<Dino*> all_dinos{};
    std::vector<Dino*> enemy_dinos{};
    int money = 250;
    std::string game_menu;

    game();

    ~game() {
        Save();
    }
    
    void ShowMyDinosaurs(void);

    void ShowAllDinosaurs(void);

    void ChooseDinosInGroup(void);

    void BuyInAShop(void);

    bool FoundInGroup(Dino* dinosaur);

    void Fight();

    void Save();
};
