#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
int main(){
int ep1,ep2,wins,win1,win2,i;//dilosi metavliton
char name1[20],name2[20];//pinakes gia diavasma onomaton
printf("------------------------------------------------------------------------\n");
printf("\t\tHELLO GUYS! \n");
printf("------------------------------------------------------------------------\n");
printf("\t\tTHIS IS THE ROCK-PAPER-SCISSORS GAME\n");
printf("------------------------------------------------------------------------\n");
printf("\t\tLet's start! \n");
printf("------------------------------------------------------------------------\n");
printf("\tUser no1 give your name : \n");//diavasma 1ou paikti
scanf("%s",name1);
printf("\tUser no2 give your name : \n");//diavasma 2ou paikti
scanf("%s",name2);

printf("Get ready for the game.Starting...\n");
printf("-----------------------------------\n");
printf("Select your choice:\n");
printf("(1) ROCK\n");//PRINT MENU
printf("(2) PAPER\n");
printf("(3) SCISSORS\n");
printf("(4) EXIT GAME\n");
printf("-----------------------------------\n");
win1=0;
win2=0;
 do{
   printf("User no1 give your selection:\n");//ELEGXOS EGKYROTHTAS PAIKTH
   scanf("%d",&ep1);
   printf("User no2 give your selection:\n");
   scanf("%d",&ep2);
    if(ep1<1||ep1>3||ep2<1||ep2>3){
    	printf("Invalid selection please select again: \n");
	}
	else if(ep1==4&&ep2==4){//ayth h entolh mallon den leitoyrgei giati otan dino 4 k 4 den thelo na emfanizei to Invalid selection please select again
		exit(0);
	}
	 
  //oles oi epiloges kai oi pontoi ton paikton
  if(ep1==1 && ep2==1){
	printf("DRAW\n");
}
  else if (ep1==1 && ep2==2){
	printf("\tKerdizei o %s se ayton ton gyro\n",name2);
	win2=win2+1;
}
  else if(ep1==1 && ep2==3){
	printf("\tKerdizei o %s se ayton ton gyro\n",name1);
		win1=win1+1;
	}
else if (ep1==2 && ep2==1){
	printf("\tKerdizei o %s se ayton ton gyro \n",name1);
		win1=win1+1;
	}
else if (ep1==2 && ep2==2){
	printf("\tDRAW se ayton ton gyro\n");
}
else if (ep1==2 && ep2==3){
	printf("\tKerdizei o %s se ayton ton gyro \n",name2);
		win2=win2+1;
	}
else if (ep1==3 && ep2==1){
	printf("\tKerdizei o %s se ayton ton gyro \n",name1);
		win1=win1+1;
	}
else if (ep1==3 && ep2==2){
	printf("\tKerdizei o %s se ayton ton gyro \n",name2);
		win1=win1+1;
	}
else if (ep1==3 && ep2==3){
	printf("\tDRAW se ayton ton gyro.\n");
}
}while(ep1!=4 ||ep2!=4);
printf("---------------------------\n");//emfanizei kathe score paikti kai poios nikise
printf(" \t%s's score is %d \n",name1,win1);
printf(" \t%s's score is %d \n",name2,win2);
if(win1>win2){
	printf("\tThe winner is : %s  \n ",name1);
	printf("\tCongratulations\n");
}
else if(win1>win2){
   printf("\tThe winner is : %s  \n",name2);
   printf("\tCongratulations\n");
}
 else
   printf("\tThe game was a DRAW\n");

}








