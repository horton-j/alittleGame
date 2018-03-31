#include <stdio.h>

int checkerBoards();
int main()
{
	int checkerBoard[]={1,2,3,4,5,6,7,8,9};
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
	int player1 = 0;
	int player2 = 0;
	int count = 0;
	do{

		printf("Player 1 choose :\n");
		scanf("%d",&player1);
		int i;
		for(i = 0;i < sizeof(checkerBoard)/sizeof(checkerBoard[0]);i++){

			if(player1 == checkerBoard[i]){

				checkerBoard[i] = 0;
				checkerBoards(4,3,checkerBoard);
				break;
			}
		}
		count ++ ;
		if(count == sizeof(checkerBoard)/sizeof(checkerBoard[0])){

			printf("There's no winner ,the game is over!\n");
			break;
		}

		printf("Player 2 choose :\n");
		scanf("%d",&player2);

		for(i = 0;i < sizeof(checkerBoard)/sizeof(checkerBoard[0]);i++){

			if(player2 == checkerBoard[i]){

				checkerBoard[i] = 1;
				checkerBoards(4,3,checkerBoard);
				break;
			}
		}
		count ++ ;

	}while(count < sizeof(checkerBoard)/sizeof(checkerBoard[0]));



	return 0;
 } 
 
 //draw a checkboard !
 int checkerBoards(int colum,int  ret,int c[]){
	
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
				printf("| %d ",c[b]);
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
