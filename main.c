#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h> //For sleep

#define C   130.81
#define C_  138.59
#define D   146.83
#define D_  155.56
#define E   164.81
#define F   174.61
#define F_  185.00
#define G   196.00
#define G_  207.65
#define A   220.00
#define A_  233.08
#define B   246.94
#define C1  261.63
#define C_1 C_*2.0
#define D1  D*2.0
#define D_1 D_*2.0
#define E1  E*2.0
#define F1  F*2.0
#define F_1 F_*2.0
#define G1  G*2.0
#define G_1 G_*2.0
#define A1  A*2.0
#define A_1 A_*2.0
#define B1  B*2.0
#define C2  C1*2.0

void play(double d, int l, int abeep);
void set(int y, int x, char c, int status);
void draw(int y, int x);

/*
 *  Keyboard Playing Program
 *  Enzo Barrett
 */

int main()
{
	int abeep = system("beep -l 1 2>/dev/null"); // detects whether to use beep or abeep
    initscr(); //Start ncurses
    noecho(); //No key output on screen
    curs_set(0); //Cursor be gone!
    keypad(stdscr, TRUE); //Makes arrow keys work
    //Print keyboard
    int posx = (COLS/2)-30;
    int posy = (LINES/2)-5;
    draw(posy,posx);
    //Input holder
    int c;
    //Y for rows 
    int row1 = posy+6;
    int row2 = posy+3;
    //Last times vars
    int last = 0;
    int lx;
    int ly;
    //xy
    int x,y;
    //length
    int leng = 1000;
    //Loop until user quits
    while((c = getch()) != EOF)
    {
	//if(last != 0 && y != -1)
	//    set(ly, lx, last, 0);
	//Play note depending on key pressed
	switch(c) 
	{
	    case KEY_RESIZE:
		endwin();
		return 1;
	    case KEY_DOWN:
		y = -1;
		if(leng > 0)
		    leng-=10;
		mvprintw(0, COLS-4, "%4d", leng, abeep);
		break;
	    case KEY_UP:
		y = -1;
		if(leng < 1000)
		    leng+=10;
		mvprintw(0, COLS-4, "%4d", leng, abeep);
		break;
	    case 'z':
		y = row1;
		x = posx+2;
		set(y, x, c, 1);
		play(C, leng, abeep);
		break;
	    case 'x':
		y = row1;
		x = posx+6;
		set(y, x, c, 1);
		play(D, leng, abeep);
		break;
	    case 'c':
		y = row1;
		x = posx+10;
		set(y, x, c, 1);
		play(E, leng, abeep);
		break;
	    case 'v':
		y = row1;
		x = posx+14;
		set(y, x, c, 1);
		play(F, leng, abeep);
		break;
	    case 'b':
		y = row1;
		x = posx+18;
		set(y, x, c, 1);
		play(G, leng, abeep);
		break;
	    case 'n':
		y = row1;
		x = posx+22;
		set(y, x, c, 1);
		play(A, leng, abeep);
		break;
	    case 'm':
		y = row1;
		x = posx+26;
		set(y, x, c, 1);
		play(B, leng, abeep);
		break;
	    case 'q':
		y = row1;
		x = posx+30;
		set(y, x, c, 1);
		play(C1, leng, abeep);
		break;
	    case 'w':
		y = row1;
		x = posx+34;
		set(y, x, c, 1);
		play(D1, leng, abeep);
		break;
	    case 'e':
		y = row1;
		x = posx+38;
		set(y, x, c, 1);
		play(E1, leng, abeep);
		break;
	    case 'r':
		y = row1;
		x = posx+42;
		set(y, x, c, 1);
		play(F1, leng, abeep);
		break;
	    case 't':
		y = row1;
		x = posx+46;
		set(y, x, c, 1);
		play(G1, leng, abeep);
		break;
	    case 'y':
		y = row1;
		x = posx+50;
		set(y, x, c, 1);
		play(A1, leng, abeep);
		break;
	    case 'u':
		y = row1;
		x = posx+54;
		set(y, x, c, 1);
		play(B1, leng, abeep);
		break;
	    case 'i':
		y = row1;
		x = posx+58;
		set(y, x, c, 1);
		play(C2, leng, abeep);
		break;
	    case 's':
		y = row2;
		x = posx+4;
		set(y, x, c, 1);
		play(C_, leng, abeep);
		break;
	    case 'd':
		y = row2;
		x = posx+8;
		set(y, x, c, 1);
		play(D_, leng, abeep);
		break;
	    case 'g':
		y = row2;
		x = posx+16;
		set(y, x, c, 1);
		play(F_, leng, abeep);
		break;
	    case 'h':
		y = row2;
		x = posx+20;
		set(y, x, c, 1);
		play(G_, leng, abeep);
		break;
	    case 'j':
		y = row2;
		x = posx+24;
		set(y, x, c, 1);
		play(A_, leng, abeep);
		break;
	    case '2':
		y = row2;
		x = posx+32;
		set(y, x, c, 1);
		play(C_1, leng, abeep);
		break;
	    case '3':
		y = row2;
		x = posx+36;
		set(y, x, c, 1);
		play(D_1, leng, abeep);
		break;
	    case '5':
		y = row2;
		x = posx+44;
		set(y, x, c, 1);
		play(F_1, leng, abeep);
		break;
	    case '6':
		y = row2;
		x = posx+48;
		set(y, x, c, 1);
		play(G_1, leng, abeep);
		break;
	    case '7':
		y = row2;
		x = posx+52;
		set(y, x, c, 1);
		play(A_1, leng, abeep);
		break;
	    /*case '0':
		Play a surprise 
		system("beep -f 130 -l 100 -n -f 262 -l 100 -n -f 330 -l 100 -n -f 392 -l 100 -n -f 523 -l 100 -n -f 660 -l 100 -n -f 784 -l 300 -n -f 660 -l 300 -n -f 146 -l 100 -n -f 262 -l 100 -n -f 311 -l 100 -n -f 415 -l 100 -n -f 523 -l 100 -n -f 622 -l 100 -n -f 831 -l 300 -n -f 622 -l 300 -n -f 155 -l 100 -n -f 294 -l 100 -n -f 349 -l 100 -n -f 466 -l 100 -n -f 588 -l 100 -n -f 699 -l 100 -n -f 933 -l 300 -n -f 933 -l 100 -n -f 933 -l 100 -n -f 933 -l 100 -n -f 1047 -l 400");
		y = -1;
		x = -1;*/
	    default:
		y = -1;
		x = -1;
	}
	if(y != -1)
	    set(y, x, c, 0);
	if(c == KEY_DOWN || c == KEY_UP)
	    refresh();
	last = c;
	ly = y;
	lx = x;
    }
    endwin();
    return 0;
}

void play(double f, int len, int abeep)
{
    //Play beep based on frequency and length selected
    char command[50];
	if(abeep) {
		snprintf(command, sizeof(command), "abeep -f %f -l %d &", f, len);
		system("pkill abeep 2>/dev/null");
		system(command);
	}
	else {
		snprintf(command, sizeof(command), "beep -f %f -l %d &", f, len);
		system("pkill beep 2>/dev/null");
		system(command);
	}
}

void set(int y, int x, char c, int state)
{
    //Either turn on or off key highlight
    move(y,x);
    if(state == 1)
	addch(c | A_STANDOUT);
    else
	addch(c);
    refresh();
}

void draw(int posy, int posx)
{
    //Clear the screen and draw the keyboard, terminal size dependent
    clear();
    mvprintw(posy,   posx, "_____________________________________________________________");
    mvprintw(posy+1, posx, "|  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |   |");
    mvprintw(posy+2, posx, "|  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |   |");
    mvprintw(posy+3, posx, "|  |s| |d|  |  |g| |h| |j|  |  |2| |3|  |  |5| |6| |7|  |   |");
    mvprintw(posy+4, posx, "|  | | | |  |  | | | | | |  |  | | | |  |  | | | | | |  |   |");
    mvprintw(posy+5, posx, "|   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |");
    mvprintw(posy+6, posx, "| z | x | c | v | b | n | m | q | w | e | r | t | y | u | i |");
    mvprintw(posy+7, posx, "|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|");
    refresh();
}

