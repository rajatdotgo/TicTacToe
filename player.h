 #include<iostream>
  #include"board.h"
 #include"isWon.h"
 #include"mark.h"
 using namespace std;
 
 char player(int count)
 {
	
	int index;
	
	
	board(mat1);
	int player=(count%2)?1:2;
	cout<<"\n\nit is the turn of player"<<player<<endl;
	
	cout<<"\nenter your choice"<<endl;
	cin>>index;
	if(index==1&&mat1[index-1]=='1')
	{
	mat1[index-1]=mark(count);
	
	board(mat1);
    win=isWon(mat1);
    }
    else if(index==2&&mat1[index-1]=='2')
	 {
	   mat1[index-1]=mark(count);
	
	   board(mat1);
       win=isWon(mat1);
     }
     
     else if(index==3&&mat1[index-1]=='3')
	 {
	   mat1[index-1]=mark(count);
	
	   board(mat1);
       win=isWon(mat1);
     }
     
     else if(index==4&&mat1[index-1]=='4')
	 {
	   mat1[index-1]=mark(count);
	
	   board(mat1);
       win=isWon(mat1);
     }
     
     else if(index==5&&mat1[index-1]=='5')
	 {
	   mat1[index-1]=mark(count);
	
	   board(mat1);
       win=isWon(mat1);
     }
     
     else if(index==6&&mat1[index-1]=='6')
	 {
	   mat1[index-1]=mark(count);
	
	   board(mat1);
       win=isWon(mat1);
     }
     
     else if(index==7&&mat1[index-1]=='7')
	 {
	   mat1[index-1]=mark(count);
	
	   board(mat1);
       win=isWon(mat1);
     }
     
     else if(index==8&&mat1[index-1]=='8')
	 {
	   mat1[index-1]=mark(count);
	
	   board(mat1);
       win=isWon(mat1);
     }
     
     else if(index==9&&mat1[index-1]=='9')
	 {
	   mat1[index-1]=mark(count);
	
	   board(mat1);
       win=isWon(mat1);
     }
     
     else 
	 {
         --turn;
       cout<<"\n invalid choice";
      
      
     }
}
