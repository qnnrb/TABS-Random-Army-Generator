#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cstring>

using namespace std;

int main(){

    cout << "Totally Accurate Battle Simulator Random Team Creator" << endl;
    srand(time(0));

    struct unit {
        string name;
        int price;
        int amount;
    }; 

    struct faction {
        unit units[7];
        string name;
    };

    faction factions[10];
    
    //0 --- Tribal faction ---
    factions[0].name = "Tribal";

        //0 Clubber (70)
        factions[0].units[0].name = "Clubber";
        factions[0].units[0].price = 70;
        factions[0].units[0].amount = 0;
        
        //1 Protector (80)
        factions[0].units[1].name = "Protector";
        factions[0].units[1].price = 80;
        factions[0].units[1].amount = 0;

        //2 Spear Thrower (120)
        factions[0].units[2].name = "Spear Thrower";
        factions[0].units[2].price = 120;
        factions[0].units[2].amount = 0;

        //3 Stoner (160)
        factions[0].units[3].name = "Stoner";
        factions[0].units[3].price = 160;
        factions[0].units[3].amount = 0;

        //4 Bone Mage (300)
        factions[0].units[4].name = "Bone Mage";
        factions[0].units[4].price = 300;
        factions[0].units[4].amount = 0;

        //5 Chieftain (400)
        factions[0].units[5].name = "Chieftan";
        factions[0].units[5].price = 400;
        factions[0].units[5].amount = 0;

        //6 Mammoth(2200)
        factions[0].units[6].name = "Mammoth";
        factions[0].units[6].price = 2200; 
        factions[0].units[6].amount = 0;


    //1 ---  Farmer --- 
    factions[1].name = "Farmer";

        // Halfling (50)
        factions[1].units[0].name = "Halfling";
        factions[1].units[0].price = 50;
        factions[1].units[0].amount = 0;

        // Farmer (80)
        factions[1].units[1].name = "Farmer";
        factions[1].units[1].price = 80;
        factions[1].units[1].amount = 0;

        // Hay Baler (140)
        factions[1].units[2].name = "Hay Baler";
        factions[1].units[2].price = 140;
        factions[1].units[2].amount = 0;

        // Potionseller (340)
        factions[1].units[3].name = "Potionseller";
        factions[1].units[3].price = 340;
        factions[1].units[3].amount = 0;

        // Harvester (500)
        factions[1].units[4].name = "Harvester";
        factions[1].units[4].price = 500;
        factions[1].units[4].amount = 0;

        // Wheelbarrow (1000)
        factions[1].units[5].name = "Wheelbarrow";
        factions[1].units[5].price = 1000;
        factions[1].units[5].amount = 0;

        // Scarecrow (1200)
        factions[1].units[6].name = "Scarecrow";
        factions[1].units[6].price = 1200;
        factions[1].units[6].amount = 0;


    //2 --- Medieval --- 
    factions[2].name = "Medieval";

        //0 Bard (60)
        factions[2].units[0].name = "Bard";
        factions[2].units[0].price = 60;
        factions[2].units[0].amount = 0;

        //1 Squire (100)
        factions[2].units[1].name = "Squire";
        factions[2].units[1].price = 100;
        factions[2].units[1].amount = 0;

        //2 Archer (140)
        factions[2].units[2].name = "Archer";
        factions[2].units[2].price = 140;
        factions[2].units[2].amount = 0;

        //3 Healer (180)
        factions[2].units[3].name = "Healer";
        factions[2].units[3].price = 180;
        factions[2].units[3].amount = 0;

        //4 Knight (650)
        factions[2].units[4].name = "Knight";
        factions[2].units[4].price = 650;
        factions[2].units[4].amount = 0;

        //5 Catapult (1000)
        factions[2].units[5].name = "Catapult";
        factions[2].units[5].price = 1000;
        factions[2].units[5].amount = 0;

        //6 The King (1500)
        factions[2].units[6].name = "The King";
        factions[2].units[6].price = 1500;
        factions[2].units[6].amount = 0;


    //3 --- Ancient --- 
    factions[3].name = "Ancient";

        //0 Shield Bearer (100)
        factions[3].units[0].name = "Shield Bearer";
        factions[3].units[0].price = 100;
        factions[3].units[0].amount = 0;

        //1 Sarissa (120)
        factions[3].units[1].name = "Sarissa";
        factions[3].units[1].price = 120;
        factions[3].units[1].amount = 0;

        //2 Hoplite (180)
        factions[3].units[2].name = "Hoplite";
        factions[3].units[2].price = 180;
        factions[3].units[2].amount = 0;

        //3 Snake Archer (300)
        factions[3].units[3].name = "Snake Archer";
        factions[3].units[3].price = 300;
        factions[3].units[3].amount = 0;

        //4 Ballista (900)
        factions[3].units[4].name = "Ballista";
        factions[3].units[4].price = 900;
        factions[3].units[4].amount = 0;

        //5 Minotaur (1600)
        factions[3].units[5].name = "Minotaur";
        factions[3].units[5].price = 1600;
        factions[3].units[5].amount = 0;

        //6 Zeus (2000)
        factions[3].units[6].name = "Zeus";
        factions[3].units[6].price = 2000;
        factions[3].units[6].amount = 0;

    //4 --- Viking --- 
    factions[4].name = "Viking";

        //0 Headbutter (90)
        factions[4].units[0].name = "Headbutter";
        factions[4].units[0].price = 90;
        factions[4].units[0].amount = 0;

        //1 Ice Archer (160)
        factions[4].units[1].name = "Ice Archer";
        factions[4].units[1].price = 160;
        factions[4].units[1].amount = 0;

        //2 Brawler (220)
        factions[4].units[2].name = "Brawler";
        factions[4].units[2].price = 220;
        factions[4].units[2].amount = 0;

        //3 Berserker (250)
        factions[4].units[3].name = "Berserker";
        factions[4].units[3].price = 250;
        factions[4].units[3].amount = 0;

        //4 Valkyrie (500)
        factions[4].units[4].name = "Valkyrie";
        factions[4].units[4].price = 500;
        factions[4].units[4].amount = 0;

        //5 Longship (1000)
        factions[4].units[5].name = "Longship";
        factions[4].units[5].price = 1000;
        factions[4].units[5].amount = 0;

        //6 Jarl (1500)
        factions[4].units[6].name = "Jarl";
        factions[4].units[6].price = 1500;
        factions[4].units[6].amount = 0;


    //5 --- Dynasty ---
    factions[5].name = "Dynasty";

        //0 Samurai (140)
        factions[5].units[0].name = "Samurai";
        factions[5].units[0].price = 140;
        factions[5].units[0].amount = 0;

        //1 Firework Archer (180)
        factions[5].units[1].name = "Firework Archer";
        factions[5].units[1].price = 180;
        factions[5].units[1].amount = 0;

        //2 Monk (250)
        factions[5].units[2].name = "Monk";
        factions[5].units[2].price = 250;
        factions[5].units[2].amount = 0;

        //3 Ninja (500)
        factions[5].units[3].name = "Ninja";
        factions[5].units[3].price = 500;
        factions[5].units[3].amount = 0;

        //4 Dragon (1000)
        factions[5].units[4].name = "Dragon";
        factions[5].units[4].price = 1000;
        factions[5].units[4].amount = 0;

        //5 Hwacha (1500)
        factions[5].units[5].name = "Hwacha";
        factions[5].units[5].price = 1500;
        factions[5].units[5].amount = 0;

        //6 Monkey King (2000) 
        factions[5].units[6].name = "Monkey King";
        factions[5].units[6].price = 2000;
        factions[5].units[6].amount = 0;


    //6 --- Renaissance --- 
    factions[6].name = "Renaissance";

        //0 Painter (50)
        factions[6].units[0].name = "Painter";
        factions[6].units[0].price = 50;
        factions[6].units[0].amount = 0;

        //1 Fencer (150)
        factions[6].units[1].name = "Fencer";
        factions[6].units[1].price = 150;
        factions[6].units[1].amount = 0;

        //2 Balloon Archer (200)
        factions[6].units[2].name = "Balloon Archer";
        factions[6].units[2].price = 200;
        factions[6].units[2].amount = 0;

        //3 Musketeer (250)
        factions[6].units[3].name = "Musketeer";
        factions[6].units[3].price = 250;
        factions[6].units[3].amount = 0;

        //4 Halberd (400)
        factions[6].units[4].name = "Halberd";
        factions[6].units[4].price = 400;
        factions[6].units[4].amount = 0;

        //5 Jouster (1000)
        factions[6].units[5].name = "Jouster";
        factions[6].units[5].price = 1000;
        factions[6].units[5].amount = 0;

        //6 Da Vinci Tank (4000)
        factions[6].units[6].name = "Da Vinci Tank";
        factions[6].units[6].price = 4000;
        factions[6].units[6].amount = 0;


    //7 --- Pirate --- 
    factions[7].name = "Pirate";

        //0 Flintlock (100)
        factions[7].units[0].name = "Flintlock";
        factions[7].units[0].price = 100;
        factions[7].units[0].amount = 0;

        //1 Blunderbuss (160)
        factions[7].units[1].name = "Blunderbuss";
        factions[7].units[1].price = 160;
        factions[7].units[1].amount = 0;

        //2 Bomb Thrower (250)
        factions[7].units[2].name = "Bomb Thrower";
        factions[7].units[2].price = 250;
        factions[7].units[2].amount = 0;

        //3 Harpooner (300)
        factions[7].units[3].name = "Harpooner";
        factions[7].units[3].price = 300;
        factions[7].units[3].amount = 0;

        //4 Cannon (1000)
        factions[7].units[4].name = "Cannon";
        factions[7].units[4].price = 1000;
        factions[7].units[4].amount = 0;

        //5 Captain (1500)
        factions[7].units[5].name = "Captain";
        factions[7].units[5].price = 1500;
        factions[7].units[5].amount = 0;

        //6 Pirate Queen (2500)
        factions[7].units[6].name = "Pirate Queen";
        factions[7].units[6].price = 2500;
        factions[7].units[6].amount = 0;


    //8 --- Spooky ---
    factions[8].name = "Spooky";

        //0 Skeleton Warrior (80)
        factions[8].units[0].name = "Skeleton Warrior";
        factions[8].units[0].price = 80;
        factions[8].units[0].amount = 0;

        //1 Skeleton Archer (180)
        factions[8].units[1].name = "Skeleton Archer";
        factions[8].units[1].price = 180;
        factions[8].units[1].amount = 0;

        //2 Candlehead (200)
        factions[8].units[2].name = "Candlehead";
        factions[8].units[2].price = 200;
        factions[8].units[2].amount = 0;

        //3 Vampire (200)
        factions[8].units[3].name = "Vampire";
        factions[8].units[3].price = 200;
        factions[8].units[3].amount = 0;

        //4 Pumpkin Catapult (1000)
        factions[8].units[4].name = "Pumpkin Catapult";
        factions[8].units[4].price = 1000;
        factions[8].units[4].amount = 0;

        //5 Swordcaster (1000)
        factions[8].units[5].name = "Swordcaster";
        factions[8].units[5].price = 1000;
        factions[8].units[5].amount = 0;

        //6 Reaper (2500)
        factions[8].units[6].name = "Reaper";
        factions[8].units[6].price = 2500;
        factions[8].units[6].amount = 0;


    //9 --- Wild West ---
    factions[9].name = "Wild West";

        //0 Dynamite Thrower (100)
        factions[9].units[0].name = "Dynamite Thrower";
        factions[9].units[0].price = 100;
        factions[9].units[0].amount = 0;

        //1 Miner (200)
        factions[9].units[1].name = "Miner";
        factions[9].units[1].price = 200;
        factions[9].units[1].amount = 0;

        //2 Cactus (432)
        factions[9].units[2].name = "Cactus";
        factions[9].units[2].price = 432;
        factions[9].units[2].amount = 0;

        //3 Gunslinger (650)
        factions[9].units[3].name = "Gunslinger";
        factions[9].units[3].price = 650;
        factions[9].units[3].amount = 0;

        //4 Lasso (740)
        factions[9].units[4].name = "Lasso";
        factions[9].units[4].price = 740;
        factions[9].units[4].amount = 0;

        //5 Deadeye (900)
        factions[9].units[5].name = "Deadeye";
        factions[9].units[5].price = 900;
        factions[9].units[5].amount = 0;

        //6 Quick Draw (1200)
        factions[9].units[6].name = "Quick Draw";
        factions[9].units[6].price = 1200;
        factions[9].units[6].amount = 0;


    int totalPrice = 0;
    int maxPrice;
    int totalUnits = 0;
    bool breakLoop = true;
    int test;
    cout << "Enter maximum price for your team (must be greater than or equal to 50): ";
    cin >> maxPrice;

    while (maxPrice < 50){
        cout << "Maximum price must be greater than 50" << endl;
        cout << "Enter maximum price for your team (must be greater than or equal to 50): ";
        cin >> maxPrice;
    }
    cout << "Enter [1] for each individual unit to be picked randomly" << endl << "Enter [2] to pick a random unit, and then add a random amount of it" << endl;
    int choice;
    cin >> choice;

    // will pick a random unit and add one of it to the team
    if (choice == 1){
        do {

            int randNum = rand() % 10;
            int randUnit = rand() % 7;

            if ((totalPrice + factions[randNum].units[randUnit].price) <= maxPrice ){
                totalPrice += factions[randNum].units[randUnit].price;
                //cout << factions[randNum].units[randUnit].name << " added" << endl;
                factions[randNum].units[randUnit].amount++;
                //cout << "New total price: " << totalPrice << endl;
                totalUnits++;
            }


            for (int i = 0; i < 10; i++){
                for (int j = 0; j < 7; j++){
                    test = totalPrice + factions[1].units[j].price;
                    if (test <= maxPrice){
                        breakLoop = false;
                        break;
                    }
                        
                    else {
                        breakLoop = true;
                    }
                }
                    
                if (breakLoop == false){
                    break;
                }
            }
        } while(breakLoop == false && totalPrice != maxPrice);

        cout << "Total Price: " << totalPrice << endl;
        cout << "Total Units: " << totalUnits << endl;
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 7; j++){
                if (factions[i].units[j].amount > 0){
                    cout << factions[i].units[j].name << ": " << factions[i].units[j].amount << " (" << factions[i].name << ") " << endl;
                }  
            }
        } 
    }

    // will pick a random unit and add a random amount of it to the team
    else {
        do {

            int randNum = rand() % 10;
            int randUnit = rand() % 7;
            int randAmount; 

            if (factions[randNum].units[randUnit].price > 2000){
                randAmount = rand() % 3 + 1;
            }

            else if (factions[randNum].units[randUnit].price <= 2000 && factions[randNum].units[randUnit].price > 1000){
                randAmount = rand() % 5 + 1;
            }

            else if (factions[randNum].units[randUnit].price <= 1000 && factions[randNum].units[randUnit].price > 500){
                randAmount = rand() % 9 + 1;
            }

            else if (factions[randNum].units[randUnit].price <= 500 && factions[randNum].units[randUnit].price > 250){
                randAmount = rand() % 15 + 1;
            }

            else {
                randAmount = rand() % 23 + 1;
            }

            if ((totalPrice + (factions[randNum].units[randUnit].price) * randAmount) <= maxPrice){
                totalPrice += (factions[randNum].units[randUnit].price * randAmount);
                //cout << factions[randNum].units[randUnit].name << " added" << endl;
                factions[randNum].units[randUnit].amount += randAmount;
                //cout << "New total price: " << totalPrice << endl;
                totalUnits += randAmount;
            }


            for (int i = 0; i < 10; i++){
                for (int j = 0; j < 7; j++){
                    test = totalPrice + factions[1].units[j].price;
                    if (test <= maxPrice){
                        breakLoop = false;
                        break;
                    }
                        
                    else {
                        breakLoop = true;
                    }
                }
                    
                if (breakLoop == false){
                    break;
                }
            }
        } while(breakLoop == false && totalPrice != maxPrice);

        cout << "Total Price: " << totalPrice << endl;
        cout << "Total Units: " << totalUnits << endl;
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 7; j++){
                if (factions[i].units[j].amount > 0){
                    cout << factions[i].units[j].name << ": " << factions[i].units[j].amount << " (" << factions[i].name << ") " << endl;
                }  
            }
        } 
    }

    return 0;
}