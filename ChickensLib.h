// {=====================================================================================
//! @brief      Cartoon library "Chickens for a walk"
//!
//!             My first cartoon library when learning C ++
//!
//! @date       2021
//! @author     Dyachenko Ekaterina Mikhailovna, teacher of informatics, Nefteyugansk
//!
//! @mainpage
//!
//!
//!
//! @defgroup Scenery
//!
//!             Functions
//!           - @ref PaintAppleTree  ()
//!           - @ref PaintTree       ()
//!           - @ref PaintSpruce     ()
//!           - @ref PaintOblako     ()
//!           - @ref PaintBackground ()
//!
//! @defgroup Animals
//!
//!             Functions
//!           - @ref PaintCipa  ()
//!           - @ref PaintKura  ()
//!           - @ref PaintGysen ()
//!           - @ref PaintCat   ()
//!
//! @defgroup Other
//!
//!             Functions
//!           - @ref PaintAppl ()
//!
//} =====================================================================================

#include "TXlib.h"

void PaintBackground();
void PaintAppleTree (int x, int y);
void PaintTree      (int x, int y, double size);
void PaintSpruce    (int x, int y, double sizeX, double sizeY, double veter);
void PaintCipa      (int x, int y, double size, double glazCipa,
                     int LeftNogaCipa, int RightNogaCipa, int LR, int OpenKluv);
void PaintKura      (int x, int y, double size, int glazKura,
                     int LeftNogaKura, int RightNogaKura, int LR, int OpenKluv, int flap);
void PaintGysen     (int x, int y, double sizeX, double sizeY, double sizeGlazGysen, int LR);
void PaintAppl      (int x, int y, double sizeAppl);
void PaintOblako    (int x, int y, double size, int color);
void PaintCat       (int x, int y, double sizeX, double sizeY, int nose,
                     int glazCatZrachek, double sizeGlazCat,
                     int LeftYho, int RightYho, int LeftNogaCat, int RightNogaCat,
                     int khvost, int color);


const int ryzhiy    = (RGB (255, 115,  50));
      int brown     = (RGB (181,  90,  50));
      int pale_blue = (RGB (200, 255, 255));
      int turqoise  = (RGB (227, 255, 255));
      int lilac     = (RGB (230, 205, 255));





//------------------------------------------------------------------------------------------------------------



void PaintBackground()
    {
    //txCreateWindow (1280, 800);
    txSetColor     (RGB (108, 236, 214));
    txSetFillColor (RGB (108, 236, 214));
    txClear();
    txSetColor     (RGB (51, 255, 102));
    txSetFillColor (RGB (51, 255, 102));
    txRectangle (0, 300, 1280, 800);

    PaintSpruce (400, 280, 1.3,   2, 0);
    PaintSpruce (600, 290, 1.3, 1.3, 0);
    PaintSpruce (500, 300, 0.5, 0.8, 0);
    PaintSpruce (700, 270, 1.3, 1.4, 0);
    PaintSpruce (900, 290, 1.3, 1.3, 0);

    PaintTree (200, 370, 1.2);
    PaintTree (100, 380, 1.7);

    PaintAppleTree ( 920, 320);
    PaintAppleTree (1080, 330);
    PaintAppleTree (800,  350);

    PaintTree ( 725, 410, 0.8);
    PaintTree (1200, 450, 0.8);
    PaintTree (1050, 425, 0.8);
    }

//{=========================================================================================================
//! ������ ������ ������
//!
//! @param x     - x ���������� ������� ����� ������ ������ (����� ������� ������)
//! @param y     - y ���������� ������� ����� ������ ������ (����� ������� ������)
//!
//! @par ������ �������������
//!
//! @code
//!        PaintAppleTree (125, 210);
//!
//! @endcode
//!
//}=========================================================================================================

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

//{=========================================================================================================
//! ������ ���������� ������
//!
//! @param x     - x ���������� ������� ����� ������ ������ (����� ������� ������)
//! @param y     - y ���������� ������� ����� ������ ������ (����� ������� ������)
//! @param size  - ������ ������. ���� �������� ����� 1, �� ������ ������ �������� (200 �� 350 ��������)
//!
//! @par ������ �������������
//!
//! @code
//!        PaintTree (100, 200, 1);
//!
//! @endcode
//!
//}=========================================================================================================

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

//{=========================================================================================================
//! ������ ������ ���
//!
//! @param x      - x ���������� ������� ����� ������ ������ (����� ������� ������)
//! @param y      - y ���������� ������� ����� ������ ������ (����� ������� ������)
//! @param sizeX  - ������ ������ �� ������. ���� �������� ����� 1, �� ������ ������ �������� 180 ��������
//! @param sizeY  - ������ ������ �� ������. ���� �������� ����� 1, �� ������ ������ �������� 180 ��������
//! @param veter  - ����� ������ ������ ("0" - ��� �����; "-20" - ������ ������; "+30" - ������ �������)
//!
//! @par ������ �������������
//!
//! @code
//!        PaintSpruce (100, 150, 1,     1,   0);
//!        PaintSpruce (500, 300, 0.5, 0.8, -20);
//!        PaintSpruce (700, 270, 1.3, 1.4, +30);
//!
//! @endcode
//!
//}=========================================================================================================

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

//{=========================================================================================================
//! ������ ��������
//!
//! @param x              - x ���������� ������ ���� ��������
//! @param y              - y ���������� ������ ���� ��������
//! @param size           - ������ ��������. ���� �������� ����� 1 (��� �����), ������ �������� �������� 40 �� 45 ��������
//! @param glazCipa       - ������ ����� ��������. ���� �������� ����� 1 (��� �����), �������� ���� ����������� �������� ����������� ��� ���������� �����
//! @param LeftNogaCipa   - ������������ ����� ���� ��������. ���� �������� ����� 0, �� �������� ����� (�� ������)
//! @param RightNogaCipa  - ������������ ������ ���� ��������. ���� �������� ����� 0, �� �������� ����� (�� ������)
//! @param LR             - ����������� � ������� �������� ��������. "1" - �������� ������� �������, "-1" - �������� ������� ������
//! @param OpenKluv       - ���� �������� ����� ������� ��� �������. "0" - ���� ������, "10" - ���� ������ ������. ���������� ������ �������� �� 0 �� 10, �� ��� �� �����������.
//!
//! @par ������ �������������
//!
//! @code
//!        PaintCipa (25, 25, 1, 1, 0, 0, 1, 10);   // �������� ������� 40 �� 45 ��������, �������� �����, ������� ������, �� � ���� ������ ����.
//!
//!        PaintCipa (10  + 2*t, 600 + 0.1*t, 0.8, 1, ((t/10) % 2*2-1)*5, (t/10) % 2*(-5), t%2*2 - 1, t%2 * 10);  //�������� ������ ������ ������������ �������, ������ �� ���������, ������� � ������ ������� � �������������
//!
//! @endcode
//!
//}=========================================================================================================

void PaintCipa (int x, int y, double size, double glazCipa,
                int LeftNogaCipa, int RightNogaCipa, int LR, int OpenKluv)
    {
    txSetColor     (RGB (255, 247,  85));
    txSetFillColor (RGB (255, 247,  85));
    txCircle (x, y, 20*size);

    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    POINT triangleLeftNogaCipa [] = {{x - 10*size *LR, y + 17*size + LeftNogaCipa}, {x -  5*size *LR, y + 25*size + LeftNogaCipa}, {x - 15*size *LR, y + 25*size + LeftNogaCipa}}; txPolygon (triangleLeftNogaCipa, 3);
    POINT triangleRightNogaCipa[] = {{x + 10*size *LR, y + 17*size +RightNogaCipa}, {x + 15*size *LR, y + 25*size +RightNogaCipa}, {x +  5*size *LR, y + 25*size +RightNogaCipa}}; txPolygon (triangleRightNogaCipa,3);
    POINT triangleKlyuvCipa    [] = {{x + 19*size *LR, y -  5*size},                {x + 25*size *LR, y - 10*size + OpenKluv},     {x + 15*size *LR, y - 11*size}};                txPolygon (triangleKlyuvCipa,    3);
    POINT triangleKlyuvCipaOpen[] = {{x + 19*size *LR, y -  5*size},                {x + 25*size *LR, y - 10*size - OpenKluv},     {x + 15*size *LR, y - 11*size}};                txPolygon (triangleKlyuvCipaOpen,3);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txCircle (x + 5*size *LR, y - 7*size, 5*size *glazCipa);

    txSetFillColor (RGB (  0,   0,   0));
    txCircle (x + 6*size *LR, y - 7*size, 2*size *glazCipa);
    }

//{=========================================================================================================
//! ������ ����
//!
//! @param x              - x ���������� ������ ���� ����
//! @param y              - y ���������� ������ ���� ����
//! @param size           - ������ ����. ���� �������� ����� 1 (��� �����), ������ ���� �������� 110 �� 110 ��������
//! @param glazKura       - ������ ����� ����. ���� �������� ����� 1 (��� �����), �������� ���� ����������� ������� �������, ����������� ��� ���������� �����
//! @param LeftNogaKura   - ������������ ����� ���� ����. ���� �������� ����� 0, �� ���� ����� (�� ������)
//! @param RightNogaKura  - ������������ ������ ���� ����. ���� �������� ����� 0, �� ���� ����� (�� ������)
//! @param LR             - ����������� � ������� ��������� ����. "1" - ���� ������� ������, "-1" - ���� ������� �������
//! @param OpenKluv       - ���� ���� ����� ������� ��� �������. "0" - ���� ������, "10" - ���� ������ ������. ���������� ������ �������� �� 0 �� 10, �� ��� �� �����������.
//! @param flap           - ����� ����, ������ ����� ������. "0" - ��������� ���������, ����� �������
//!
//! @par ������ �������������
//!
//! @code
//!        PaintKura (60, 60, 1, 1, 0, 0,  1, 0, 0);   // ���� ������� 110 �� 110 ��������, �������� �����, ������� ������, ���� ������.
//!
//!        PaintKura (440 + 2*t, 520, 1.2, t%10, ((t/10) % 2 * 2 - 1) * 5, (t/10) % 2 * (-5), -1, 0, t%2 * 15);  //���� ������ ������ ������������ �������, ������ ����� �� �����, ������� ������� (���� ���� ������), ������� �������, ���� ������, ������ �����.
//!
//! @endcode
//!
//}=========================================================================================================

void PaintKura (int x, int y, double size, int glazKura,
                int LeftNogaKura, int RightNogaKura, int LR, int OpenKluv, int flap)
    {
    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    txCircle (x - 40*size *LR, y - 44*size, 10*size);
    txCircle (x - 30*size *LR, y - 47*size, 10*size);
    txCircle (x - 20*size *LR, y - 44*size, 10*size);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txCircle (x,               y,           35*size);
    txCircle (x - 30*size *LR, y - 30*size, 18*size);
    txPie    (x - 20*size *LR, y - 15*size, x + 20*size *LR, y + 15*size + flap, -215*LR, 180 + flap);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txEllipse (x - 43*size *LR, y - 40*size + glazKura*size, x - 33*size *LR, y - 30*size - glazKura*size);
    txSetFillColor (RGB (  0,   0,   0));
    txCircle  (x - 39*size *LR, y - 34*size, 2*size);

    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    POINT triangleRightNogaKura[] = {{x + 10*size *LR, y + 34*size + LeftNogaKura}, {x + 15*size *LR, y + 45*size + LeftNogaKura}, {x +  5*size *LR, y + 45*size + LeftNogaKura}};  txPolygon (triangleRightNogaKura,3);
    POINT triangleLeftNogaKura [] = {{x - 10*size *LR, y + 34*size +RightNogaKura}, {x -  5*size *LR, y + 45*size +RightNogaKura}, {x - 15*size *LR, y + 45*size +RightNogaKura}};  txPolygon (triangleLeftNogaKura, 3);
    POINT triangleKlyuvKura    [] = {{x - 48*size *LR, y - 30*size},                {x - 54*size *LR, y - 23*size + OpenKluv},     {x - 45*size *LR, y - 23*size}};                 txPolygon (triangleKlyuvKura,    3);
    POINT triangleKlyuvKuraOpen[] = {{x - 48*size *LR, y - 30*size},                {x - 54*size *LR, y - 23*size - OpenKluv},     {x - 45*size *LR, y - 23*size}};                 txPolygon (triangleKlyuvKuraOpen,3);
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

void PaintOblako (int x, int y, double size, int color)
    {
    txSetColor     (color);
    txSetFillColor (color);
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

void PaintCat (int x, int y, double sizeX, double sizeY, int nose,
               int glazCatZrachek, double sizeGlazCat,
               int LeftYho, int RightYho, int LeftNogaCat, int RightNogaCat, int khvost, int color)
    {
    txSetColor     (color);                                     //������ ����
    txSetFillColor (color);
    txCircle (x, y - 70*sizeY, 30*sizeY);

    txSetColor     (color);                                     //��� ����
    txSetFillColor (color);
    POINT triangleLeftYho [] = {{x - 30*sizeX, y - 80*sizeY}, {x - 35*sizeX +  LeftYho, y - 115*sizeY}, {x - 5*sizeX, y - 95*sizeY}}; txPolygon (triangleLeftYho, 3);
    POINT triangleRightYho[] = {{x + 25*sizeX, y - 80*sizeY}, {x + 30*sizeX + RightYho, y - 115*sizeY}, {x,           y - 95*sizeY}}; txPolygon (triangleRightYho,3);

    txSetColor     (color, 25*sizeY);                           //���� ����
    txLine   (x, y - 20*sizeY, x, y - 70*sizeY);

    txSetColor     (color, 10*sizeY);                           //����� ����
    txArc    (x - 50*sizeX, y - 70*sizeY, x, y - 20*sizeY, 180 + khvost, 170);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 250));
    txEllipse (x - 25*sizeX, y - 25*sizeY +  LeftNogaCat, x,            y +  LeftNogaCat);    //���� ����
    txEllipse (x,            y - 25*sizeY + RightNogaCat, x + 25*sizeX, y + RightNogaCat);

    txEllipse (x - 25*sizeX + sizeGlazCat*sizeY, y - 95*sizeY + sizeGlazCat*sizeY,            //����� ����
               x,                                y - 70*sizeY - sizeGlazCat*sizeY);
    txEllipse (x,                                y - 95*sizeY + sizeGlazCat*sizeY,
               x + 25*sizeX - sizeGlazCat*sizeY, y - 70*sizeY - sizeGlazCat*sizeY);

    txSetColor     (RGB (  0,   0,  0));
    txSetFillColor (RGB (  0,   0,  0));
    txEllipse (x - 15*sizeX + glazCatZrachek, y - 92*sizeY + sizeGlazCat, x - 10*sizeX + glazCatZrachek, y - 75*sizeY - sizeGlazCat);
    txEllipse (x + 10*sizeX + glazCatZrachek, y - 92*sizeY + sizeGlazCat, x + 15*sizeX + glazCatZrachek, y - 75*sizeY - sizeGlazCat);
                                                                                      //��� ����
    POINT triangleNose[] = {{x - 5*sizeX, y - 70*sizeY + nose}, {x, y - 65*sizeY + nose}, {x + 5*sizeX, y - 70*sizeY + nose}}; txPolygon (triangleNose,3);
    txLine (x - 40*sizeX, y - 70*sizeY + nose, x -  5*sizeX, y - 65*sizeY + nose);    //��� ����
    txLine (x - 45*sizeX, y - 63*sizeY + nose, x -  5*sizeX, y - 63*sizeY + nose);
    txLine (x - 40*sizeX, y - 55*sizeY + nose, x -  5*sizeX, y - 61*sizeY + nose);
    txLine (x +  5*sizeX, y - 65*sizeY + nose, x + 40*sizeX, y - 70*sizeY + nose);
    txLine (x +  5*sizeX, y - 63*sizeY + nose, x + 45*sizeX, y - 63*sizeY + nose);
    txLine (x +  5*sizeX, y - 61*sizeY + nose, x + 40*sizeX, y - 55*sizeY + nose);

    txSetColor     (RGB (255, 0, 0));                                          //���� ����
    txSetFillColor (RGB (255, 0, 0));
    txPie (x - 5*sizeX, y - 60*sizeY, x + 5*sizeX, y - 45*sizeY, -20, 20);
    }
