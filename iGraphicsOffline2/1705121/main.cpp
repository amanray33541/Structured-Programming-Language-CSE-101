# include "iGraphics.h"
#include<stdio.h>

char str[100], str2[100];
int len;
int mode;
int r=1, g=255, b=1, x=50, y=100, dx=1, sym, t, a, i=0, k=0;

void drawTextBox()
{
	iSetColor(150, 150, 150);
	iRectangle(100, 400, 400, 30);
}

void s1()
{
    iFilledRectangle(x+a, y, 40, 5);
}
void s2()
{
    iFilledRectangle(x+35+a, y, 5, 40);
}
void s3()
{
    iFilledRectangle(x+35+a, y+40, 5, 40);
}
void s4()
{
    iFilledRectangle(x+a, y+75, 40, 5);
}
void s5()
{
    iFilledRectangle(x+a, y+35, 5, 45);
}
void s6()
{
    iFilledRectangle(x+a, y, 5, 40);
}
void s7()
{
    iFilledRectangle(x+a, y+35, 40, 5);
}

/*
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here

	iClear();

	drawTextBox();
	if(mode == 1)
	{
		iSetColor(255, 255, 255);
		iText(110, 410, str);
	}

	iText(10, 10, "Click to activate the box, enter to finish.");
	iSetColor(r, g, b);
	if(t == 1)
    {
        i = 0;
        while(str2[i] != 0)
        {
            if(str2[i] == '0')
        {
            a = i*50;
            s1(); s2(); s3(); s4(); s5(); s6();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '1')
        {
            a = i*50;
            s2(); s3();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '2')
        {
            a = i*50;
            s1(); s3(); s4(); s6(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '3')
        {
            a = i*50;
            s1(); s2(); s3(); s4(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '4')
        {
            a = i*50;
            s2(); s3(); s5(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '5')
        {
            a = i*50;
            s1(); s2(); s4(); s5(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '6')
        {
            a = i*50;
            s1(); s2(); s4(); s5(); s6(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '7')
        {
            a = i*50;
            s2(); s3(); s4();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '8')
        {
            a = i*50;
            s1(); s2(); s3(); s4(); s5(); s6(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == '9')
        {
            a = i*50;
            s1(); s2(); s3(); s4(); s5(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == 'A')
        {
            a = i*50;
            s2(); s3(); s4(); s5(); s6(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == 'b')
        {
            a = i*50;
            s1(); s2(); s5(); s6(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == 'C')
        {
            a = i*50;
            s1(); s4(); s5(); s6();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == 'D')
        {
            a = i*50;
            s1(); s2(); s3(); s4(); s5(); s6();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == 'E')
        {
            a = i*50;
            s1(); s4(); s5(); s6(); s7();
        }
        i++;
        }
         i = 0;
         while(str2[i] != 0)
        {
            if(str2[i] == 'F')
        {
            a = i*50;
            s4(); s5(); s6(); s7();
        }
        i++;
        }
    }
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)//F:\textinput\textinput.cbp
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if(mx >= 100 && mx <= 500 && my >= 400 && my <= 430 && mode == 0)
		{
			mode = 1;
			k = 0;
		}
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	int i;
	if(mode == 1)
	{
        if(key == '\r')
		{
			mode = 0;
			strcpy(str2, str);
			printf("%s\n", str2);
			for(i = 0; i < len; i++)
				str[i] = 0;
			len = 0;
			t = 1;
		}
		else
		{
			str[len] = key;
			len++;
			k++;
		}
	}

	if(key == 'x')
	{
		//do something with 'x'
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}

	//place your codes for other keys here
}

void clchange()
{
    if(r<0 || r>255)
        r=20;
    r += 1;
    if(g<20 || g>255)
        g=255;
    g -= 1;
    if(b<0 || b>255)
        b=25;
    b +=1;
    x -= dx;
    if (x<-k*50) x=600;

}

int main()
{
	//place your own initialization codes here.
	len = 0;
	mode = 0;
	str[0]= 0;
	iSetTimer(5, clchange);
	iInitialize(600, 600, "TextInputDemo");
	return 0;
}
