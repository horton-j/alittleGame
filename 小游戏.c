#include <stdio.h>

int checkerBoards(int colum,int  ret,char c[]);
int main()
{
	char checkerBoard[]={'1','2','3','4','5','6','7','8','9'};
	printf("please enter anykey to start!\n");
	checkerBoards(4,3,checkerBoard);
//	int colum=0;
//	int ret=0;
//	int b=0;
//	for(colum=0;colum<4;colum++){
//		
//		for(ret=0;ret<3;ret++){
//		printf("+---");
//		if(ret==2){
//			printf("+");
//		}
//		}
//		printf("\n");
//		
//		if(colum!=3){
//			
//			int a=0;
//			
//			for(a=0;a<3;a++){
//				
//				printf("| %d ",checkerBoard[b]);
//				b++;
//				if(a==2){
//					printf("|");
//				} 
//			} 
//	
//		}
//		
//		printf("\n");
//		
//	}
	char player1 = '0';
	char player2 = '0';
	long count = 0;
	int c;
	int winner =0;
	do{

		printf("Player 1 choose :\n");
		scanf("%c",&player1);

        /* 通过 while 循环把输入流中的余留数据“吃”掉 */
        while ( (c = getchar()) != '\n' && c != EOF ) ;

        /* 不过会残留 \n 字符。    */


		long i;
		for(i = 0;i < sizeof(checkerBoard)/sizeof(checkerBoard[0]);i++){

			if(player1 == checkerBoard[i]){

				checkerBoard[i] = 'O';
				checkerBoards(4,3,checkerBoard);
				break;
			}
		}
		count ++ ;
		//determine that if the chooses of player1  in a line.
		if(checkerBoard[4] == 'O' && checkerBoard[0] == checkerBoard[8] && checkerBoard[4] == checkerBoard[8] ||
			checkerBoard[4] == 'O' && checkerBoard[2] == checkerBoard[6] && checkerBoard[4] == checkerBoard[6]){

			printf("the winner is player1!\n");
			break;
		}else{
			if(checkerBoard[0] == checkerBoard[1] && checkerBoard[0] == checkerBoard[2] && checkerBoard[0] == 'O' ||
				checkerBoard[3] == checkerBoard[4] && checkerBoard[3] == checkerBoard[5] && checkerBoard[3] == 'O' ||
				checkerBoard[6] == checkerBoard[7] && checkerBoard[6] == checkerBoard[8] && checkerBoard[6] == 'O' ||
				checkerBoard[0] == checkerBoard[3] && checkerBoard[0] == checkerBoard[6] && checkerBoard[0] == 'O' ||
				checkerBoard[1] == checkerBoard[4] && checkerBoard[1] == checkerBoard[7] && checkerBoard[1] == 'O' ||
				checkerBoard[2] == checkerBoard[5] && checkerBoard[2] == checkerBoard[8] && checkerBoard[2] == 'O'){

				printf("the winner is player1!\n");
				break;
			}
		}

		if(count == sizeof(checkerBoard)/sizeof(checkerBoard[0])){

			printf("There's no winner ,the game is over!\n");
			break;
		}

		printf("Player 2 choose :\n");
		scanf("%c",&player2);
        /* 通过 while 循环把输入流中的余留数据“吃”掉 */
        while ( (c = getchar()) != '\n' && c != EOF ) ;

        /* 不过会残留 \n 字符。    */

		for(i = 0;i < sizeof(checkerBoard)/sizeof(checkerBoard[0]);i++){

			if(player2 == checkerBoard[i]){

				checkerBoard[i] = 'X';
				checkerBoards(4,3,checkerBoard);
				break;
			}
		}
		count ++ ;
		//determine that if the chooses of player1  in a line.
		if(checkerBoard[4] == 'X' && checkerBoard[0] == checkerBoard[8] && checkerBoard[4] == checkerBoard[8] ||
			checkerBoard[4] == 'X' && checkerBoard[2] == checkerBoard[6] && checkerBoard[4] == checkerBoard[6]){

			printf("the winner is player2!\n");
			break;
		}else{
			if(checkerBoard[0] == checkerBoard[1] && checkerBoard[0] == checkerBoard[2] && checkerBoard[0] == 'X' ||
				checkerBoard[3] == checkerBoard[4] && checkerBoard[3] == checkerBoard[5] && checkerBoard[3] == 'X' ||
				checkerBoard[6] == checkerBoard[7] && checkerBoard[6] == checkerBoard[8] && checkerBoard[6] == 'X' ||
				checkerBoard[0] == checkerBoard[3] && checkerBoard[0] == checkerBoard[6] && checkerBoard[0] == 'X' ||
				checkerBoard[1] == checkerBoard[4] && checkerBoard[1] == checkerBoard[7] && checkerBoard[1] == 'X' ||
				checkerBoard[2] == checkerBoard[5] && checkerBoard[2] == checkerBoard[8] && checkerBoard[2] == 'X'){

				printf("the winner is player2!\n");
				break;
			}
		}

	}while(count < sizeof(checkerBoard)/sizeof(checkerBoard[0]));



	return 0;
 } 
 
 //draw a checkboard !
 int checkerBoards(int colum,int  ret,char c[]){
	
	int b=0;
	int i=0;
	
	for(i;i<colum;i++){
		
		int e=0;
		for(e;e<ret;e++){ 
		printf("+---");
		if(e==2){
			printf("+");
		}
		}
		printf("\n");
		
		if(i!=3){
			
			int a=0;
			
			for(a=0;a<3;a++){ 
				printf("| %c ",c[b]);
				b++;
				if(a==2){ 
					printf("|");
				} 
			} 
	
		}
		
		printf("\n");
		
	}
	
	return 0;
 }
