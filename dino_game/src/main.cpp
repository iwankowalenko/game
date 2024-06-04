#include <iostream>

#include "game.hpp"

enum class act {
    show_menu,
    fight,
    show_all_dinos,
    show_my_dinos,
    shop,
    choose,
};

int main() {
    bool play_flag = true;
    game dino_game;
    act action = act::show_menu;

    while (play_flag) {
        switch (action) {
        case act::show_menu:
            std::cout << dino_game.game_menu;

            char input;

            std::cin >> input;

            switch (input) {
            default:
                std::cout << "\nUnknown button! Try again\n";
                break;
            case '6':
                dino_game.Save();
                exit(0);
                break;
            case '1':
                action = act::show_all_dinos;
                break;
            case '2':
                action = act::show_my_dinos;
                break;
            case '3':
                action = act::shop;
                break;
            case '4':
                action = act::fight;
                break;
            case '5':
                action = act::choose;
                break;
            }
            break;
        case act::fight:
            if (dino_game.my_dino_group.size() > 0) {
                dino_game.Fight();

                std::cout << "Press enter to continue...\n";

                getchar();
                getchar();
            } else {
                std::cout << "\nNo dinosaurs in fight group. Press 5 to add some\n";
            }

            action = act::show_menu;

            break;
        case act::shop:
            dino_game.BuyInAShop();

            std::cout << "Press enter to continue...\n";

            getchar();
            getchar();

            action = act::show_menu;

            break;
        case act::choose:
            dino_game.ChooseDinosInGroup();
            std::cout << "Press enter to continue...\n";

            getchar();
            getchar();

            action = act::show_menu;

            break;
        case act::show_all_dinos:
            dino_game.ShowAllDinosaurs();

            std::cout << "Press enter to continue...\n";

            getchar();
            getchar();

            action = act::show_menu;
            break;
        case act::show_my_dinos:
            dino_game.ShowMyDinosaurs();

            std::cout << "Press enter to continue...\n";

            getchar();
            getchar();

            action = act::show_menu;
            break;
        }
    }
}