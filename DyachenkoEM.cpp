// {=====================================================================================
//! @brief      Cartoon "Chickens for a walk"
//!
//!             My First Cartoon in Learning C ++
//!
//! @date       2021
//! @author     Dyachenko Ekaterina Mikhailovna, teacher of informatics, Nefteyugansk
//} =====================================================================================

//#include "TXlib.h"
#include "ChickensLib.h"


void StartTitles();
void MoveKyraVedetCip_1();
void MoveCipaWalking_2();
void MoveCipaWalking_3();
void FellAppl_4();
void VhodGysen_5();
void PobegGysen_6();
void PlayCat_7();
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
    PlayCat_7();

    FinishTitles();

    txEnd();
    return 0;
    }

//------------------------------------------------------------------------------------------------------------

void MoveKyraVedetCip_1()
    {
    txPlaySound ("zvuki-utro.wav");

    for (int t = 0; t <= 200; t += 2)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (302, 698, "Мама курица ведет цыплят гулять.");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (300, 700, "Мама курица ведет цыплят гулять.");

        PaintOblako ( 200 - 0.5*t,  70,   1, pale_blue);
        PaintOblako (1100 - 0.5*t, 150, 0.8, turqoise);
        PaintOblako ( 700 - 0.5*t,  80,   1, pale_blue);
        PaintOblako ( 400 - 0.5*t, 100, 1.2, turqoise);
        PaintOblako ( 900 - 0.5*t,  60, 0.7, lilac);

        PaintKura ( 40  + 2*t, 520,  1.2, 1.2, t/10%10, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 *(-5), -1, 0, t%2 * 5);
        PaintCipa (-30  + 2*t, 580,  0.8, 0.8,       1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 *(-5),  1, 0);
        PaintCipa ( 10  + 2*t, 600,  0.8, 0.8,       1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 *(-5),  1, 0);
        PaintCipa (-100 + 2*t, 580,  0.8, 0.8,       1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 *(-5),  1, 0);
        PaintCipa (-70  + 2*t, 600,  0.8, 0.8,       1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 *(-5),  1, 0);
        PaintCipa (-180 + 2*t, 600,  0.8, 0.8,       1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 *(-5),  1, 0);
        PaintCipa (-140 + 2*t, 580,  0.8, 0.8,       1, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 *(-5),  1, 0);

        PaintCat (850, 440, 0.7, 0.9, (t/10) % 3 * 2, (t/10) % 3,      1, (-t/10) % 10, (t/10) % 10, 1, 1, 0, ryzhiy);
        PaintCat (400, 450, 1.2, 1.2, (t/10) % 2 * 5, (t/9)  % 5*(-1), 1, (-t/5)  % 10, (t/5)  % 10, 1, 1, 0, brown);

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

        PaintOblako ( 300 - t,  70,   1, pale_blue);
        PaintOblako (1200 - t, 150, 0.8, turqoise);
        PaintOblako ( 800 - t,  80,   1, pale_blue);
        PaintOblako ( 500 - t, 100, 1.2, turqoise);
        PaintOblako (1000 - t,  60, 0.7, lilac);

        PaintKura ( 440,         520,         1.2, 1.2, 0,                  0,                 0, -1,        0, t%2 * 5);
        PaintCipa (-30  + 2*t,   580 - 0.1*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5),  1,        0);
        PaintCipa ( 10  + 2*t,   600 + 0.1*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5),  1, t%2 * 10);
        PaintCipa (-100 + 2*t,   540 + 0.2*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5),  1,        0);
        PaintCipa ( 330,         600,         0.8, 0.8, 1,                  0,                 0,  1,        0);
        PaintCipa ( 420 - 1*t,   560 + 0.2*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5), -1,        0);
        PaintCipa (-40  + 1.5*t, 420 + 0.8*t, 0.8, 0.8, 1, ((t/10) % 2*2-1)*5,   (t/10) % 2*(-5),  1,        0);

        PaintCat (750 + 0.5*t, 440, 0.7, 0.9, 1, 1, 1, (-t/10) % 10, (t/10) % 10, ((t/10) % 2*2-1)*5, (t/10) % 2*(-5), 0,                      ryzhiy);
        PaintCat (400,         450, 1.2, 1.2, 1, 1, 1, (-t/5)  % 10, (t/5)  % 10,                  1,               1, ((t/10) %2 * 2 - 1)*30, brown);

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

        PaintOblako ( 300 - t,  70,   1, pale_blue);
        PaintOblako (1200 - t, 150, 0.8, turqoise);
        PaintOblako ( 800 - t,  80,   1, pale_blue);
        PaintOblako ( 500 - t, 100, 1.2, turqoise);
        PaintOblako (1000 - t,  60, 0.7, lilac);

        PaintKura ( 440,         520,         1.2, 1.2, t/10%10,                      0,                 0,         1,        0, t%2 * 5);
        PaintCipa ( 570,         550,         0.8, 0.8,       1,                      0,                 0, t%2*2 - 1,        0);
        PaintCipa ( 400 + 0.7*t, 600 + 0.1*t, 0.8, 0.8,       1, ((t/10) % 2 * 2 - 1)*5, (t/10) % 2 * (-5),         1,        0);
        PaintCipa (-100 + 2.0*t, 540 + 0.2*t, 0.8, 0.8,       1, ((t/10) % 2 * 2 - 1)*5, (t/10) % 2 * (-5), t%2*2 - 1,        0);
        PaintCipa ( 332,         600,         0.8, 0.8,       1,                      0,                 0,       - 1, t%2 * 10);
        PaintCipa (-30  + 0.5*t, 530 + 0.3*t, 0.8, 0.8,       1, ((t/10) % 2 * 2 - 1)*5, (t/10) % 2 * (-5),         1,        0);
        PaintCipa (-40  + 1.5*t, 540 + 0.4*t, 0.8, 0.8,       1, ((t/10) % 2 * 2 - 1)*5, (t/10) % 2 * (-5), t%2*2 - 1,        0);

        PaintCat (750 + 0.5*t, 440,         0.7,  0.9, 1, 1, 1, (-t/10) % 10, (t/10) % 10, ((t/10) % 2*2-1)* 5, (t/10) % 2* (-5),                      0, ryzhiy);
        PaintCat (250 + 0.5*t, 510 - 0.2*t, 1.2,  1.2, 1, 1, 1, (-t/5)  % 10, (t/5)  % 10, ((t/10) % 2*2-1)*10, (t/10) % 2*(-10), ((t/10) %2 * 2 - 1)*30,  brown);

        t++;
        txSleep (200);
        }
    }

void FellAppl_4()
    {
    txPlaySound ("applbum.wav");

    for (int t = 0; t <= 200; t += 10)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (302, 698, "-Ой!   -Ой!   -Ой!");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (300, 700, "-Ой!   -Ой!   -Ой!");

        PaintOblako (-50 - t*0.1,  70,   1, pale_blue);
        PaintOblako (850 - t*0.1, 150, 0.8, turqoise);
        PaintOblako (450 - t*0.1,  80,   1, pale_blue);
        PaintOblako (150 - t*0.1, 100, 1.2, turqoise);
        PaintOblako (650 - t*0.1,  60, 0.7, lilac);

        PaintAppl (820 - t*0.2,  300 + t, 1);

        PaintKura (440, 520, 1.2, 1.2, t%10, 0, 0,  1, 0, 1);
        PaintCipa (570, 550, 0.8, 0.8, 1,    0, 0, -1, 0);
        PaintCipa (645, 635, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (600, 610, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (334, 600, 0.8, 0.8, 1,    0, 0, -1, 0);
        PaintCipa (145, 635, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (485, 680, 0.8, 0.8, 1,    0, 0,  1, 0);

        PaintCat (925 + 2*t, 440, 0.7,  0.9, 1, 1, 1, (-t/10) % 10, (t/10) % 10, ((t/10) % 2*2-1)* 5, (t/10) % 2* (-5),                      0, ryzhiy);
        PaintCat (425 - 2*t, 440, 1.2,  1.2, 1, 1, 1, (-t/5)  % 10, (t/5)  % 10, ((t/10) % 2*2-1)*10, (t/10) % 2*(-10), ((t/10) %2 * 2 - 1)*30,  brown);

        PaintTree (200, 370, 1.2);
        PaintTree (100, 380, 1.7);
        PaintTree (1200, 450, 0.8);
        PaintTree (1050, 425, 0.8);

        t++;
        txSleep (50);
        }

    for (int t = 0; t <= 100; t += 10)
        {
        PaintBackground();

        PaintOblako (-70 - t*0.2,  70,   1, pale_blue);
        PaintOblako (830 - t*0.2, 150, 0.8, turqoise);
        PaintOblako (430 - t*0.2,  80,   1, pale_blue);
        PaintOblako (130 - t*0.2, 100, 1.2, turqoise);
        PaintOblako (630 - t*0.2,  60, 0.7, lilac);

        PaintAppl(780 - t*0.2, 500 + t, 1 + t*0.01);

        PaintKura (440, 520, 1.2, 1.2, t%10, 0, 0, -1, 0, 0);
        PaintCipa (570, 550, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (645, 635, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (600, 610, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (334, 600, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (145, 635, 0.8, 0.8, 1,    0, 0,  1, 0);
        PaintCipa (485, 680, 0.8, 0.8, 1,    0, 0,  1, 0);

        PaintCat (  25 - 2*t, 440, 1.2,  1.2, 1, 1, 1, (-t/5)  % 10, (t/5)  % 10, ((t/10) % 2*2-1)*10, (t/10) % 2*(-10), ((t/10) %2 * 2 - 1)*30,  brown);
        PaintTree (200, 370, 1.2);
        PaintTree (100, 380, 1.7);

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

        PaintOblako ( -90 - t*0.2,  70,   1, pale_blue);
        PaintOblako ( 810 - t*0.2, 150, 0.8, turqoise);
        PaintOblako ( 410 - t*0.2,  80,   1, pale_blue);
        PaintOblako ( 110 - t*0.2, 100, 1.2, turqoise);
        PaintOblako ( 610 - t*0.2,  60, 0.7, lilac);
        PaintOblako (1340 - t*0.2, 100, 0.9, lilac);
        PaintOblako (1440 - t*0.2,  60, 0.8, turqoise);

        PaintGysen (745 - t*0.5, 600 + t*0.2, 1, 1, 1, 1);
        PaintAppl  (760, 600, 2);

        PaintKura (440, 520, 1.2, 1.2, 15,  0, 0, -1,  10, -100);
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
    txPlaySound ("gysen1.wav");
    txSleep (1600);
    }

void PobegGysen_6()
    {
    txPlaySound ("golosa-kur-i-cypljat.wav");

    for (int t = 0; t <= 600; t += 2)
        {
        PaintBackground();

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 50);
        txTextOut (502, 698, "- Лови его!     - Поиграем!     - Хватай! ");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 50);
        txTextOut (500, 700, "- Лови его!     - Поиграем!     - Хватай! ");

        PaintOblako ( 770 - t*0.2, 150, 0.8, turqoise);
        PaintOblako ( 370 - t*0.2,  80,   1, pale_blue);
        PaintOblako (  70 - t*0.2, 100, 1.2, turqoise);
        PaintOblako ( 570 - t*0.2,  60, 0.7, lilac);
        PaintOblako (1300 - t*0.2, 100, 0.9, lilac);
        PaintOblako (1400 - t*0.2,  60, 0.8, turqoise);

        PaintGysen (670 + 3*t, 640, 1, 1, 2, -1);
        PaintAppl  (760, 600, 2);

        PaintKura (440 + 2*t, 520, 1.2, 1.2, 0, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5),  -1,        0, t%2 * 15);
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

void PlayCat_7 ()
    {
    for (int t = 0; t <= 150; t += 2)
        {
        PaintBackground();

        PaintCat (0 + t*5, 570 + ((t/10) %2 * 2 - 1)*30, 1.2,  1.2, 1, (t/10) % 5*(-1), 1, (-t/5) % 10, (t/5)  % 10, ((t/10) % 2*2-1)*10, (t/10) % 2*(-10), ((t/10) %2 * 2 - 1)*30,  brown);
        PaintAppl (760, 600, 2);

        PaintOblako ( 650 - t*0.2, 150, 0.8, turqoise);
        PaintOblako ( 250 - t*0.2,  80,   1, pale_blue);
        PaintOblako ( -50 - t*0.2, 100, 1.2, turqoise);
        PaintOblako ( 450 - t*0.2,  60, 0.7, lilac);
        PaintOblako (1180 - t*0.2, 100, 0.9, lilac);
        PaintOblako (1280 - t*0.2,  60, 0.8, turqoise);


        t++;
        txSleep (100);
        }

    for (int t = 1; t <= 160; t += 2)
        {
        PaintBackground();

        PaintCat  (750 - t*5,  600, 1.2, 1.2, 1, (t/10) % 5*(-1), t%10, (-t/5) % 10, (t/5) % 10, ((t/10) % 2*2-1)*10, (t/10) % 2*(-10), ((t/10) %2 * 2 - 1)*30,  brown);
        PaintAppl (760 - t*10, 600 + ((t/10) %2 * 2 - 1)*20, 2);

        PaintOblako ( 629 - t*0.2, 150, 0.8, turqoise);
        PaintOblako ( 229 - t*0.2,  80,   1, pale_blue);
        PaintOblako ( -71 - t*0.2, 100, 1.2, turqoise);
        PaintOblako ( 429 - t*0.2,  60, 0.7, lilac);
        PaintOblako (1159 - t*0.2, 100, 0.9, lilac);
        PaintOblako (1259 - t*0.2,  60, 0.8, turqoise);

        t++;
        txSleep (100);
        }
    }
//------------------------------------------------------------------------------------------------------------



void StartTitles()
    {
    int t = 0;

    while (t <= 85)
        {
        txClear();
        PaintBackground();

        PaintOblako ( 200,  70,   1, pale_blue);
        PaintOblako (1100, 150, 0.8, turqoise);
        PaintOblako ( 700,  80,   1, pale_blue);
        PaintOblako ( 400, 100, 1.2, turqoise);
        PaintOblako ( 900,  60, 0.7, lilac);

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

        PaintOblako ( 597 - t*0.2, 150, 0.8, turqoise);
        PaintOblako ( 197 - t*0.2,  80,   1, pale_blue);
        PaintOblako ( 397 - t*0.2,  60, 0.7, lilac);
        PaintOblako (1127 - t*0.2, 100, 0.9, lilac);
        PaintOblako (1227 - t*0.2,  60, 0.8, turqoise);

        txSetColor (TX_WHITE);
        txSelectFont ("Cambria", 70);
        txTextOut (373, 820 - 2*t,  "Мультфильм выполнила учитель информатики");
        txTextOut (453, 890 - 2*t,  "Дьяченко Екатерина Михайловна");
        txTextOut (503, 960 - 2*t,  "г.Нефтеюганск, 2021 год");

        txSetColor (TX_BLACK);
        txSelectFont ("Cambria", 70);
        txTextOut (370, 822 - 2*t, "Мультфильм выполнила учитель информатики");
        txTextOut (450, 892 - 2*t, "Дьяченко Екатерина Михайловна");
        txTextOut (500, 960 - 2*t, "г.Нефтеюганск, 2021 год");

        t++;
        txSleep (5);
        }

    txSleep (1000);
    }
