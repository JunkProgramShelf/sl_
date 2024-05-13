/*
*============================================================
*		This is prototype sl command for Windows.
*      		Copyright 1993,1998,2014
 *              Toyoda Masashi
 *              (mtoyoda@acm.org)
*		Original sl command source code is here --->[https://github.com/mtoyoda/sl]
*		
*		
*============================================================
*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_sl.h"

//[SL_PATTERNS][SL_HEIGHT][]





/*
void Comand_Prompt_windows_propaty();
void check_arg_num(int a,char* str);
int check_arg_element(char* str);
*/




void Comand_Prompt_windows_start(){
	system("cls");
	system("mode 1000,150");
}

void Comand_Prompt_windows_end(){
	system("cls");
	system("mode 80,30");
}
	

void print_sl(int flag1,int flag2,int flag3){
	int i=0,j=0,k=0,count=0;
	int dx=0;
	int dx_count=0;
	char sl_body[SL_PATTERNS][SL_HEIGHT][SL_LENGTH]={
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL11, SLWHL12, SLWHL13, SLWHL14},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL21, SLWHL22, SLWHL23, SLWHL24},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL31, SLWHL32, SLWHL33, SLWHL34},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL41, SLWHL42, SLWHL43, SLWHL44},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL51, SLWHL52, SLWHL53, SLWHL54},
				{SL1, SL2, SL3, SL4, SL5, SL6, SL7, SLWHL61, SLWHL62, SLWHL63, SLWHL64},
		};

	char tender_body[SL_PATTERNS][SL_HEIGHT][SL_LENGTH]={
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
				{TENDER01,TENDER02,TENDER03,TENDER04,TENDER05,TENDER06,TENDER07,TENDER08,TENDER09,TENDER10,TENDER11},
			};
	/*
	char smoke[smoke_HEIGHT][smoke_LENGTH]={
				{smoke1,smoke2,smoke3,smoke4}
	}*/
	//char *wheel[2]={SLWHL11,SLWHL12};
	if(flag1){
		
	}
	if(flag2){
		
	}if(flag3){
		
	}

	while(count<15){
		for(i=0;i<SL_PATTERNS;i++){
			system("cls");
			for(j=0;j<SL_HEIGHT;j++){
				dx=90-dx_count;
				while(dx>0){
					_cprintf(" ");
					dx--;
				}
				_cprintf("%s%s\n",sl_body[i][j],tender_body[i][j]);
			}
			//sleep(0.9);
			dx_count++;
		}
		count++;
	}
	
}


