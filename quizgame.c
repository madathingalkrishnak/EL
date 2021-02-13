#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge on a programming language. You are eligible to play ");
    printf("\n    the game if you give atleast 2 right answers, otherwise you can't ");
    printf("\n    proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLENGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given.");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    //goto home;
			printf("\n>>Which programming language do you want the quiz on?\n");
			printf("\n\n\nPress C for C programming language\n");
			printf("\n\n\nPress P for C++ programming language\n");
			printf("\n\n\nPress J for Java programming language\n");
			if(toupper(getch())=='C')
			goto cquiz;
			else if(toupper(getch())=='P')
			goto cppquiz;
			else if(toupper(getch())=='J')
			goto javaquiz;
			else
			goto mainhome;
        }
	else
		{
        goto mainhome;
       system("cls");
       }
javaquiz:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWho is known as father of Java Programming Language?");
		printf("\n\nA.James Gosling\t\tB.M. P Java\n\nC.Charel Babbage\t\tD.Blais Pascal");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.James Gosling");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nIn Java code, the line that begins with /* and ends with */ is known as?");
		printf("\n\nA.Multiline comment\t\tB.Single line comment\n\nC.Both A & B\t\tD.None of these");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Multiline comment");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhich of the following are not Java keywords ?");
		printf("\n\nA.double\t\tB.switch\n\nC.then\t\tD.instanceof");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.then");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWhich of these is returned by Greater Than, Less Than and Equal To (i.e Relational) operator ?");
		printf("\n\nA.Float\t\tB.Integer\n\nC.Boolean\t\tD.Double");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Boolean");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhat is the full form of JVM ?");
        printf("\n\nA.Java Very large Machine\t\tB.Java Verified Machine\n\nC.Java Very small Machine\t\tD.Java Virtual Machine");
        if (toupper(getch())=='D')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is D.Java Virtual Machine");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhich of the following are not Java modifiers?");
		printf("\n\nA.public\t\tB.private\n\nC.friendly\t\tD.transient");
		if (toupper(getch())=='C' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.friendly");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto javagame;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nIn java control statements break, continue, return, try-catch-finally and assert belongs to?");
		printf("\n\nA.Selection statements\t\tB.Loop Statements\n\nC.Transfer statements\t\tD.Pause Statement");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Transfer statements");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nWhich provides runtime environment for java byte code to be executed?");
		printf("\n\nA.JDK\t\tB.JVM\n\nC.JRE\t\tD.JAVAC");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.JVM");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nWhat is byte code in Java? ");
		printf("\n\nA.Code generated by a Java compiler\t\tB.Code generated by a Java Virtual Machine\n\nC.Name of Java source code file	\t\tD.Block of code written inside a class");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Code generated by a Java compiler");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nData type long literals are appended by _____");
		printf("\n\nA.Uppercase L\t\tB.Lowercase L\n\nC.Long\t\tD.Both A and B");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is D.Both A and B");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nWhich variables are created when an object is created with the use of the keyword 'new' and destroyed when the object is destroyed?");
		printf("\n\nA.Local variables\t\tB.Instance variables\n\nC.Class variables\t\tD.Static variables");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Instance variables");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich one is a template for creating different objects ?");
		printf("\n\nA.An array\t\tB.A class\n\nC.Interface\t\tD.Method");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.A class");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat feature of OOP has a super-class sub-class concept?");
		printf("\n\nA.Hierarchical inheritance\t\tB.Single inheritance\n\nC.Multiple inheritance\t\tD.Multilevel inheritance");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Hierarchical inheritance");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWhich of the following are not the methods of the Thread class?");
		printf("\n\nA.yield()\t\tB.sleep(long msec)\n\nC.go()\t\tD.stop()");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.go()");getch();
		       goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
