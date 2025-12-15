#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    int t = 0, x = 19, y = 30, maxx;
    initgraph(&gd, &gm, "C://TURBOC3//BGI");
    while (x < 99)
    {
        line(0, 50, 100, 50);
        line(100, 50, 500, 450);
        line(500, 450, 700, 450);
        x = x + t;
        setfillstyle(9, GREEN);
        circle(x, y, 20);
        floodfill(x, y, WHITE);
        t++;
        delay(200);
        cleardevice();
    }
    while (99 <= x <= 500 && y <= 401)
    {
        line(0, 50, 100, 50);
        line(100, 50, 500, 450);
        line(500, 450, 700, 450);
        x = x + t;
        y = y + t;
        setfillstyle(9, GREEN);
        circle(x, y, 20);
        floodfill(x, y, WHITE);
        t++;
        delay(180);
        cleardevice();
    }
    maxx = getmaxx();
    while (x < maxx)
    {
        line(0, 50, 100, 50);
        line(100, 50, 500, 450);
        line(500, 450, 700, 450);
        x = x + t;
        setfillstyle(9, GREEN);
        circle(x, 430, 20);
        floodfill(x, 430, WHITE);
        t++;
        delay(190);
        cleardevice();
    }
    getch();
    closegraph();
    return 0;
}