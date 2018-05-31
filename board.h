// this will dislay the board

using namespace std;
void board(char arr[])                         //start of board function
{
	system("CLS");
	cout << "\n\t\t\t\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	
for(int i=0;i<9;i++)                                                 
	{
	if(i==3||i==6)
	{
		cout<<"\n\n| ------------- || ------------ || ------------- ";
		cout<<"\n\n";
	}
	cout<<"|\t";
	cout<<arr[i];
	cout<<"\t|";
	
	}
}                                                            //end of board function

