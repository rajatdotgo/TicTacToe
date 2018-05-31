
void board();
char player(int);                     // Prototypes of functions
char mark(int);
bool isWon(char mat1[9]);
void replay();
void game();



char mat[]={'1','2','3','4','5','6','7','8','9'};
char mat1[]={'1','2','3','4','5','6','7','8','9'};       //global declaration
static bool win=false;
static int turn=1;
static bool won;

