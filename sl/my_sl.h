/*================================
*
*Made by YM
*
*=================================
*/

#define SL_LENGTH 2000
#define SL_HEIGHT 12
#define SL_PATTERNS 6
#define smoke_HEIGHT 4
#define smoke LENGTH 50

#define SL1 "        ====                      ___________  "
#define SL2 "    )=|_| |__     ____     ====   |         |  "
#define SL3 "    |        |__H/  ||____|   |_=_|  [^o^]  |  "
#define SL4 "    |        | []     ---    ----- [C56 150]|_ "
#define SL5 "    |        | []      H      ---             |"
#define SL6 "    |        | []      H       -       [  ]   |"
#define SL7 "    |        |_[]______H_______-_______[__]___|"


#define SLWHL11 "    | _______| _      ____      ____      ____  "
#define SLWHL12 "    |/  |  A    A    A    A    A    A    A    A "
#define SLWHL13 "    /___| |0=========0=========0=========0  X  |"
#define SLWHL14 "   /       V____V    V____V    V____V    V____V "

#define SLWHL21 "    | _______| _      ____      ____      ____  "
#define SLWHL22 "    |/  |  A    A    A    A    A    A    A    A "
#define SLWHL23 "    /___| |   X  |  |   X  |  |   X  |  |   X  |"
#define SLWHL24 "   /       V0=========0=========0=========0___V "


#define SLWHL31 "    | _______| _      ____      ____      ____  "
#define SLWHL32 "    |/  |  A    A    A    A    A    A    A    A "
#define SLWHL33 "    /___| |   X  |  |   X  |  |   X  |  |   X  |"
#define SLWHL34 "   /       V____0=========0=========0=========0 "


#define SLWHL41 "    | _______| _      ____      ____      ____  "
#define SLWHL42 "    |/  |  A    A    A    A    A    A    A    A "
#define SLWHL43 "    /___| |   X  0=========0=========0=========0 "
#define SLWHL44 "   /       V____V    V____V    V____V    V____V "

#define SLWHL51 "    | _______| _      ____      ____      ____  "
#define SLWHL52 "    |/  |  A    0=========0=========0=========0 "
#define SLWHL53 "    /___| |   X  |  |   X  |  |   X  |  |   X  |"
#define SLWHL54 "   /       V____V    V____V    V____V    V____V "

#define SLWHL61 "    | _______| _      ____      ____      ____  "
#define SLWHL62 "    |/  |  0=========0=========0=========0    A "
#define SLWHL63 "    /___| |   X  |  |   X  |  |   X  |  |   X  |"
#define SLWHL64 "   /       V____V    V____V    V____V    V____V "





#define TENDER01 "         @@@@@@@@@@@@@@@@@    @      "
#define TENDER02 "     ___@@@@@@@@@@@@@@@@@@@@@@@@@@_  "
#define TENDER03 "    _|                            |  "
#define TENDER04 "   |                              |  "
#define TENDER05 "===                               |  "
#define TENDER06 " _|                               |_ "
#define TENDER07 "|                                  | "
#define TENDER08 "|_________________________________|  "
#define TENDER09 "     A    A               A    A     "
#define TENDER10 "    |   X  |             |   X  |    "
#define TENDER11 "     V____V               V____V     "


#define smoke1 "              (((((((( "
#define smoke2 "            (((((\'((  "
#define smoke3 "          ((\'(((\'(   "
#define smoke4 "        ((@(@((        "


void print_sl(int f1,int f2,int f3);

void Comand_Prompt_windows_start();
void Comand_Prompt_windows_end();





/*
*prototype
*
*
*
*#define D51WHL11 "__/ =| o |=-~~\\  /~~\\  /~~\\  /~~\\ ____Y___________|__ "
*#define D51WHL12 " |/-=|___|=    ||    ||    ||    |_____/~\\___/        "
*#define D51WHL13 "  \\_/      \\O=====O=====O=====O_/      \\_/            "
*/
/* design SL
	                             __________ 
       ===       ____     ====   |         |
   D=|_|=|______/    \__|    |_=_|  [____] |
	 |-----|  []     ---    ----- [C56 150]|_
	/      |  []      H                      |
	|      |  []      H                      |
    | _____|__[]______H______________________|
    |/ ____| __       __       __       __
    /        =0========0========0========0
   /       ____/    ____/     ___/    ____/
   
*/

/*design tender
    
             
           @@@@@@@@@@@@@@@@@    @
      ___@@@@@@@@@@@@@@@@@@@@@@@@@@_
     _|                             |
    |                               |
 ====                               |
   _|                               |
  |=                                |
  |_________________________________|
      A    A               A    A 
     |   X  |             |   X  |
      V____V               V____V
*/
