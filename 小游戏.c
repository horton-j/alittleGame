#include <stdio.h>

int checkerboards();
int main()
{
	int checkerboard[]={1,2,3,4,5,6,7,8,9};
	checkerboards(4,3,checkerboard);
	
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
//				printf("| %d ",checkerboard[b]);
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
	
	
	return 0;
 } 
 
 int checkerboards(int colum,int  ret,int c[]){
	
	int b=0;
	int i=0;
	
	for(i;i<colum;i++){
		
		int e=0;
		for(e;e<ret;e++){ //ºá¿ò 
		printf("+---");
		if(e==2){
			printf("+");
		}
		}
		printf("\n");
		
		if(i!=3){
			
			int a=0;
			
			for(a=0;a<3;a++){ //Æå×Ó 
				printf("| %d ",c[b]);
				b++;
				if(a==2){ //×îºóÐÞÊÎ 
					printf("|");
				} 
			} 
	
		}
		
		printf("\n");
		
	}
	
	return 0;
 }
