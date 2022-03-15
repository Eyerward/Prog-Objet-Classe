#include "Guerrier.h"
#include "Voleur.h"
#include <random>

void testAttack(Personnage& p, Personnage& e) {
    p.attack(e);
}

int main() {

    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 2);
    

    SetConsoleOutputCP(1252);    //Activation des accents
    
                                 
   //Construction par defaut
   /* 
    Personnage p1;

    //Construction par defaut + modification des variables
    Personnage p2;
    p2.setName("Gerard");
    p2.setHealth(80);
    p2.setForce(20);
    p2.setDefense(2);
    p2.setPnj(false);

    //Construction surcharge
    Personnage p3("Theo", 50, 30, 15, true);

    //Affichage des infos
    cout << "infos de P1 : " << endl << p1;
    cout << "infos de P2 : " << endl << p2;
    cout << "infos de P3 : " << endl << p3;

    //p3 attaque p2
    p3.attack(p2);
    cout << "infos de P2 : " << endl << p2;

    //Comparaison entre le name de p2 et p3
    if (p2 > p3) cout << "p2 superieur a p3";
    else cout << "p2 inferieur a p3";

    cout << endl;*/

    Voleur player("LeVoleur1", 300, 150, 100, false);
    cout << endl;
    Guerrier enemy("LeGuerrier1",300,150,100,true,30);
    cout << endl;

    Voleur v2("LeVoleur2", 300, 150, 100, false);
    cout << endl;
    Guerrier g2("LeGuerrier2", 300, 150, 100, true, 30);
    cout << endl;



    vector<Personnage*> team;
    team.push_back(&player);
    team.push_back(&v2);
    team.push_back(&enemy);
    team.push_back(&g2);

    for (int i = 0; i < team.size(); i++)
    {
        cout << *team[i] << endl;
    }



    /*while (player.getHealth() > 0 && enemy.getHealth() > 0) {
        cout << player << endl;
        cout << enemy << endl;
        int choice = 0;
        cout << "1 - Attack" << endl << "2 - Berserk" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            //testAttack(player, enemy);
            player.attack(enemy);
            break;
        case 2:
            //player.berserk();
            break;
        default:
            cout << "1 ou 2 bordel est-ce si compliqué ?!" << endl;
            break;
        }

        int enemyChoice = distribution(generator);

        switch (enemyChoice) {
        case 1:
            enemy.attack(player);
            break;
        case 2:
            enemy.berserk();
            break;
        default:
            cout << "1 ou 2 bordel est-ce si compliqué ?!" << endl;
            break;
        }

    }*/
} //FIN