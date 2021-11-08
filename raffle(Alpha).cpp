#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
int main() {

    //made in c++ brought to you by Bjarne Stroustrup, MinGW, GitHub, Sourceforge, and Christopher Sandoval ;)
    //winning number = 8
    srand(time(0));
    //variables
    //rands
    //example variable, pls ignore this :)
    int EX_RAND = rand() % 10 + 1;
    //names that are actually reasonable in length
    int Ms_Dymowski = rand() % 10 + 1;
    int Christopher_Sandoval = rand() % 10 + 1;
    int Ayden_West = rand() % 10 + 1;
    int Noah_McDaniel = rand() % 10 + 1;
    int Gianna_Ballesteros = rand() % 10 + 1;
    int Kyleigh_Wright = rand() % 10 + 1;
    int Jeracho_Bernstein = rand() % 10 + 1;
    int Heaven_Youngblood = rand() % 10 + 1;
    int Evan_Smith = rand() % 10 + 1;
    int Gianna_Carmena = rand() % 10 + 1;
    int Moses_Frias = rand() % 10 + 1;
    int James_Ceron = rand() % 10 + 1;
    int Caiden_Chadwick = rand() % 10 + 1;
    int Sydney_Cobb = rand() % 10 + 1;
    int Jenna_Khalifa = rand() % 10 + 1;
    int Jameson_Murphey = rand() % 10 + 1;
    int Meredith_Valladares = rand() % 10 + 1;
    int Alyssa_Dominguez = rand() % 10 + 1;
    int Dyego_Ornelas = rand() % 10 + 1;
    int Jatara_Quinn = rand() % 10 + 1;
    int Lauren_Hernandez = rand() % 10 + 1;
    //long names that i couldnt bother to put with 999 underscores, section.
    int M_LONGNAME = rand() % 10 + 1;
    int MM_LONGNAME = rand() % 10 + 1;
    int K_LONGNAME = rand() % 10 + 1;
    //modifiers
    //example variable, pls ignore this :)
    char EX_MOD;
    //names that are actually reasonable in length
    char Ms_Dymowski_Modifier;
    char Christopher_Sandoval_Modifier;
    char Ayden_West_Modifier;
    char Noah_McDaniel_Modifier;
    char Gianna_Ballesteros_Modifier;
    char Kyleigh_Wright_Modifier;
    char Jeracho_Bernstein_Modifier;
    char Heaven_Youngblood_Modifier;
    char Evan_Smith_Modifier;
    char Gianna_Carmena_Modifier;
    char Moses_Frias_Modifier;
    char James_Ceron_Modifier;
    char Caiden_Chadwick_Modifier;
    char Sydney_Cobb_Modifier;
    char Jenna_Khalifa_Modifier;
    char Jameson_Murphey_Modifier;
    char Meredith_Valladares_Modifier;
    char Alyssa_Dominguez_Modifier;
    char Dyego_Ornelas_Modifier;
    char Jatara_Quinn_Modifier;
    char Lauren_Hernandez_Modifier;
    //long names that i couldnt bother to put with 999 underscores, section.
    char M_LONGNAME_Modifier;
    char MM_LONGNAME_Modifier;
    char K_LONGNAME_Modifier;
    //misc variables
    char yn;
    int counter = 0;
    //variables

    /* template for the rand()
    //EXAMPLE rand()
    std::cout << "Chances for EX_RAND,\n";
    std::cin >> EX_RAND;
    switch (EX_MOD)
    {
    case 'd':
        EX_RAND = rand() % 10 + 1;
        break;
    case '2':
        EX_RAND = rand() % 10 + 2;
        break;
    case '3':
        EX_RAND = rand() % 10 + 3;
        break;
    case '4':
        EX_RAND = rand() % 10 + 4;
        break;
    case '5':
        EX_RAND = rand() % 10 + 5;
        break;
    case '6':
        EX_RAND = rand() % 10 + 6;
        break;
    case '7':
        EX_RAND = rand() % 10 + 7;
        break;
    case '8':
        EX_RAND = rand() % 10 + 8;
        break;
    case 'c':
        EX_RAND = 0;
        break;
    case 'w':
        EX_RAND = 99;
        counter += 1;
        break;
    default:
        break;
    }



    if (EX_RAND == 8) {
        std::cout << "You got the number 8!\n";
        std::cout << "You won EX_RAND!\n";
        counter += 1;
    }

    else if (EX_RAND == 99) {
        std::cout << "\n";
    }

    else if (EX_RAND == 'c') {
        std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
    }

    else {
        std::cout << "Unfortunately you didn't get the number 8, EX_RAND\n";
        std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
    } */



//btw 0 isnt possible cuz ye
    std::cout << "Alright Mrs.Dymowski lets do this! \n";
    std::cout << "First input what chances you want each student to have.\n";
    std::cout << "Winning number is 8, if no one gets 8 then run it again. \n";
    std::cout << "If two or more people get the number 8 then rerun the program until there is one person that has the number 3.\n";
    std::cout << "How to input:\n";
    std::cout << "example: '3'. This would lead to 3-10\n";
    std::cout << "By default all participants will have 1-10\n";
    std::cout << "You can only input '2', '3', '4', '5', '6', '7', '8' since the winning number is 8\n";
    std::cout << "If you want a student to only have 1-10 by default enter: 'd' \n";
    std::cout << "If you want a student to not have any chances to win input: 'c' \n";
    std::cout << "If you want a student to instantly win input:'w' \n";

    //Ms Dymowski Rand() best techer ever :)
    std::cout << "Chances for you Mrs. Dymowski,\n";
    std::cin >> Ms_Dymowski_Modifier;

    switch (Ms_Dymowski_Modifier)
    {
    case 'd':
        Ms_Dymowski = rand() % 10 + 1;
        break;
    case '2':
        Ms_Dymowski = rand() % 10 + 2;
        break;
    case '3':
        Ms_Dymowski = rand() % 10 + 3;
        break;
    case '4':
        Ms_Dymowski = rand() % 10 + 4;
        break;
    case '5':
        Ms_Dymowski = rand() % 10 + 5;
        break;
    case '6':
        Ms_Dymowski = rand() % 10 + 6;
        break;
    case '7':
        Ms_Dymowski = rand() % 10 + 7;
        break;
    case '8':
        Ms_Dymowski = rand() % 10 + 8;
        break;
    case 'c':
        Ms_Dymowski = 0;
        break;
    case 'w':
        Ms_Dymowski = 99;
        counter += 1;
        break;
    default:
        break;
    }



    if (Ms_Dymowski == 8) {
        std::cout << "You got the number 8!\n";
        std::cout << "You won Mrs Dymowski!\n";
        counter += 1;
    }

    else if (Ms_Dymowski == 99) {
        std::cout << "ok lol mrs dymowski won cuz she felt like it...\n";
        std::cout << "\n";
    }

    else if (Ms_Dymowski == 'c') {
        std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
        std::cout << "wait ur mrs dymowski why would you cancel yourself?? :/\n";
    }

    else {
        std::cout << "Unfortunately you didn't get the number 8, Mrs.Dymowski\n";
        std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
    }

    //do u wanna continue?
    std::cout << "OK NOW LETS DO THIS (with actual students)";
    std::cout << "Do you want to continue Mrs.Dymowski? (y/n):\n";
    std::cin >> yn;
    if (yn == 'y') {
        std::cout << "\n";
    }

    else {
        std::cout << "Closing Program...";
        return -1;
    }



    //Christopher Sandoval Rand()
    std::cout << "Chances for Christopher Sandoval\n";
    std::cin >> Christopher_Sandoval_Modifier;

    switch (Christopher_Sandoval_Modifier)
    {
    case 'd':
        break;

    case '2':
        Christopher_Sandoval = rand() % 10 + 2;
        break;
    case '3':
        Christopher_Sandoval = rand() % 10 + 3;
        break;
    case '4':
        Christopher_Sandoval = rand() % 10 + 4;
        break;
    case '5':
        Christopher_Sandoval = rand() % 10 + 5;
        break;
    case '6':
        Christopher_Sandoval = rand() % 10 + 6;
        break;
    case '7':
        Christopher_Sandoval = rand() % 10 + 7;
        break;
    case '8':
        Christopher_Sandoval = rand() % 10 + 8;
        break;
    case 'c':
        Christopher_Sandoval = 0;
        break;
    case 'w':
        Christopher_Sandoval = 99;
        std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
        counter += 1;
        break;
    }

    if (Christopher_Sandoval == 8) {
        std::cout << "You got the number 8!\n";
        std::cout << "You won Christopher Sandoval!";
        counter += 1;
    }

    else if (Christopher_Sandoval == 99) {
        std::cout << "\n";
    }

    else if (Christopher_Sandoval == 'c') {
        std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
    }

    else {
        std::cout << "Unfortunately you didn't get the number 8, Christopher Sandoval\n";
        std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
    }

    //rand() Ayden West UwU best friend ever  BFF ;)
    std::cout << "Chances for Ayden West: \n";
    std::cin >> Ayden_West_Modifier;

    switch (Ayden_West_Modifier) {
    case 'd':
        break;

    case '2':
        Ayden_West = rand() % 10 + 2;
        break;
    case '3':
        Ayden_West = rand() % 10 + 3;
        break;
    case '4':
        Ayden_West = rand() % 10 + 4;
        break;
    case '5':
        Ayden_West = rand() % 10 + 5;
        break;
    case '6':
        Ayden_West = rand() % 10 + 6;
        break;
    case '7':
        Ayden_West = rand() % 10 + 7;
        break;
    case '8':
        Ayden_West = rand() % 10 + 8;
        break;
    case 'c':
        Ayden_West = 0;
        break;
    case 'w':
        Ayden_West = 99;
        std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
        counter += 1;
        break;

    }

    if (Ayden_West == 8) {
        std::cout << "You got the number 8!\n";
        std::cout << "You won Ayden West!";
        counter += 1;
    }

    else if (Ayden_West == 99) {
        std::cout << "\n";
    }

    else if (Ayden_West == 'c') {
        std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
    }

    else {
        std::cout << "Unfortunately you didn't get the number 8, Ayden West\n";
        std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
    }

    std::cout << "Chances for Noah McDaniel: \n";
    std::cin >> Noah_McDaniel_Modifier;


    //rand() Noah McDaniel yes yes yes ;)
    switch (Noah_McDaniel_Modifier) {
    case 'd':
        break;

    case '2':
        Noah_McDaniel = rand() % 10 + 2;
        break;
    case '3':
        Noah_McDaniel = rand() % 10 + 3;
        break;
    case '4':
        Noah_McDaniel = rand() % 10 + 4;
        break;
    case '5':
        Noah_McDaniel = rand() % 10 + 5;
        break;
    case '6':
        Noah_McDaniel = rand() % 10 + 6;
        break;
    case '7':
        Noah_McDaniel = rand() % 10 + 7;
        break;
    case '8':
        Noah_McDaniel = rand() % 10 + 8;
        break;
    case 'c':
        Noah_McDaniel = 0;
        break;
    case 'w':
        Noah_McDaniel = 99;
        std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)\n";
        counter += 1;
        break;

        if (Noah_McDaniel == 8) {
            std::cout << "You got the number 8!\n";
            std::cout << "You won Noah McDaniel!";
            counter += 1;
        }

        else if (Noah_McDaniel == 99) {
            std::cout << "\n";
        }

        else if (Noah_McDaniel == 'c') {
            std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
        }

        else {
            std::cout << "Unfortunately you didn't get the number 8, Noah McDaniel\n";
            std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
        }

    }
        // rand()Gianna_Ballesteros :/
            std::cout << "Chances for Gianna Ballesteros: \n";
            std::cin >> Gianna_Ballesteros_Modifier;

            switch (Gianna_Ballesteros_Modifier) {
            case 'd':
                break;

            case '2':
                Gianna_Ballesteros = rand() % 10 + 2;
                break;
            case '3':
                Gianna_Ballesteros = rand() % 10 + 3;
                break;
            case '4':
                Gianna_Ballesteros = rand() % 10 + 4;
                break;
            case '5':
                Gianna_Ballesteros = rand() % 10 + 5;
                break;
            case '6':
                Gianna_Ballesteros = rand() % 10 + 6;
                break;
            case '7':
                Gianna_Ballesteros = rand() % 10 + 7;
                break;
            case '8':
                Gianna_Ballesteros = rand() % 10 + 8;
                break;
            case 'c':
                Gianna_Ballesteros = 0;
                break;
            case 'w':
                Gianna_Ballesteros = 99;
                std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                counter += 1;
                break;
            }
             if (Gianna_Ballesteros == 8) {
                    std::cout << "You got the number 8!\n";
                    std::cout << "You won Gianna Ballesteros!\n";
                    counter += 1;
                }

             else if (Gianna_Ballesteros == 99) {
                    std::cout << "\n";
                }

             else if (Gianna_Ballesteros == 'c') {
                    std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
                }

             else {
                    std::cout << "Unfortunately you didn't get the number 8, Gianna Ballesteros\n";
                    std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
                }

             // rand()Kyleigh_Wright :/
             std::cout << "Chances for Kyleigh Wright: \n";
             std::cin >> Kyleigh_Wright_Modifier;

             switch (Kyleigh_Wright_Modifier) {
             case 'd':
                 break;

             case '2':
                 Kyleigh_Wright = rand() % 10 + 2;
                 break;
             case '3':
                 Kyleigh_Wright = rand() % 10 + 3;
                 break;
             case '4':
                Kyleigh_Wright  = rand() % 10 + 4;
                 break;
             case '5':
                 Kyleigh_Wright = rand() % 10 + 5;
                 break;
             case '6':
                 Kyleigh_Wright = rand() % 10 + 6;
                 break;
             case '7':
                 Kyleigh_Wright = rand() % 10 + 7;
                 break;
             case '8':
                 Kyleigh_Wright = rand() % 10 + 8;
                 break;
             case 'c':
                 Kyleigh_Wright = 0;
                 break;
             case 'w':
                 Kyleigh_Wright = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                 counter += 1;
                 break;
             }
             if (Kyleigh_Wright == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Kyleigh Wright!\n";
                 counter += 1;
             }

             else if (Kyleigh_Wright == 99) {
                 std::cout << "\n";
             }

             else if (Kyleigh_Wright == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Kyleigh Wright\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }


             //jeracho bernstein rand() :/
             std::cout << "Chances for Jeracho Bernstein,\n";
             std::cin >> Jeracho_Bernstein_Modifier;

             switch (Jeracho_Bernstein_Modifier)
             {
             case 'd':
                 Jeracho_Bernstein = rand() % 10 + 1;
                 break;
             case '2':
                 Jeracho_Bernstein = rand() % 10 + 2;
                 break;
             case '3':
                 Jeracho_Bernstein = rand() % 10 + 3;
                 break;
             case '4':
                 Jeracho_Bernstein = rand() % 10 + 4;
                 break;
             case '5':
                 Jeracho_Bernstein = rand() % 10 + 5;
                 break;
             case '6':
                 Jeracho_Bernstein = rand() % 10 + 6;
                 break;
             case '7':
                 Jeracho_Bernstein = rand() % 10 + 7;
                 break;
             case '8':
                 Jeracho_Bernstein = rand() % 10 + 8;
                 break;
             case 'c':
                 Jeracho_Bernstein = 'c';
                 break;
             case 'w':
                 Jeracho_Bernstein = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Jeracho_Bernstein == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Jeracho Bernstein!\n";
                 counter += 1;
             }

             else if (Jeracho_Bernstein == 99) {
                 std::cout << "\n";
             }

             else if (Jeracho_Bernstein == 0) {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Jeracho Bernstein\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             //heaven youngblood rand()
             std::cout << "Chances for Heaven Youngblood,\n";
             std::cin >> Heaven_Youngblood_Modifier;

             switch (Heaven_Youngblood_Modifier)
             {
             case 'd':
                 Heaven_Youngblood = rand() % 10 + 1;
                 break;
             case '2':
                 Heaven_Youngblood = rand() % 10 + 2;
                 break;
             case '3':
                 Heaven_Youngblood = rand() % 10 + 3;
                 break;
             case '4':
                 Heaven_Youngblood = rand() % 10 + 4;
                 break;
             case '5':
                 Heaven_Youngblood = rand() % 10 + 5;
                 break;
             case '6':
                 Heaven_Youngblood = rand() % 10 + 6;
                 break;
             case '7':
                 Heaven_Youngblood = rand() % 10 + 7;
                 break;
             case '8':
                 Heaven_Youngblood = rand() % 10 + 8;
                 break;
             case 'c':
                 Heaven_Youngblood = 0;
                 break;
             case 'w':
                 Heaven_Youngblood = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Heaven_Youngblood == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Heaven Youngblood!\n";
                 counter += 1;
             }

             else if (Heaven_Youngblood == 99) {
                 std::cout << "\n";
             }

             else if (Heaven_Youngblood == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Heaven Youngblood\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             //Evan Smith rand() ;)
             std::cout << "Chances for Evan Smith,\n";
             std::cin >> Evan_Smith_Modifier;

             switch (Evan_Smith_Modifier)
             {
             case 'd':
                 Evan_Smith = rand() % 10 + 1;
                 break;
             case '2':
                 Evan_Smith = rand() % 10 + 2;
                 break;
             case '3':
                 Evan_Smith = rand() % 10 + 3;
                 break;
             case '4':
                 Evan_Smith = rand() % 10 + 4;
                 break;
             case '5':
                 Evan_Smith = rand() % 10 + 5;
                 break;
             case '6':
                 Evan_Smith = rand() % 10 + 6;
                 break;
             case '7':
                 Evan_Smith = rand() % 10 + 7;
                 break;
             case '8':
                 Evan_Smith = rand() % 10 + 8;
                 break;
             case 'c':
                 Evan_Smith = 0;
                 break;
             case 'w':
                 Evan_Smith = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Evan_Smith == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Evan Smith!\n";
                 counter += 1;
             }

             else if (Evan_Smith == 99) {
                 std::cout << "\n";
             }

             else if (Evan_Smith == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Evan Smith\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }


             //Gianna Carmena rand() (dis is the new one) :)
             std::cout << "Chances for Gianna Carmena,\n";
             std::cin >> Gianna_Carmena_Modifier;

             switch (Gianna_Carmena_Modifier)
             {
             case 'd':
                 Gianna_Carmena = rand() % 10 + 1;
                 break;
             case '2':
                 Gianna_Carmena = rand() % 10 + 2;
                 break;
             case '3':
                 Gianna_Carmena = rand() % 10 + 3;
                 break;
             case '4':
                 Gianna_Carmena = rand() % 10 + 4;
                 break;
             case '5':
                 Gianna_Carmena = rand() % 10 + 5;
                 break;
             case '6':
                 Gianna_Carmena = rand() % 10 + 6;
                 break;
             case '7':
                 Gianna_Carmena = rand() % 10 + 7;
                 break;
             case '8':
                 Gianna_Carmena = rand() % 10 + 8;
                 break;
             case 'c':
                 Gianna_Carmena = 'c';
                 break;
             case 'w':
                 Gianna_Carmena = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Gianna_Carmena == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Gianna Carmena!\n";
                 counter += 1;
             }

             else if (Gianna_Carmena == 99) {
                 std::cout << "\n";
             }

             else if (Gianna_Carmena == 0) {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Gianna Carmena\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             //Moses Frias rand()
             std::cout << "Chances for Moses Frias,\n";
             std::cin >> Moses_Frias_Modifier;

             switch (Moses_Frias_Modifier)
             {
             case 'd':
                 Moses_Frias = rand() % 10 + 1;
                 break;
             case '2':
                 Moses_Frias = rand() % 10 + 2;
                 break;
             case '3':
                 Moses_Frias = rand() % 10 + 3;
                 break;
             case '4':
                 Moses_Frias = rand() % 10 + 4;
                 break;
             case '5':
                 Moses_Frias = rand() % 10 + 5;
                 break;
             case '6':
                 Moses_Frias = rand() % 10 + 6;
                 break;
             case '7':
                 Moses_Frias = rand() % 10 + 7;
                 break;
             case '8':
                 Moses_Frias = rand() % 10 + 8;
                 break;
             case 'c':
                 Moses_Frias = 0;
                 break;
             case 'w':
                 Moses_Frias = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Moses_Frias == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Moses Frias!\n";
                 counter += 1;
             }

             else if (Moses_Frias == 99) {
                 std::cout << "\n";
             }

             else if (Moses_Frias == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Moses Frias\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }


             //James Ceron ;) rand()
             std::cout << "Chances for James Ceron,\n";
             std::cin >> James_Ceron_Modifier;

             switch (James_Ceron_Modifier)
             {
             case 'd':
                 James_Ceron = rand() % 10 + 1;
                 break;
             case '2':
                 James_Ceron = rand() % 10 + 2;
                 break;
             case '3':
                 James_Ceron = rand() % 10 + 3;
                 break;
             case '4':
                 James_Ceron = rand() % 10 + 4;
                 break;
             case '5':
                 James_Ceron = rand() % 10 + 5;
                 break;
             case '6':
                 James_Ceron = rand() % 10 + 6;
                 break;
             case '7':
                 James_Ceron = rand() % 10 + 7;
                 break;
             case '8':
                 James_Ceron = rand() % 10 + 8;
                 break;
             case 'c':
                 James_Ceron = 0;
                 break;
             case 'w':
                 James_Ceron = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (James_Ceron == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won James Ceron!\n";
                 counter += 1;
             }

             else if (James_Ceron == 99) {
                 std::cout << "\n";
             }

             else if (James_Ceron == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, James Ceron\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             //long name time :/
 
             //mathew rand() ( gud man ;) )
             std::cout << "Chances for Matthew de la Cuesta,\n";
             std::cin >> M_LONGNAME_Modifier;

             switch (M_LONGNAME_Modifier)
             {
             case 'd':
                 M_LONGNAME = rand() % 10 + 1;
                 break;
             case '2':
                 M_LONGNAME = rand() % 10 + 2;
                 break;
             case '3':
                 M_LONGNAME = rand() % 10 + 3;
                 break;
             case '4':
                 M_LONGNAME = rand() % 10 + 4;
                 break;
             case '5':
                 M_LONGNAME = rand() % 10 + 5;
                 break;
             case '6':
                 M_LONGNAME = rand() % 10 + 6;
                 break;
             case '7':
                 M_LONGNAME = rand() % 10 + 7;
                 break;
             case '8':
                 M_LONGNAME = rand() % 10 + 8;
                 break;
             case 'c':
                 M_LONGNAME = 0;
                 break;
             case 'w':
                 M_LONGNAME = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)\n";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (M_LONGNAME == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Matthew de la Cuesta!";
                 counter += 1;
             }

             else if (M_LONGNAME == 99) {
                 std::cout << "\n";
             }

             else if (M_LONGNAME == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Matthew de la Cuesta\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }


             std::cout << "Chances for Melanie Martinez-Gutierrez,\n";
             std::cin >> MM_LONGNAME_Modifier;


             //Melanie Martinez-Gutierrez (wow thats a name) rand()
             switch (MM_LONGNAME_Modifier)
             {
             case 'd':
                 MM_LONGNAME = rand() % 10 + 1;
                 break;
             case '2':
                 MM_LONGNAME = rand() % 10 + 2;
                 break;
             case '3':
                 MM_LONGNAME = rand() % 10 + 3;
                 break;
             case '4':
                 MM_LONGNAME = rand() % 10 + 4;
                 break;
             case '5':
                 MM_LONGNAME = rand() % 10 + 5;
                 break;
             case '6':
                 MM_LONGNAME = rand() % 10 + 6;
                 break;
             case '7':
                 MM_LONGNAME = rand() % 10 + 7;
                 break;
             case '8':
                 MM_LONGNAME = rand() % 10 + 8;
                 break;
             case 'c':
                 MM_LONGNAME = 0;
                 break;
             case 'w':
                 MM_LONGNAME = 99;
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)\n";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (MM_LONGNAME == 8) {
                 //nice. 1k lines of code ;)
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Melanie Martinez-Gutierrez!";
                 counter += 1;
             }

             else if (MM_LONGNAME == 99) {
                 std::cout << "\n";
             }

             else if (MM_LONGNAME == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Melanie Martinez-Gutierrez\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             // kaylyn torres juarez rand()
             std::cout << "Chances for Kaylyn Torres Juarez,\n";
             std::cin >> K_LONGNAME_Modifier;
             switch (K_LONGNAME_Modifier)
             {
             case 'd':
                 K_LONGNAME = rand() % 10 + 1;
                 break;
             case '2':
                 K_LONGNAME = rand() % 10 + 2;
                 break;
             case '3':
                 K_LONGNAME = rand() % 10 + 3;
                 break;
             case '4':
                 K_LONGNAME = rand() % 10 + 4;
                 break;
             case '5':
                 K_LONGNAME = rand() % 10 + 5;
                 break;
             case '6':
                 K_LONGNAME = rand() % 10 + 6;
                 break;
             case '7':
                 K_LONGNAME = rand() % 10 + 7;
                 break;
             case '8':
                 K_LONGNAME = rand() % 10 + 8;
                 break;
             case 'c':
                 K_LONGNAME = 0;
                 break;
             case 'w':
                 K_LONGNAME = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (K_LONGNAME == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Kaylyn Torres Juarez!\n";
                 counter += 1;
             }

             else if (K_LONGNAME == 99) {
                 std::cout << "\n";
             }

             else if (K_LONGNAME == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Kaylyn Torres Juarez\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             //long name time over :((((


             //time for better names ;)

             //Caiden Chadwick rand()
             std::cout << "Chances for Caiden Chadwick,\n";
             std::cin >> Caiden_Chadwick_Modifier;
             switch (Caiden_Chadwick_Modifier)
             {
             case 'd':
                 Caiden_Chadwick = rand() % 10 + 1;
                 break;
             case '2':
                 Caiden_Chadwick = rand() % 10 + 2;
                 break;
             case '3':
                 Caiden_Chadwick = rand() % 10 + 3;
                 break;
             case '4':
                 Caiden_Chadwick = rand() % 10 + 4;
                 break;
             case '5':
                 Caiden_Chadwick = rand() % 10 + 5;
                 break;
             case '6':
                 Caiden_Chadwick = rand() % 10 + 6;
                 break;
             case '7':
                 Caiden_Chadwick = rand() % 10 + 7;
                 break;
             case '8':
                 Caiden_Chadwick = rand() % 10 + 8;
                 break;
             case 'c':
                 Caiden_Chadwick = 0;
                 break;
             case 'w':
                 Caiden_Chadwick = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Caiden_Chadwick == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Caiden Chadwick!\n";
                 counter += 1;
             }

             else if (Caiden_Chadwick == 99) {
                 std::cout << "\n";
             }

             else if (Caiden_Chadwick == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Caiden Chadwick\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             // Sydney Cobb rand()
             std::cout << "Chances for Sydney Cobb,\n";
             std::cin >> Sydney_Cobb_Modifier;
             switch (Sydney_Cobb_Modifier)
             {
             case 'd':
                 Sydney_Cobb = rand() % 10 + 1;
                 break;
             case '2':
                 Sydney_Cobb = rand() % 10 + 2;
                 break;
             case '3':
                 Sydney_Cobb = rand() % 10 + 3;
                 break;
             case '4':
                 Sydney_Cobb = rand() % 10 + 4;
                 break;
             case '5':
                 Sydney_Cobb = rand() % 10 + 5;
                 break;
             case '6':
                 Sydney_Cobb = rand() % 10 + 6;
                 break;
             case '7':
                 Sydney_Cobb = rand() % 10 + 7;
                 break;
             case '8':
                 Sydney_Cobb = rand() % 10 + 8;
                 break;
             case 'c':
                 Sydney_Cobb = 0;
                 break;
             case 'w':
                 Sydney_Cobb = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Sydney_Cobb == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Sydney Cobb!\n";
                 counter += 1;
             }

             else if (Sydney_Cobb == 99) {
                 std::cout << "\n";
             }

             else if (Sydney_Cobb == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Sydney Cobb\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }
                 
                 
                 //Jenna Khalifa rand()
                 std::cout << "Chances for Jenna Khalifa,\n";
             std::cin >> Jenna_Khalifa_Modifier;
             switch (Jenna_Khalifa_Modifier)
             {
             case 'd':
                 Jenna_Khalifa = rand() % 10 + 1;
                 break;
             case '2':
                 Jenna_Khalifa = rand() % 10 + 2;
                 break;
             case '3':
                 Jenna_Khalifa = rand() % 10 + 3;
                 break;
             case '4':
                 Jenna_Khalifa = rand() % 10 + 4;
                 break;
             case '5':
                 Jenna_Khalifa = rand() % 10 + 5;
                 break;
             case '6':
                 Jenna_Khalifa = rand() % 10 + 6;
                 break;
             case '7':
                 Jenna_Khalifa = rand() % 10 + 7;
                 break;
             case '8':
                 Jenna_Khalifa = rand() % 10 + 8;
                 break;
             case 'c':
                 Jenna_Khalifa = 0;
                 break;
             case 'w':
                 Jenna_Khalifa = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Jenna_Khalifa == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Jenna Khalifa!\n";
                 counter += 1;
             }

             else if (Jenna_Khalifa == 99) {
                 std::cout << "\n";
             }

             else if (Jenna_Khalifa == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Jenna Khalifa\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             //Jameson Murphey rand()
             std::cout << "Chances for Jameson Murphey,\n"; //nice name i really dont like to write it on my keyboard tho :/
             std::cin >> Jameson_Murphey_Modifier;
             switch (Jameson_Murphey_Modifier)
             {
             case 'd':
                 Jameson_Murphey = rand() % 10 + 1;
                 break;
             case '2':
                 Jameson_Murphey = rand() % 10 + 2;
                 break;
             case '3':
                 Jameson_Murphey = rand() % 10 + 3;
                 break;
             case '4':
                 Jameson_Murphey = rand() % 10 + 4;
                 break;
             case '5':
                 Jameson_Murphey = rand() % 10 + 5;
                 break;
             case '6':
                 Jameson_Murphey = rand() % 10 + 6;
                 break;
             case '7':
                 Jameson_Murphey = rand() % 10 + 7;
                 break;
             case '8':
                 Jameson_Murphey = rand() % 10 + 8;
                 break;
             case 'c':
                 Jameson_Murphey = 0;
                 break;
             case 'w':
                 Jameson_Murphey = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Jameson_Murphey == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Jameson Murphey!\n";
                 counter += 1;
             }

             else if (Jameson_Murphey == 99) {
                 std::cout << "\n";
             }

             else if (Jameson_Murphey == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Jameson Murphey\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }


             //Meredith Valladares rand()  also a really good person ngl ;)
             std::cout << "Chances for Meredith Valladares,\n";
             std::cin >> Meredith_Valladares_Modifier;
             switch (Meredith_Valladares_Modifier)
             {
             case 'd':
                 Meredith_Valladares = rand() % 10 + 1;
                 break;
             case '2':
                 Meredith_Valladares = rand() % 10 + 2;
                 break;
             case '3':
                 Meredith_Valladares = rand() % 10 + 3;
                 break;
             case '4':
                 Meredith_Valladares = rand() % 10 + 4;
                 break;
             case '5':
                 Meredith_Valladares = rand() % 10 + 5;
                 break;
             case '6':
                 Meredith_Valladares = rand() % 10 + 6;
                 break;
             case '7':
                 Meredith_Valladares = rand() % 10 + 7;
                 break;
             case '8':
                 Meredith_Valladares = rand() % 10 + 8;
                 break;
             case 'c':
                 Meredith_Valladares = 0;
                 break;
             case 'w':
                 Meredith_Valladares = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Meredith_Valladares == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Meredith Valladares!\n";
                 counter += 1;
             }

             else if (Meredith_Valladares == 99) {
                 std::cout << "\n";
             }

             else if (Meredith_Valladares == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Meredith Valladares\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }

             // rand()
             std::cout << "Chances for Alyssa Dominguez,\n";
             std::cin >> Alyssa_Dominguez_Modifier;
             switch (Alyssa_Dominguez_Modifier)
             {
             case 'd':
                 Alyssa_Dominguez = rand() % 10 + 1;
                 break;
             case '2':
                 Alyssa_Dominguez = rand() % 10 + 2;
                 break;
             case '3':
                 Alyssa_Dominguez = rand() % 10 + 3;
                 break;
             case '4':
                 Alyssa_Dominguez = rand() % 10 + 4;
                 break;
             case '5':
                 Alyssa_Dominguez = rand() % 10 + 5;
                 break;
             case '6':
                 Alyssa_Dominguez = rand() % 10 + 6;
                 break;
             case '7':
                 Alyssa_Dominguez = rand() % 10 + 7;
                 break;
             case '8':
                 Alyssa_Dominguez = rand() % 10 + 8;
                 break;
             case 'c':
                 Alyssa_Dominguez = 0;
                 break;
             case 'w':
                 Alyssa_Dominguez = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Alyssa_Dominguez == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Alyssa Dominguez!\n";
                 counter += 1;
             }

             else if (Alyssa_Dominguez == 99) {
                 std::cout << "\n";
             }

             else if (Alyssa_Dominguez == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Alyssa Dominguez\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }
             


             //EXAMPLE rand()
             std::cout << "Chances for Dyego Ornelas,\n";
             std::cin >> Dyego_Ornelas_Modifier;
             switch (Dyego_Ornelas_Modifier)
             {
             case 'd':
                 Dyego_Ornelas = rand() % 10 + 1;
                 break;
             case '2':
                 Dyego_Ornelas = rand() % 10 + 2;
                 break;
             case '3':
                 Dyego_Ornelas = rand() % 10 + 3;
                 break;
             case '4':
                 Dyego_Ornelas = rand() % 10 + 4;
                 break;
             case '5':
                 Dyego_Ornelas = rand() % 10 + 5;
                 break;
             case '6':
                 Dyego_Ornelas = rand() % 10 + 6;
                 break;
             case '7':
                 Dyego_Ornelas = rand() % 10 + 7;
                 break;
             case '8':
                 Dyego_Ornelas = rand() % 10 + 8;
                 break;
             case 'c':
                 Dyego_Ornelas = 0;
                 break;
             case 'w':
                 Dyego_Ornelas = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Dyego_Ornelas == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Dyego Ornelas!\n";
                 counter += 1;
             }

             else if (Dyego_Ornelas == 99) {
                 std::cout << "\n";
             }

             else if (Dyego_Ornelas == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Dyego Ornelas\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }



             //Jatara Quinn rand()
             std::cout << "Chances for Jatara Quinn,\n";
             std::cin >> Jatara_Quinn_Modifier;
             switch (Jatara_Quinn_Modifier)
             {
             case 'd':
                 Jatara_Quinn = rand() % 10 + 1;
                 break;
             case '2':
                 Jatara_Quinn = rand() % 10 + 2;
                 break;
             case '3':
                 Jatara_Quinn = rand() % 10 + 3;
                 break;
             case '4':
                 Jatara_Quinn = rand() % 10 + 4;
                 break;
             case '5':
                 Jatara_Quinn = rand() % 10 + 5;
                 break;
             case '6':
                 Jatara_Quinn = rand() % 10 + 6;
                 break;
             case '7':
                 Jatara_Quinn = rand() % 10 + 7;
                 break;
             case '8':
                 Jatara_Quinn = rand() % 10 + 8;
                 break;
             case 'c':
                 Jatara_Quinn = 0;
                 break;
             case 'w':
                 Jatara_Quinn = 99;
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (Jatara_Quinn == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Jatara Quinn!\n";
                 counter += 1;
             }

             else if (Jatara_Quinn == 99) {
                 std::cout << "\n";
             }

             else if (Jatara_Quinn == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Jatara Quinn\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }




             //Laurden rand()
             std::cout << "Chances for Lauren Hernandez,\n";
             std::cin >> Lauren_Hernandez_Modifier;
             switch (Lauren_Hernandez_Modifier)
             {
             case 'd':
                 Lauren_Hernandez = rand() % 10 + 1;
                 break;
             case '2':
                 Lauren_Hernandez = rand() % 10 + 2;
                 break;
             case '3':
                 Lauren_Hernandez = rand() % 10 + 3;
                 break;
             case '4':
                 Lauren_Hernandez = rand() % 10 + 4;
                 break;
             case '5':
                 Lauren_Hernandez = rand() % 10 + 5;
                 break;
             case '6':
                 Lauren_Hernandez = rand() % 10 + 6;
                 break;
             case '7':
                 Lauren_Hernandez = rand() % 10 + 7;
                 break;
             case '8':
                 Lauren_Hernandez = rand() % 10 + 8;
                 break;
             case 'c':
                 Lauren_Hernandez = 0;
                 break;
             case 'w':
                 Lauren_Hernandez = 99;
                 counter += 1;
                 break;
             }



             if (Lauren_Hernandez == 8) {
                 std::cout << "You got the number 8!\n";
                 std::cout << "You won Lauren Hernandez!\n";
                 counter += 1;
             }

             else if (Lauren_Hernandez == 99) {
                 std::cout << "\n";
             }

             else if (Lauren_Hernandez == 'c') {
                 std::cout << "Apologies for your cancellation, hopefully next time you'll do great!\n";
             }

             else {
                 std::cout << "Unfortunately you didn't get the number 8, Lauren Hernandez\n";
                 std::cout << "Don't worry if you didn't win this time, there is always another... (hopefully)\n";
             }


    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";

    std::cout << "Number of Winners: \n" << counter << "\n";

    if (counter >= 2) {
    std:cout << "Please Rerun the program and only focus on those that won : ) (two or more students won)\n";
    }
    else {
        std::cout << "\n";
    }

    std::cout << "ok nice raffle everyone, congrats to anyone that won. and rip to anyone that lost.";
    return -1;
}
