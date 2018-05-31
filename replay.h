

#include"declare.h"


using namespace std;
void replay()
{ 
    won=false;
    win=false;
    turn=1;
    char a;
    for (int i = 0; i < 9; i++) 
	{
      mat1[i] = mat[i];
    }


    
	cout<<"\n\t\tdo you want to play again"<<endl;
	cout<<"\n\t\tPress y for replay "<<endl;
	cin>>a;
	
	
	if(a=='y'||a=='Y')
	{
		game();
	}
	else 
	{
		system("CLS");
		cout<<"\n\n\n\n\t\t\tThankyou for playing"<<endl<<endl;
	}
}
