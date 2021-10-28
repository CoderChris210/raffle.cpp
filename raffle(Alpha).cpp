#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main() {
    //winning number = 8
    srand(time(0));
    //variables
    //rands
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
    //matthew de la cuesta :) amazing friend
    int M_LONGNAME = rand() % 10 + 1;
    //melanie martinez gawd man thats a name
    int MM_LONGNAME = rand() % 10 + 1;
    //modifiers
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
    //his modifier for de la cuesta :) man cant get enough of how awesome he is.
    char M_LONGNAME_Modifier;
    char MM_LONGNAME_Modifier;
    //misc variables
    char yn;
    int counter = 0;
    //variables


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
    std::cout << "If you want a student to not have any chances to win input: 'x' \n";
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
        std::cout << "ok lol mrs dymowski won cuz she felt like it...\n"
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

    //rand() Ayden West UwU best friend ever  BFF;)
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


    //rand() Noah McDaniel ;;;;;;)))))
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
        std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
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
                    std::cout << "You won Gianna Ballesteros!";
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
                 std::cout << "You won Kyleigh Wright!";
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

             else {
                 std::cout << "Closing Program...";
                 return -1;
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


             //Gianna Carmena rand()
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
 
             //mathew rand() ;)
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
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
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


             //Melanie Martinez-Gutierrez wow thats a name rand()
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
                 std::cout << "DEFAULT WIN!!! (musta done somethin really good to get awarded this!)";
                 counter += 1;
                 break;
             default:
                 break;
             }



             if (MM_LONGNAME == 8) {
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

    return -1;
}