
#include"replay.h"

void game()
  {
  
	while(win!=true)
	{
		player(turn);
        win=won;
  	    turn++;	
	}
	replay();
}
