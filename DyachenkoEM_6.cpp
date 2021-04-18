// {=============================================== =============================
//! @brief      Cartoon "Chickens for a walk"
//!
//!             My First Cartoon in Learning C ++
//!
//! @date       2021
//! @author     Dyachenko Ekaterina Mikhailovna, teacher of informatics, Nefteyugansk
//
//} =============================================== =============================


#include "TXlib.h"

void PaintBackground();
void PaintAppleTree (int x, int y);
void PaintTree      (int x, int y, double size);
void PaintSpruce    (int x, int y, double sizeX, double sizeY, double veter);
void PaintCipa      (int x, int y, double sizeX, double sizeY, double glazCipa,
                     int LeftNogaCipa, int RightNogaCipa, int LR, int OpenKluv);
void PaintKura      (int x, int y, double sizeX, double sizeY, int glazKyra,
                     int LeftNogaKura, int RightNogaKura, int LR, int OpenKluv);
void PaintGysen     (int x, int y, double sizeX, double sizeY, double sizeGlazGysen, int LR);
void PaintAppl      (int x, int y, double sizeAppl);
void PaintOblako    (int x, int y, double size);
void StartTitles();
void MoveKyraVedetCip_1();
void MoveCipaWalking_2();
void MoveCipaWalking_3();
void FellAppl_4();
void VhodGysen_5();
void PobegGysen_6();
void FinishTitles();


int main()
    {
    txCreateWindow (1280, 800);
    txBegin();

    StartTitles();

    MoveKyraVedetCip_1();
    MoveCipaWalking_2();
    MoveCipaWalking_3();
    FellAppl_4();
    VhodGysen_5();
    PobegGysen_6();

    FinishTitles();

    txEnd();
    return 0;
    }

void PaintOblako (int x, int y, double size)
    {
    txSetColor     (RGB (255, 255, 255));
    txSetFillColor (RGB (255, 255, 255));
    txCircle (x,           y,           40*size);
    txCircle (x - 50*size, y,           40*size);
    txCircle (x + 50*size, y,           40*size);
    txCircle (x - 25*size, y - 50*size, 40*size);
    txCircle (x + 25*size, y - 50*size, 40*size);
    }

void PaintAppl(int x, int y, double sizeAppl)
    {
    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    txCircle (x, y, 10*sizeAppl);
    }

void MoveKyraVedetCip_1()
    {
    for (int t = 0; t <= 200; t += 2)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (302, 698, "Мама курица ведет цыплят гулять.");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (300, 700, "Мама курица ведет цыплят гулять.");

        PaintOblako ( 200 - 0.5*t,  70,   1);
        PaintOblako (1100 - 0.5*t, 150, 0.8);
        PaintOblako ( 700 - 0.5*t,  80,   1);
        PaintOblako ( 400 - 0.5*t, 100, 1.2);
        PaintOblako ( 900 - 0.5*t,  60, 0.7);

        PaintKura ( 40  + 2*t, 520,  1.2, 1.2, 0, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2*(-5), -1, 0);
        PaintCipa (-30  + 2*t, 580,  0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2*(-5),  1, 0);
        PaintCipa ( 10  + 2*t, 600,  0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2*(-5),  1, 0);
        PaintCipa (-100 + 2*t, 580,  0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2*(-5),  1, 0);
        PaintCipa (-70  + 2*t, 600,  0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2*(-5),  1, 0);
        PaintCipa (-180 + 2*t, 600,  0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2*(-5),  1, 0);
        PaintCipa (-140 + 2*t, 580,  0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2*(-5),  1, 0);

        t++;
        txSleep (100);
        }
    }

void MoveCipaWalking_2()
    {
    for (int t = 200; t <= 300; t += 2)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (302, 698, "-Гулять это хорошоооо.");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (300, 700, "-Гулять это хорошоооо.");

        PaintOblako ( 300 - t,  70,   1);
        PaintOblako (1200 - t, 150, 0.8);
        PaintOblako ( 800 - t,  80,   1);
        PaintOblako ( 500 - t, 100, 1.2);
        PaintOblako (1000 - t,  60, 0.7);

        PaintKura ( 440,         520,         1.2, 1.2, 0,                  0,                 0, -1,        0);
        PaintCipa (-30  + 2*t,   580 - 0.1*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5),  1,        0);
        PaintCipa ( 10  + 2*t,   600 + 0.1*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5),  1, t%2 * 10);
        PaintCipa (-100 + 2*t,   540 + 0.2*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5),  1,        0);
        PaintCipa ( 330,         600,         0.8, 0.8, 1,                  0,                 0,  1,        0);
        PaintCipa ( 420 - 1*t,   560 + 0.2*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5), -1,        0);
        PaintCipa (-40  + 1.5*t, 420 + 0.8*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5),  1,        0);

        t++;
        txSleep (200);
        }
    }
void MoveCipaWalking_3()
    {
    for (int t = 300; t <= 350; t += 2)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (302, 698, "-А хоррррошоооо гулять это Еещёё лучше.");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (300, 700, "-А хоррррошоооо гулять это Еещёё лучше.");

        PaintOblako ( 300 - t,  70,   1);
        PaintOblako (1200 - t, 150, 0.8);
        PaintOblako ( 800 - t,  80,   1);
        PaintOblako ( 500 - t, 100, 1.2);
        PaintOblako (1000 - t,  60, 0.7);

        PaintKura ( 440,         520,         1.2, 1.2, 0,                      0,                 0,         1,        0);
        PaintCipa ( 570,         550,         0.8, 0.8, 1,                      0,                 0, t%2*2 - 1,        0);
        PaintCipa ( 400 + 0.7*t, 600 + 0.1*t, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1)*5, (t/10) % 2 * (-5),         1,        0);
        PaintCipa (-100 + 2*t,   540 + 0.2*t, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1)*5, (t/10) % 2 * (-5), t%2*2 - 1,        0);
        PaintCipa ( 332,         600,         0.8, 0.8, 1,                      0,                 0,       - 1, t%2 * 10);
        PaintCipa (-30  + 0.5*t, 530 + 0.3*t, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1)*5, (t/10) % 2 * (-5),         1,        0);
        PaintCipa (-40  + 1.5*t, 540 + 0.4*t, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1)*5, (t/10) % 2 * (-5), t%2*2 - 1,        0);

        t++;
        txSleep (200);
        }
    }

void FellAppl_4()
    {
    for (int t = 0; t <= 200; t += 10)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (302, 698, "-Ой!   -Ой!   -Ой!");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (300, 700, "-Ой!   -Ой!   -Ой!");

        PaintOblako (-50 - t*0.1,  70,   1);
        PaintOblako (850 - t*0.1, 150, 0.8);
        PaintOblako (450 - t*0.1,  80,   1);
        PaintOblako (150 - t*0.1, 100, 1.2);
        PaintOblako (650 - t*0.1,  60, 0.7);

        PaintAppl (820 - t*0.2,  300 + t, 1);

        PaintKura (440, 520, 1.2, 1.2, t%10, 0, 0,  1, 0);
        PaintCipa (570, 550, 0.8, 0.8, 1,    0, 0, -1, 0);
        PaintCipa (645, 635, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (600, 610, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (334, 600, 0.8, 0.8, 1,    0, 0, -1, 0);
        PaintCipa (145, 635, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (485, 680, 0.8, 0.8, 1,    0, 0,  1, 0);

        t++;
        txSleep (50);
        }

    for (int t = 0; t <= 100; t += 10)
        {
        PaintBackground();

        PaintOblako (-70 - t*0.2,  70,   1);
        PaintOblako (830 - t*0.2, 150, 0.8);
        PaintOblako (430 - t*0.2,  80,   1);
        PaintOblako (130 - t*0.2, 100, 1.2);
        PaintOblako (630 - t*0.2,  60, 0.7);

        PaintAppl(780 - t*0.2, 500 + t, 1 + t*0.01);

        PaintKura (440, 520, 1.2, 1.2, t%10, 0, 0, -1, 0);
        PaintCipa (570, 550, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (645, 635, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (600, 610, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (334, 600, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (145, 635, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (485, 680, 0.8, 0.8, 1,    0, 0,  1, 0);

        t++;
        txSleep (50);
        }
    }

void VhodGysen_5()
    {
    for (int t = 0; t <= 200; t += 2)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (502, 698, "-ААА,   ЧТО ЭТО???");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (500, 700, "-ААА,   ЧТО ЭТО???");

        PaintOblako ( -90 - t*0.2,  70,   1);
        PaintOblako ( 810 - t*0.2, 150, 0.8);
        PaintOblako ( 410 - t*0.2,  80,   1);
        PaintOblako ( 110 - t*0.2, 100, 1.2);
        PaintOblako ( 610 - t*0.2,  60, 0.7);
        PaintOblako (1340 - t*0.2, 100, 0.9);
        PaintOblako (1440 - t*0.2,  60, 0.8);

        PaintGysen (745 - t*0.5, 600 + t*0.2, 1, 1, 1, 1);
        PaintAppl  (760, 600, 2);

        PaintKura (440, 520, 1.2, 1.2, 15,  0, 0, -1,  10);
        PaintCipa (570, 550, 0.8, 0.8, 2,   0, 0,  1,  10);
        PaintCipa (255, 635, 0.8, 0.8, 2,   0, 0,  1,   0);
        PaintCipa (600, 650, 0.8, 0.8, 1.5, 0, 0,  1,  10);
        PaintCipa (334, 600, 0.8, 0.8, 1.5, 0, 0,  1,   0);
        PaintCipa (385, 720, 0.8, 0.8, 1.5, 0, 0,  1,  10);
        PaintCipa (450, 705, 0.8, 0.8, 2,   0, 0,  1,   0);

        t++;
        txSleep (50);
        }

    txSetColor (TX_WHITE);
    txSelectFont ("Cambria", 50);
    txTextOut (702, 498, "-КТО ЭТО???");

    txSetColor (TX_BLACK);
    txSelectFont ("Cambria", 50);
    txTextOut (700, 500, "-КТО ЭТО???");

    PaintGysen (645, 640, 1, 1, 2, 1);
    txSleep (1000);
    }

void PobegGysen_6()
    {
    for (int t = 0; t <= 600; t += 2)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (502, 698, "- Лови его!     - Поиграем!     - Хватай! ");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (500, 700, "- Лови его!     - Поиграем!     - Хватай! ");

        PaintOblako ( 770 - t*0.2, 150, 0.8);
        PaintOblako ( 370 - t*0.2,  80,   1);
        PaintOblako (  70 - t*0.2, 100, 1.2);
        PaintOblako ( 570 - t*0.2,  60, 0.7);
        PaintOblako (1300 - t*0.2, 100, 0.9);
        PaintOblako (1400 - t*0.2,  60, 0.8);

        PaintGysen (670 + 3*t, 640, 1, 1, 2, -1);
        PaintAppl  (760, 600, 2);

        PaintKura (440 + 2*t, 520, 1.2, 1.2, 0, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5),  -1,        0);
        PaintCipa (570 + 2*t, 550, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5),   1, t%2 * 10);
        PaintCipa (255 + 2*t, 635, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5),   1,        0);
        PaintCipa (600 + 2*t, 650, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5),   1,        0);
        PaintCipa (334 + 2*t, 600, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5),   1, t%2 * 10);
        PaintCipa (385 + 2*t, 720, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5),   1,        0);
        PaintCipa (450 + 2*t, 705, 0.8, 0.8, 1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5),   1, t%2 * 10);

        t++;
        txSleep (50);
        }
    }

void PaintBackground()
    {
    txSetFillColor (RGB (108, 236, 214));
    txClear();
    txSetFillColor (RGB (51, 255, 102));
    txRectangle (0, 300, 1280, 800);

    PaintSpruce (400, 280, 1.3,   2, 0);
    PaintSpruce (600, 290, 1.3, 1.3, 0);
    PaintSpruce (500, 300, 0.5, 0.8, 0);
    PaintSpruce (700, 270, 1.3, 1.4, 0);
    PaintSpruce (900, 290, 1.3, 1.3, 0);

    PaintTree (200, 370, 1.2);
    PaintTree (100, 380, 1.7);

    PaintAppleTree (920,  320);
    PaintAppleTree (1080, 330);
    PaintAppleTree (800,  350);

    PaintTree (725,  410, 0.8);
    PaintTree (1200, 450, 0.8);
    PaintTree (1050, 425, 0.8);
    }

void PaintAppleTree (int x, int y)
    {
    txSetColor     (RGB (136,   0,  21), 25);
    txLine (x, y, x, y + 100);

    txSetColor     (RGB (  0, 128,   0));
    txSetFillColor (RGB (  0, 128,   0));
    txCircle (x,y - 100, 100);

    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    txCircle (x - 70, y - 80,  10);
    txCircle (x + 20, y - 160, 10);
    txCircle (x - 10, y - 110, 10);
    txCircle (x - 20, y - 30,  10);
    txCircle (x + 50, y - 50,  10);
    }

void PaintTree (int x, int y, double size)
    {
    txSetColor     (RGB (136,   0,  21), 15*size);
    txLine (x, y, x, y + 100*size);

    txSetColor     (RGB (  0, 128,   0), 5);
    txSetFillColor (RGB (  0, 210,   0));
    txCircle (x + 30*size, y - 130*size, 40*size);
    txCircle (x - 30*size, y -  90*size, 50*size);
    txCircle (x + 30*size, y -  75*size, 50*size);
    txCircle (x - 20*size, y -  50*size, 60*size);
    txCircle (x + 20*size, y -  30*size, 50*size);
    }

void PaintSpruce (int x, int y, double sizeX, double sizeY, double veter)
    {
    txSetColor     (RGB (136,   0,  21), 15*sizeX);
    txLine (x, y, x, y + 30*sizeX);

    txSetColor     (RGB (  0, 200,   0), 3*sizeX);
    txSetFillColor (RGB (  0, 150,   0));
    POINT triangle1[] = {{x - 80*sizeX, y},            {x + veter, y -  60*sizeY}, {x + 80*sizeX, y}};            txPolygon (triangle1,3);
    POINT triangle2[] = {{x - 60*sizeX, y - 40*sizeY}, {x + veter, y -  90*sizeY}, {x + 60*sizeX, y - 40*sizeY}}; txPolygon (triangle2,3);
    POINT triangle3[] = {{x - 40*sizeX, y - 80*sizeY}, {x + veter, y - 120*sizeY}, {x + 40*sizeX, y - 80*sizeY}}; txPolygon (triangle3,3);
    }

void PaintCipa (int x, int y, double sizeX, double sizeY, double glazCipa,
                int LeftNogaCipa, int RightNogaCipa, int LR, int OpenKluv)
    {
    txSetColor     (RGB (255, 247,  85));
    txSetFillColor (RGB (255, 247,  85));
    txCircle (x, y, 20*sizeY);

    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    POINT triangleLeftNogaCipa [] = {{x - 10*sizeX *LR, y + 17*sizeY + LeftNogaCipa}, {x -  5*sizeX *LR, y + 25*sizeY + LeftNogaCipa}, {x - 15*sizeX *LR, y + 25*sizeY + LeftNogaCipa}}; txPolygon (triangleLeftNogaCipa, 3);
    POINT triangleRightNogaCipa[] = {{x + 10*sizeX *LR, y + 17*sizeY +RightNogaCipa}, {x + 15*sizeX *LR, y + 25*sizeY +RightNogaCipa}, {x +  5*sizeX *LR, y + 25*sizeY +RightNogaCipa}}; txPolygon (triangleRightNogaCipa,3);
    POINT triangleKlyuvCipa    [] = {{x + 19*sizeX *LR, y -  5*sizeY},                {x + 25*sizeX *LR, y - 10*sizeY + OpenKluv},     {x + 15*sizeX *LR, y - 11*sizeY}};                txPolygon (triangleKlyuvCipa,    3);
    POINT triangleKlyuvCipaOpen[] = {{x + 19*sizeX *LR, y -  5*sizeY},                {x + 25*sizeX *LR, y - 10*sizeY - OpenKluv},     {x + 15*sizeX *LR, y - 11*sizeY}};                txPolygon (triangleKlyuvCipaOpen,3);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txCircle (x + 5*sizeX *LR, y - 7*sizeY, 5*sizeY *glazCipa);

    txSetFillColor (RGB (  0,   0,   0));
    txCircle (x + 6*sizeX *LR, y - 7*sizeY, 2*sizeY *glazCipa);
    }

void PaintKura (int x, int y, double sizeX, double sizeY, int glazKura,
                int LeftNogaKura, int RightNogaKura, int LR, int OpenKluv)
    {
    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    txCircle (x - 40*sizeX *LR, y - 44*sizeY, 10*sizeY);
    txCircle (x - 30*sizeX *LR, y - 47*sizeY, 10*sizeY);
    txCircle (x - 20*sizeX *LR, y - 44*sizeY, 10*sizeY);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txCircle (x,                y,            35*sizeY);
    txCircle (x - 30*sizeX *LR, y - 30*sizeY, 18*sizeY);
    txPie    (x - 20*sizeX *LR, y - 15*sizeY, x + 20*sizeX *LR, y + 15*sizeY, -215*LR, 180);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txEllipse (x - 43*sizeX *LR, y - 40*sizeY + glazKura*sizeY, x - 33*sizeX *LR, y - 30*sizeY - glazKura*sizeY);
    txSetFillColor (RGB (  0,   0,   0));
    txCircle  (x - 39*sizeX *LR, y - 34*sizeY, 2*sizeY);

    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    POINT triangleRightNogaKura[] = {{x + 10*sizeX *LR, y + 34*sizeY + LeftNogaKura}, {x + 15*sizeX *LR, y + 45*sizeY + LeftNogaKura}, {x +  5*sizeX *LR, y + 45*sizeY + LeftNogaKura}};  txPolygon (triangleRightNogaKura,3);
    POINT triangleLeftNogaKura [] = {{x - 10*sizeX *LR, y + 34*sizeY +RightNogaKura}, {x -  5*sizeX *LR, y + 45*sizeY +RightNogaKura}, {x - 15*sizeX *LR, y + 45*sizeY +RightNogaKura}};  txPolygon (triangleLeftNogaKura, 3);
    POINT triangleKlyuvKura    [] = {{x - 48*sizeX *LR, y - 30*sizeY},                {x - 54*sizeX *LR, y - 23*sizeY + OpenKluv},     {x - 45*sizeX *LR, y - 23*sizeY}};                 txPolygon (triangleKlyuvKura,    3);
    POINT triangleKlyuvKuraOpen[] = {{x - 48*sizeX *LR, y - 30*sizeY},                {x - 54*sizeX *LR, y - 23*sizeY - OpenKluv},     {x - 45*sizeX *LR, y - 23*sizeY}};                 txPolygon (triangleKlyuvKuraOpen,3);
    }

void PaintGysen (int x, int y, double sizeX, double sizeY, double sizeGlazGus, int LR)
    {
    txSetColor     (RGB (244, 122,   0), 2);
    txSetFillColor (RGB (255, 148,  40));
    txCircle (x + 30*sizeX *LR, y - 2*sizeY, 6*sizeY);
    txCircle (x + 25*sizeX *LR, y - 4*sizeY, 6*sizeY);
    txCircle (x + 20*sizeX *LR, y - 5*sizeY, 6*sizeY);
    txCircle (x + 15*sizeX *LR, y - 4*sizeY, 6*sizeY);
    txCircle (x + 10*sizeX *LR, y          , 6*sizeY);
    txCircle (x +  5*sizeX *LR, y - 2*sizeY, 6*sizeY);
    txCircle (x,                y,           6*sizeY);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (  0,   0,   0));
    txCircle (x - 2*LR, y, 2*sizeGlazGus);
    }

void StartTitles()
    {
    int t = 0;

    while (t <= 85)
        {
        txClear();
        PaintBackground();

        PaintOblako ( 200,  70,   1);
        PaintOblako (1100, 150, 0.8);
        PaintOblako ( 700,  80,   1);
        PaintOblako ( 400, 100, 1.2);
        PaintOblako ( 900,  60, 0.7);

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 200);
        txTextOut (-495 + t*10, 105, "Цыплята");
        txTextOut (1005 - t*10, 255, "на прогулке");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 200);
        txTextOut (-500 + t*10, 100, "Цыплята");
        txTextOut (1000 - t*10, 250, "на прогулке");
        PaintCipa (1690 - t*10, 370, 1.5,  1.5, 1, ((t/10) % 2 *2 - 1) *5, (t/10) % 2 *(-5), -1, 0);

        t++;
        txSleep (30);
        }

    txSleep (1000);
    }

void FinishTitles()
    {
    int t = 0;
    while (t <= 170)
        {
        txClear();
        PaintBackground();

        PaintOblako ( 650 - t*0.5, 150, 0.8);
        PaintOblako ( 250 - t*0.5,  80,   1);
        PaintOblako ( -50 - t*0.5, 100, 1.2);
        PaintOblako ( 450 - t*0.5,  60, 0.7);
        PaintOblako (1180 - t*0.5, 100, 0.9);
        PaintOblako (1280 - t*0.5,  60, 0.8);

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 70);
        txTextOut (403, 820 - 2*t,  "Мульт выполнил учитель информатики");
        txTextOut (453, 890 - 2*t,  "Дьяченко Екатерина Михайловна");
        txTextOut (503, 960 - 2*t,  "г.Нефтеюганск, 2021 год");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 70);
        txTextOut (400, 822 - 2*t, "Мульт выполнил учитель информатики");
        txTextOut (450, 892 - 2*t, "Дьяченко Екатерина Михайловна");
        txTextOut (500, 960 - 2*t, "г.Нефтеюганск, 2021 год");

        t++;
        txSleep (5);
        }

    txSleep (1000);
    }
