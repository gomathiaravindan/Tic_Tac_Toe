#include<stdio.h>
#include<stdio.h>
int tic_tac[9] = {'a','b','c','d','e','f','g','h','i'};
void print();
int winner();
int main()
{
	char ch;
	int i,player = 1,draw;
	
	do{
		print();
		player = (player % 2) ? 1 : 2;
		printf("Player %d\n",player);
		printf("Enter the choice of number you want:");
		scanf("%d",&draw);
		ch = (player == 1) ? 'O' : 'X';
		if(draw == 1 && tic_tac[0] == 'a')
			tic_tac[0] = ch;
		else if(draw == 2 && tic_tac[1] == 'b')
			tic_tac[1] = ch;
			else if(draw == 3 && tic_tac[2] == 'c')
				tic_tac[2] = ch;
			else if(draw == 4 && tic_tac[3] == 'd')
				tic_tac[3] = ch;
			else if(draw == 5 && tic_tac[4] == 'e')
				tic_tac[4] = ch;
			else if(draw == 6 && tic_tac[5] == 'f')
				tic_tac[5] = ch;
			else if(draw == 7 && tic_tac[6] == 'g')
				tic_tac[6] = ch;
			else if(draw == 8 && tic_tac[7] == 'h')
				tic_tac[7] = ch;
			else if(draw == 9 && tic_tac[8] == 'i')
				tic_tac[8] = ch;
			else
			{
				printf("Please enter correct character!!\n");
				player--;
			}
		i = winner();
		player++;	
	}while(i == -1);
	
	print();
	if(i == 1)
	{
		printf("Player %d won!!",--player);
	}
	else
	{
		printf("Game Draw!!");
	}
}

void print()
{
	printf("TIC TAC TOE\n");
	printf("-----------\n");
	printf("Player1 (O) - Player2 (X)\n");
	printf("      |      |\n");
	printf("  %c   |  %c   |  %c  \n",tic_tac[0],tic_tac[1],tic_tac[2]);
	printf("______|______|______\n");
	printf("      |      |\n");
	printf("  %c   |  %c   |  %c  \n",tic_tac[3],tic_tac[4],tic_tac[5]);
	printf("______|______|______\n");
	printf("      |      |\n");
	printf("  %c   |  %c   |  %c   \n",tic_tac[6],tic_tac[7],tic_tac[8]);
}

int winner()
{
	if(tic_tac[0] == tic_tac[1] && tic_tac[1] == tic_tac[2])
		return 1;
	else if(tic_tac[3] == tic_tac[4] && tic_tac[4] == tic_tac[5])
		return 1;
	else if(tic_tac[6] == tic_tac[7] && tic_tac[7] == tic_tac[8])
		return 1;
	else if(tic_tac[0] == tic_tac[4] && tic_tac[4] == tic_tac[8])
		return 1;
	else if(tic_tac[0] == tic_tac[3] && tic_tac[3] == tic_tac[6])
		return 1;
	else if(tic_tac[1] == tic_tac[4] && tic_tac[4] == tic_tac[7])
		return 1;
	else if(tic_tac[2] == tic_tac[5] && tic_tac[5] == tic_tac[8])
		return 1;
	else if(tic_tac[2] == tic_tac[4] && tic_tac[4] == tic_tac[6])
		return 1;
	//else if(tic_tac[0] == 'a' && tic_tac[1] == 'b' && tic_tac[2] == 'c' && tic_tac[3] == 'd' && tic_tac[4] == 'e' && tic_tac[5] == 'f' && tic_tac[6] == 'g' && tic_tac[7] == 'h' && tic_tac[8] == 'i')
		//return 0;
	else
		return -1;
}
