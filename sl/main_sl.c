#include "my_sl.h"
#include <string.h>

void check_option(int a,char* c[]);


int option_flag1=0;// -l option
int option_flag2=0;// -a option
int option_flag3=0;// -F option
int loop_flag=0;   // -infinity loop flag(-r option)

void main(int argc,char *argv[]){
	int i=0;
	int command_flag=0;
	//_getch();
	check_option(argc,argv);
	Comand_Prompt_windows_start();
	
	
	
	print_sl(option_flag1,option_flag2,option_flag3);

	Comand_Prompt_windows_end();
	//_cprintf("%s",test[i]);
}

void check_option(int arg_n,char *str[]){
	int i=0,j=0;
	int flag=0;
	for(i = 0;i < arg_n; i++){
		for(j = 0; j < strlen(str[i]); j++){
			if(str[i][j]=='-'){
				switch(str[i][j+1]){
					case 'l':option_flag1=1;break;
					case 'a':option_flag2=1;break;
					case 'F':option_flag3=1;break;
					default :break;
				}
			}
		}
	}
}