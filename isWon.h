
using namespace std;
bool isWon(char arr[9])                                       //start of isWon function
{

	if(arr[0]==arr[1]&&arr[1] ==arr[2])
	{
		int w=(turn%2)?1:2;
		won= true;
		cout<<"\n\n\t\tplayer "<<w<<" won"<<endl;
		
	}
	else if(arr[0]==arr[3]&&arr[3]==arr[6])
	{
		int w=(turn%2)?1:2;
		 won= true;
		cout<<"\n\n\t\tplayer "<<w<<" won"<<endl;
		 
	}
	else if(arr[3]==arr[4]&&arr[4]==arr[5])
	{
		int w=(turn%2)?1:2;
		won= true;
			cout<<"\n\n\t\tplayer "<<w<<" won"<<endl;
		
	}
	else if(arr[6]==arr[7]&&arr[7]==arr[8])
	{
		int w=(turn%2)?1:2;
		won= true;
			cout<<"\n\n\t\tplayer "<<w<<" won"<<endl;
		
	}
	else if(arr[1]==arr[4]&&arr[4]==arr[7])
	{
		int w=(turn%2)?1:2;
		won= true;
			cout<<"\n\n\t\tplayer "<<w<<" won"<<endl;
	}
	else if(arr[2]==arr[5]&&arr[5]==arr[8])
	{
		int w=(turn%2)?1:2;
		won= true;
			cout<<"\n\n\t\tplayer "<<w<<" won"<<endl;
		
	}
	else if(arr[0]==arr[4]&&arr[4]==arr[8])
	{
		int w=(turn%2)?1:2;
		won= true;
			cout<<"\n\n\t\tplayer "<<w<<" won"<<endl;
	
	}
	else if(arr[2]==arr[4]&&arr[4]==arr[6])
	{
		int w=(turn%2)?1:2;
		won= true;
			cout<<"\n\n\t\tplayer "<<w<<" won"<<endl;
		
	}
	
    else if (arr[0] != '1' && arr[1] != '2' && arr[2] != '3' 
                    && arr[3] != '4' && arr[4] != '5' && arr[5] != '6' 
                  && arr[6] != '7' && arr[7] != '8' && arr[8] != '9')
     {
     	
     	cout<<"\n\n\t\tgame draw"<<endl;
                  	won=true;
	 }
		
	return won;
}                                                 
