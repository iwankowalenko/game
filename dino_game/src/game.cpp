#include "game.hpp"

Dino* game::CreateTiranosaurus( void ) {
    DinoStr* Tiranosaurus = new DinoStr(30, 10, 10, 150, 110, static_cast<std::string>("Tiranosaurus"), static_cast<std::string>(
        "                                                                                          \n"
        "                                                                                          \n"
        "                                                                                          \n"
        "                                                                     &&&XX?& &&&??&       \n"
        "                                                                  ?XXXXXXXXXXXXXXXXXX     \n"
        "                                                                &XXXXXXXXXXXXXXXXXXXX&    \n"
        "                                                &&???????&&   &XXXXXXXXXXXXXX ?& & &&     \n"
        "                                     &?XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX?             \n"
        "                     &&&&&&&????&&&?XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX&&          \n"
        "             &??XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX??XXXXXXXX??       \n"
        "         &XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX?&       &?XXX?       \n"
        "       ?XXXXXX?????XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX?&                        \n"
        "     &X?&                &&?XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                           \n"
        "     &                         &?XXXXXXXXXXXXXXXXXXXXXXXXXXXX&?X?&                        \n"
        "                                   &?XXXXXXXXXXXXXXXXX&&   &X??&&&                        \n"
        "                                         &?XXXXXXXXXXX       &&&                          \n"
        "                                          &XXXXX&XXXX                                     \n"
        "                                          &XXX&  &XX                                      \n"
        "                                         ?XX?    XXX                                      \n"
        "                                        &XXX     ?XX&                                     \n"
        "                                         ?XX&     &XX?                                    \n"
        "                                          XXX&     &XXXX?X??                              \n"
        "                                          XXXXXXX?& XXXXXXX&                              \n"
        "                                          &?X?&?X    &&&                                  \n"
        "                                                                                          \n"
        "                                                                                          \n"
        "                                                                                          \n"
        )
    );

    return std::move(Tiranosaurus);
}

Dino* game::CreateStegosaurus(void) {
    DinoInt* Stegosaurus = new DinoInt(14, 14, 22, 130, 74, static_cast<std::string>("Stegosaurus"), static_cast<std::string>("                                                                                          \n"
        "                                             X?                                           \n"
        "                                             &&&?       ?X??&?                            \n"
        "                                            ?&&&&&X    ???&&&&?                           \n"
        "                                 X&&X?      X&&&&&&&X???X&&&&&&?     ??                   \n"
        "                                 X&&&&&&X?  &&&&&&&&&&&X&&&&&&&&X ??XX&&                  \n"
        "                                 X&&&&&&&&&&XX&&&&&&XX&&X&XX&&&&&&XXX&&&X                 \n"
        "                         XX??   ?X&&&&&&&XXXXXXXXXXXXXXXXXXXXXXXX&X&&&&&&?                \n"
        "                         &&&&&&XXXXXXXXXXXX???????????????????XXXXX&X&&&&&X??             \n"
        "                        ?&&&&XXXX??XXXXXXXXXX???X?????????????XXXXXXXXXXX&XXXX            \n"
        "              ?   &&&&X??XXXXXXXXXXXXXXXXXXX??XXX?XXXX????????XXXXXXXXXXXXX&&&            \n"
        "              ?   XXXXX?XXXXXXXXXXXXXX&&&XXX?XXXX?XXXX?????X?XXXXXXXXXXXXXX&&&XX          \n"
        "         ?   ?? ?XXX&XXXXXXXXXXXXXXXXX&&&&&X?XXXXXX?XX?????XXXXXX&XXXXXXXXXXX&X&          \n"
        "         XX??XXXXX???                  ?XXX&XXXXXXXX&X???XXXXXXXXXXXX?XXXXXXXXXXXXX?      \n"
        "     ?? ?XXXX?                            ??XXXXXXXX&XXXXXXXXX&&&&XXXXX&&&&&&&&&&&&XXXX?  \n"
        "      ?X??                                   ?XXXXX&&&&X&&X&&&&&&&&XXXX&&&&&XXX&X&&&X?XX? \n"
        "                                             ?XXX&&XX&&&&&&&&&&&&X??XX&&&X?               \n"
        "                                             ?X&&&X   ??X&&&&X??X?XX&&&X                  \n"
        "                                             X&&&?       &&&&?  XXXX&X?                   \n"
        "                                            X&&&?        &&&X    ?XXX&                    \n"
        "                                           ?XX&X        ?X&&?      X?X                    \n"
        "                                           ?XXXX        ?XX&X       X&X                   \n"
        "                                           ?????                    ???                   \n"


        )
    );

    return std::move(Stegosaurus);
}

Dino* game::CreateTriceratops(void) {
    DinoInt* Triceratops = new DinoInt(14, 11, 28, 120, 78, static_cast<std::string>("Triceratops"), static_cast<std::string>(
        "                                                                                          \n"
        "                                                                                          \n"
        "                                                                  XXXXX                   \n"
        "                                                              X&&&&&&&&&                  \n"
        "                                                           X&&&&&XXXXXXX                  \n"
        "                                  XXXXX????&X????&&???&&XXX&&&XXXXXXXX&XX         X  XXX  \n"
        "                            XXXX&??&&&X&??&XX&??&&&????&X&&&XXXXXXXX&XXX&X     XXXXXX     \n"
        "                       XXX&&?&XX&&?&XXX&?&X&&&??X&X&??XX&&&XXXXXXXXX&&XX     XXXXX        \n"
        "                    X&&?&&&X&&&X&X&&&XXX&&&XXX&&&XXX??X&&&&XXXXXX&XXXX&X&X X&&XX          \n"
        "                X&&XXXX&&&XX&&&XXXXXX&XXXXXXXX&&&XX&&&&&&&&&XXXXXXXX&X&X&XXXXXX&          \n"
        "             XX&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&XXX&&XXXXXX&&XX&X        \n"
        "           X&&&&&&&&&&&&&&&&&&&&X&X&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&XXXXXXXXXXXXX&    X  \n"
        "        X&&&&&&&&XXXXXXXXXX&&&XXX&XXXXXXXXXXXXXXXXXXXXXXXX&&&&&&&&&&&&XXXXXXXXXXXX&&X     \n"
        "      X&&&&XXXXXXXXXXXXXXXX&&XXX&XXXXX             X&&XX&X   XXXX&&&&XX&XXXXXXXXXX&&&&X   \n"
        "    X&XXXXXX             XX&&&XXXXXXXXXXX         X&&XXXXXXXXXXXXXXXXX&XXXXXXXXXX&&&&&XX  \n"
        "  XXXX                      X&XXXXXXXXXXXXXXXXXXXXX&&XXXXXXXXX&&&        XXXXXXXXXXXXX&X  \n"
        "                              &XXXXXXX&&&XXXXXXXXXXXXXXXXXX&?&&&&                         \n"
        "                            X&XXXXXX&&&&&&X          &XXXXX&&&&&X                         \n"
        "                           X&XXXX&&&&&X             &XXXX&&&&&X                           \n"
        "                           &&&&  &??&              X&&X &??X                              \n"
        "                          X&&&XX X&&&&&X          X&&&XXX&&&&&                            \n"
        "                                                                                          \n"
        "                                                                                          \n"
        )
    );

    return std::move(Triceratops);
}

Dino* game::CreatePterodactyl(void) {
    DinoDex* Pterodactyl = new DinoDex(10, 27, 13, 90, 60, static_cast<std::string>("Pterodactyl"), static_cast<std::string>(
        "  &&                                                                                      \n"
        "  &XXX&&                            &&                                                    \n"
        "   XXXXXXXX&&&                &XX&&&&                            &&&&&&&&&&&&&&&          \n"
        "    XXXXXXXXXXX&X&&&       &&&&XX&&                      &&&XXXXXXXXXXXXXXXXXXXXXXXXXXX&& \n"
        "     XXXXXXXXXXXXX&&&   &XXXXXX&                     &&&&&XXXXXXXXXXXXXXXXXXXXXX&&&       \n"
        "      XXXXXXXXXXXXX&&XXXXX&&XX                     &&X&XX&XXXXXXXXXXXXXXXX&&&             \n"
        "       &XXXXXXXXXXX&XXXXXXXX&                    &&XXXXXXXXXXXXXXXXXXXX&                  \n"
        "        &XXXXXXXX&&&&&&&&&X                     &&XXXXXXXXXXXXXXXXX&&                     \n"
        "          &XX&&&&&&&&&&&&X&                   &&XXXXXXXXXXXXXXXXX&                        \n"
        "           &&&X&& &&&&&&XX&&                 &&XXXXXXXXXXXXXXX&                           \n"
        "          &&&&??XX&&&&&&X&&&&&             &&&XXXXXXXXXXXXXXX                             \n"
        "        &&&&&&XXXX&XXXX?X&&&&&&&&&       &&&&XXXXXXXXXXXXXX&                              \n"
        "          &&&&&&&&&&&XX?X&&&&&&&&&&&&&&&&&&XXXXXXXXXXXXXXX&                               \n"
        "            &&&&&&&XXXXXXXX&&&&&&&&&&&&&&XXXXXXXXXXXXXXXX&                                \n"
        "            &&X&  &XXXX&XXXXX&&&&&&&&&&XXXXXXXXXXXXXXXXXX                                 \n"
        "          X?X&&&&&&       &&&&&&&&XXXXXXXXXXXXXXXXXXXXXX&                                 \n"
        "         X&&&&              &&&&&&&&XXXXXXXXXXXXXXXXXXXX&                                 \n"
        "       X?&&&                 &&&&&&&&&&&&XXXXXXXXXXXXXXX&                                 \n"
        "     &X&                      &&&&&&&&&&&&&&&&&XXXXXXXX&&                                 \n"
        "                                 &&&&&&&&&&&&&XXXX&&&&&                                   \n"
        "                                            &&XX&XXXX&&&&&     &                          \n"
        "                                                &&&&&&XX&&&&&&&                           \n"
        "                                                       XXXX& &&&X&&                       \n"
        )
    );

    return std::move(Pterodactyl);
}

Dino* game::CreateDiplodoc(void) {
    DinoInt* Diplodoc = new DinoInt(23, 10, 24, 150, 85, static_cast<std::string>("Diplodoc"), static_cast<std::string>(
        "                                                                                          \n"
        "                                                                                          \n"
        "                                                                                          \n"
        "                                                            XXX                           \n"
        "                                                          XXXXXXXX                        \n"
        "                                                        XXXX    XX                        \n"
        "                                                       XXXX                               \n"
        "                                                      XXXX                                \n"
        "                                                     XXXX                                 \n"
        "                                                    XXXX                                  \n"
        "                                                  XXXXX                                   \n"
        "                                                XXXXXX                                    \n"
        "                                        XXXXXXXXXXXXX                                     \n"
        "                                    XXXXXXXXXXXXXXX                                       \n"
        "                                 XXXXXXXXXXXXXXXXX                                        \n"
        "                              XXXXXXXXXXXXXXXXXXXX                                        \n"
        "                           XXXXXXXXXXXXXXXXXXXXX                                          \n"
        "                        XXXXX XXXXX XX X    XXXXX                                         \n"
        "                     XXX       XXX   XXX    XX XX                                         \n"
        "                               X      XX   XX   XX                                        \n"
        "                              X       XX   X     X                                        \n"
        "                              X        XX X      XX                                       \n"
        "                                                                                          \n"
        )
    );

    return std::move(Diplodoc);
}

void game::InitDinosaurs(void) {
    all_dinos.push_back(CreateTiranosaurus());
    all_dinos.push_back(CreateStegosaurus());
    all_dinos.push_back(CreateTriceratops());
    all_dinos.push_back(CreateDiplodoc());
    all_dinos.push_back(CreatePterodactyl());
}

game::game() {
    InitDinosaurs();

    Load();

    game_menu = "------------------------------------------------\n"
                "-------------DINOSAUR FIGHT GAME----------------\n"
                "- Choose what to do:                           -\n"
                "- 1. Show all dinosaurs                        -\n"
                "- 2. Show my dinosaurs                         -\n"
                "- 3. Go to a shop                              -\n"
                "- 4. Fight                                     -\n"
                "- 5. Choose dino for a fight                   -\n"
                "- 6. Exit                                      -\n"
                "------------------------------------------------\n";

    choose_menu = "1. Add this dinosaur to the loadout\n"
                  "2. Go to the next one\n"
                  "3. Leave to the menu\n";

    buy_menu = "1. Buy this dinosaur\n"
               "2. Go to the next one\n"
               "3. Leave to the menu\n";
}

void game::ShowMyDinosaurs( void ) {
    if (my_dinos.size() > 0) {
        for (auto& d : my_dinos) {
            std::cout << "Name: " << d->GetName() << '\n';
            std::cout << "Health: " << d->GetHealth() << '\n';
            std::cout << "Intelligence: " << d->GetInt() << '\n';
            std::cout << "Strength: " << d->GetStrength() << '\n';
            std::cout << "Dexterity: " << d->GetDex() << '\n';
            std::cout << "View: " << d->GetASCII() << '\n';
        }
    }
    else {
        std::cout << "You dont have any dinosaurs\n";
    }
}

void game::ShowAllDinosaurs( void ) {
    for (auto& d : all_dinos) {
        std::cout << "Name: " << d->GetName() << '\n';
        std::cout << "Health: " << d->GetHealth() << '\n';
        std::cout << "Intelligence: " << d->GetInt() << '\n';
        std::cout << "Strength: " << d->GetStrength() << '\n';
        std::cout << "Dexterity: " << d->GetDex() << '\n';
        std::cout << "View: " << d->GetASCII() << '\n';
    }
}

Dino* game::CreateRandomDinosaur( void ) {
    int r = rand() % 5;

    return CreateDino(r);
}

void game::ChooseDinosInGroup( void ) {
    if (my_dinos.size() <= 0) {
        std::cout << "You don't have any dinos to choose from.\nGo to a shop and buy some." << std::endl;
        return;
    }

    for (auto &d : my_dinos) {
        bool choosing = true;

        if (cur_dino_in_group >= max_dino_in_group) {
            std::cout << "You are now full loaded(3/3 dino), go and fight!\n";
            return;
        }

        std::cout << "Name: " << d->GetName() << '\n';
        std::cout << "Health: " << d->GetHealth() << '\n';
        std::cout << "Intelligence: " << d->GetInt() << '\n';
        std::cout << "Strength: " << d->GetStrength() << '\n';
        std::cout << "Dexterity: " << d->GetDex() << '\n';
        std::cout << "View: " << d->GetASCII() << '\n';

        while (choosing) {
            std::cout << choose_menu;

            char i;

            std::cin >> i;

            switch (i) {
            case '1':
                if (!FoundInGroup(d)) {
                    cur_dino_in_group++;
                    my_dino_group.push_back(d);
                    choosing = false;
                    std::cout << d->GetName() << " has been added into your loadout" << std::endl;
                } else {
                    std::cout << d->GetName() << " has been already in your group. Unable to add again" << std::endl;
                }
                break;
            case '2':
                choosing = false;
                break;
            case '3':
                choosing = false;
                return;
            default:
                std::cout << "Wrong button, try again!\n";
                break;
            }

        }
    }
}

Dino* game::CreateDino( int i ) {
    switch (i) {
    case 0:
        return CreateTiranosaurus();
        break;
    case 1:
        return CreateStegosaurus();
        break;
    case 2:
        return CreateTriceratops();
        break;
    case 3:
        return CreateDiplodoc();
    case 4:
        return CreatePterodactyl();
    case 5:
    default:
        break;
    }

    return nullptr;
}

void game::BuyInAShop(void) {
    std::cout << "\n\nYour balance: " << money << "\n\n";

    for (int i = 0; i < all_dinos.size(); ++i) {
        bool choosing = true;

        std::cout << "Price: " << all_dinos[i]->GetCost() << '\n';
        std::cout << "Name: " << all_dinos[i]->GetName() << '\n';
        std::cout << "Health: " << all_dinos[i]->GetHealth() << '\n';
        std::cout << "Intelligence: " << all_dinos[i]->GetInt() << '\n';
        std::cout << "Strength: " << all_dinos[i]->GetStrength() << '\n';
        std::cout << "Dexterity: " << all_dinos[i]->GetDex() << '\n';
        std::cout << "View: " << all_dinos[i]->GetASCII() << '\n';

        while (choosing) {
            std::cout << buy_menu;

            char j;

            std::cin >> j;

            switch (j) {
            case '1':
                if (money >= all_dinos[i]->GetCost()) {
                    money -= all_dinos[i]->GetCost();

                    choosing = false;
                    std::cout << "\n\n" << all_dinos[i]->GetName() << " has been added into your inventory\n" << std::endl;
                    my_dinos.push_back(CreateDino(i));
                }
                else {
                    std::cout << "You dont have enough money to buy this one, go and win in fights to earn money!\n";
                }
                break;
            case '2':
                choosing = false;
                break;
            case '3':
                choosing = false;
                Save();
                return;
            default:
                std::cout << "Wrong button, try again!\n";
                break;
            }
            
        }
    }

    Save();
}

void game::CreateEnemyLoadout( void ) {
    int r = rand() % 2 + 1;

    for (int i = 0; i < r; ++i) {
        enemy_dinos.push_back(CreateRandomDinosaur());
    }
}

void game::DeleteDinoFromEnemyDinos( int en_ind ) {
    std::vector<Dino*> new_enemy;

    for (int i = 0; i < enemy_dinos.size(); ++i) {
        if (i == en_ind) {
            delete enemy_dinos[i];
            enemy_dinos[i] = nullptr;
        }
        else {
            new_enemy.push_back(std::move(enemy_dinos[i]));
        }
    }

    enemy_dinos.clear();

    enemy_dinos = std::move(new_enemy);
}

void game::CheckDinoStates( void ) {
    for (int i = 0; i < my_dino_group.size(); ++i) {
        if (my_dino_group[i]->GetHealth() <= 0) {
            DeleteDinoFromMyDinosAndGroup(i);
            i = 0;
        }
    }

    if (!is_fighting) {
        for (int i = 0; i < enemy_dinos.size(); ++i) {
            delete enemy_dinos[i];
            enemy_dinos[i] = nullptr;
        }

        enemy_dinos.clear();
    } else {
        for (int i = 0; i < enemy_dinos.size(); ++i) {
            if (enemy_dinos[i]->GetHealth() <= 0) {
                DeleteDinoFromEnemyDinos(i);
                i = 0;
            }
        }
    }
}

void game::DeleteDinoFromMyDinosAndGroup(int group_ind) {
    std::vector<Dino*> new_my_dinos{}, new_my_dino_group{};

    for (int i = 0; i < my_dino_group.size(); ++i) {
        if (i != group_ind) {
            new_my_dino_group.push_back(std::move(my_dino_group[i]));
        }
        else {
            for (int j = 0; j < my_dinos.size(); ++j) {
                if (my_dino_group[i] == my_dinos[j]) {
                    my_dinos[j] = nullptr;
                    break;
                }
            }

            delete my_dino_group[i];

            my_dino_group[i] = nullptr;
        }
    }

    my_dino_group.clear();

    my_dino_group = std::move(new_my_dino_group);

    for (int i = 0; i < my_dinos.size(); ++i) {
        if (my_dinos[i] != nullptr) {
            new_my_dinos.push_back(std::move(my_dinos[i]));
        }
    }

    my_dinos.clear();

    my_dinos = std::move(new_my_dinos);
}

bool game::FoundInGroup(Dino* dinosaur) {
    for (auto& d : my_dino_group) {
        if (d == dinosaur) {
            return true;
        }
    }

    return false;
}

void game::FightInitiation( void ) {
    CheckDinoStates();

    is_fighting = true;

    CreateEnemyLoadout();

    fight_terrain = GetRandTerrain();

    std::cout << "\nEnemy dinosaurs: \n\n";

    for (auto& d : enemy_dinos) {
        std::cout << "Name: " << d->GetName() << '\n';
        std::cout << "Health: " << d->GetHealth() << '\n';
        std::cout << "Intelligence: " << d->GetInt() << '\n';
        std::cout << "Strength: " << d->GetStrength() << '\n';
        std::cout << "Dexterity: " << d->GetDex() << '\n';
        std::cout << "View: " << d->GetASCII() << '\n';
    }
}

void game::FightEnd( void ) {
    int grow = 0;

    if (enemy_dinos.size() > my_dino_group.size()) {
        std::cout << "\n\n!!! LOSE !!!\n\n";
    } else if (enemy_dinos.size() == my_dino_group.size()) {
        grow = rand() % 50 + 25;
        money += grow;
        std::cout << "\n\n!!! DRAW !!!\n\n+" << grow << " to the balance, total: " << money << std::endl;
    } else if (enemy_dinos.size() < my_dino_group.size()) {
        grow = rand() % 100 + 100;
        money += grow;
        std::cout << "\n\n!!! WIN !!!\n\n+" << grow << " to the balance, total: " << money << std::endl;
    }

    Save();
}

void game::Attack(std::vector<Dino*>& v1, std::vector<Dino*>& v2) {
    for (int i = 0; i < v1.size(); ++i) {
        if (v2[0]->GetHealth() > 0) {
            v2[0]->SetHealth(v2[0]->GetHealth() - v1[i]->damage(fight_terrain));
        } else if (v2.size() > 1) {
            v2[1]->SetHealth(v2[1]->GetHealth() - v1[i]->damage(fight_terrain));
        }
    }

    for (int i = 0; i < v2.size(); ++i) {
        if (v1[0]->GetHealth() > 0) {
            v1[0]->SetHealth(v1[0]->GetHealth() - v2[i]->damage(fight_terrain));
        }
        else if (v1.size() > 1) {
            v1[1]->SetHealth(v1[1]->GetHealth() - v2[i]->damage(fight_terrain));
        }
    }
}

void game::Fight( void ) {
    FightInitiation();

    int c = 1;

    std::cout << "\nCurrent terrain: ";
    switch (fight_terrain) {
    case Terrain::Plain:
        std::cout << "Plain";
        break;
    case Terrain::Mountain:
        std::cout << "Mountain";
        break;
    case Terrain::River:
        std::cout << "River";
        break;
    }

    while (is_fighting) {
        std::cout << std::endl << c++ << ".\n";

        std::cout << "Your dinosaurs: \n";

        for (int i = 0; i < my_dino_group.size(); ++i) {
            std::cout << i + 1 << ") " << my_dino_group[i]->GetName() << " health: " << my_dino_group[i]->GetHealth() << '\n';
        }

        std::cout << "Enemy dinosaurs: \n";

        for (int i = 0; i < enemy_dinos.size(); ++i) {
            std::cout << i + 1 << ") " << enemy_dinos[i]->GetName() << " health: " << enemy_dinos[i]->GetHealth() << '\n';
        }

        Attack(my_dino_group, enemy_dinos);

        CheckDinoStates();

        if (my_dino_group.size() <= 0 || enemy_dinos.size() <= 0) {
                is_fighting = false;
        }
    }

    FightEnd();
}

void game::Load(void) {
    std::ifstream f;

    f.open(filename);

    if (!f.is_open()) {
        return;
    }

    f.read((char*)&money, 4);

    int mds = 0;
    f.read((char*)&mds, 4);
    my_dinos.resize(mds);

    for (int i = 0; i < mds; ++i) {
        int type = 0;

        f.read((char*)&type, sizeof(int));
        int k = 0;

        switch (type) {
        case 0: {
            DinoStr dn1;
            int size = 0, val = 0;
            std::string tmp_s = "";

            f.read((char*)&size, 4);
            tmp_s.resize(size);
            f.read(&tmp_s[0], size);
            dn1.SetName(tmp_s);

            f.read((char*)&val, 4);
            dn1.SetInt(val);
            f.read((char*)&val, 4);
            dn1.SetHealth(val);
            f.read((char*)&val, 4);
            dn1.SetDex(val);
            f.read((char*)&val, 4);
            dn1.SetStrength(val);

            dn1.SetASCII(GetASCIIByName(dn1.GetName()));

            my_dinos[i] = new DinoStr(dn1);
            break;
        }
        case 1: {
            DinoDex dn2;
            int size = 0, val = 0;
            std::string tmp_s = "";

            f.read((char*)&size, 4);
            tmp_s.resize(size);
            f.read(&tmp_s[0], size);
            dn2.SetName(tmp_s);

            f.read((char*)&val, 4);
            dn2.SetInt(val);
            f.read((char*)&val, 4);
            dn2.SetHealth(val);
            f.read((char*)&val, 4);
            dn2.SetDex(val);
            f.read((char*)&val, 4);
            dn2.SetStrength(val);

            dn2.SetASCII(GetASCIIByName(dn2.GetName()));

            my_dinos[i] = new DinoDex(dn2);
            break;
        }
        case 2: {
            DinoInt dn3;
            int size = 0, val = 0;
            std::string tmp_s = "";

            f.read((char*)&size, 4);
            tmp_s.resize(size);
            f.read(&tmp_s[0], size);
            dn3.SetName(tmp_s);

            f.read((char*)&val, 4);
            dn3.SetInt(val);
            f.read((char*)&val, 4);
            dn3.SetHealth(val);
            f.read((char*)&val, 4);
            dn3.SetDex(val);
            f.read((char*)&val, 4);
            dn3.SetStrength(val);

            dn3.SetASCII(GetASCIIByName(dn3.GetName()));

            my_dinos[i] = new DinoInt(dn3);
            break;
        }
        }
    }
}

void game::Save() {
    std::ofstream f;

    f.open(filename);

    f.write((char*)&money, sizeof(int));

    int sz = my_dinos.size();
    f.write((char*)&sz, sizeof(int));

    for (int i = 0; i < my_dinos.size(); ++i) {
        int type = 0;

        if (my_dinos[i]->GetDex() > my_dinos[i]->GetInt() && my_dinos[i]->GetDex() > my_dinos[i]->GetStrength()) {
            type = 1;
        }
        else if (my_dinos[i]->GetInt() > my_dinos[i]->GetDex() && my_dinos[i]->GetInt() > my_dinos[i]->GetStrength()) {
            type = 2;
        }

        f.write((char*)&type, sizeof(int));

        std::string s = my_dinos[i]->GetName();
        int size = s.size();
        f.write((char*)&size, 4);
        f.write(s.c_str(), size);
        int val = my_dinos[i]->GetInt();
        f.write((char*)&val, 4);
        val = my_dinos[i]->GetHealth();
        f.write((char*)&val, 4);
        val = my_dinos[i]->GetDex();
        f.write((char*)&val, 4);
        val = my_dinos[i]->GetStrength();
        f.write((char*)&val, 4);
    }
}