#include "iGraphics.h"

double pi=3.1416;
double xs, ys;
double xm, ym;
double xh, yh;
double hour, minute, second;
void iDraw()
{
    iClear();
    iSetColor(255, 255, 200);
    iCircle(400, 500, 200);
    iSetColor(255, 255, 200);
    iFilledCircle(400, 500, 195);
    iSetColor(0, 0, 200);
    iLine(400, 500, 400+190*cos(-xs), 500+190*sin(-ys));
    iSetColor(255, 0, 0);
    iLine(400, 500, 400+170*cos(-xm), 500+170*sin(-ym));
    iSetColor(0, 200, 0);
    iLine(400, 500, 400+150*cos(-xh), 500+150*sin(-yh));
    iText(400+204*cos(pi/2), 500+204*sin(pi/2), "12" );
    iText(400+204*cos(pi/3), 500+204*sin(pi/3), "1" );
    iText(400+204*cos(pi/6), 500+204*sin(pi/6), "2" );
    iText(400+204*cos(0), 500+204*sin(0), "3" );
    iText(400+204*cos(-pi/6), 500+204*sin(-pi/6), "4" );
    iText(400+215*cos(-pi/3), 500+215*sin(-pi/3), "5" );
    iText(400+210*cos(-pi/2), 500+210*sin(-pi/2), "6" );
    iText(400+215*cos(-2*pi/3), 500+215*sin(-2*pi/3), "7" );
    iText(400+215*cos(-5*pi/6), 500+215*sin(-5*pi/6), "8" );
    iText(400+213*cos(pi), 500+205*sin(pi), "9" );
    iText(400+215*cos(5*pi/6), 500+215*sin(5*pi/6), "10" );
    iText(400+210*cos(2*pi/3), 500+210*sin(2*pi/3), "11" );
}

void sec()
{
    xs += 6*pi/180;
    ys += 6*pi/180;
}

void mint()
{
    xm += .1*pi/180;
    ym += .1*pi/180;
}

void hr()
{
    xh += (.5)*pi/180;
    yh += (.5)*pi/180;
}

int main ()
{
    iClear();
    double h, m, s;
    int a;
    printf("press 1 for system time, 2 for input\n");
    scanf("%d", &a);

    if(a==2){
       scanf("%lf %lf %lf", &hour, &minute, &second);
    }

    if(a==1){
         time_t t;
    time(&t);
    struct tm * time =  localtime(&t);

    hour = time->tm_hour;
    minute = time->tm_min;
    second = time->tm_sec;
    }

    h = hour + minute/60 + second/3600;
    m = minute + second/60;
    s = second;
    xh = (h-3)*pi/6;
    yh = xh;
    xm = (m-15)*pi/30;
    ym = xm;
    xs = (s-15)*pi/30;
    ys = xs;\
    iSetTimer(1000, sec);
    iSetTimer(1000, mint);
    iSetTimer(60000, hr);
    iInitialize(800, 800, "clock");
    return 0;
}
