//{=====================================================================================
//! @file       ChickensLib.h
//!
//! @brief      Cartoon library "Chickens for a walk"
//!
//!             My first cartoon library when learning C ++
//!
//! @date       2021
//! @author     Dyachenko Ekaterina Mikhailovna, teacher of informatics, Nefteyugansk
//!
//! @mainpage
//!             ���������� ���������� ��� �������� �����������
//!
//!@par   ����������
//!
//!       ������ ���������� ���������� �� �������� �������, ������� ������������
//!       ��� �������� ����������� � ������� �� ���������� ��������:
//!     - ������� ��� ��������� ���� �����, ������� ����� ������������ � ����� ������������,
//!       ��������� �� ������ ������� ���������� "������ ���������" TXLib.h;
//!     - ������� �������� ����������, ������� ������������ � ����������� "������� �� ��������";
//!     - ������ �������, � ������ ������ �������� ������.
//!     - ������� ������������� ������� ����������.
//!
//!
//! @defgroup Scenery
//!
//! @par Functions
//!           - @ref PaintAppleTree  ()
//!           - @ref PaintTree       ()
//!           - @ref PaintSpruce     ()
//!           - @ref PaintOblako     ()
//!           - @ref PaintBackground ()
//!
//! @image html Pictures/PaintAppl.jpg
//! @image Pictures/PaintAppleTree.jpg
//!
//! @defgroup Animals
//!
//! @par Functions
//!           - @ref PaintCipa  ()
//!           - @ref PaintKura  ()
//!           - @ref PaintGysen ()
//!           - @ref PaintCat   ()
//!
//! @defgroup Other
//!
//! @par Functions
//!           - @ref PaintAppl ()
//!
//}=====================================================================================

#include "TXlib.h"

void PaintBackground();
void PaintAppleTree (int x, int y);
void PaintTree      (int x, int y, double size);
void PaintSpruce    (int x, int y, double sizeX, double sizeY, int veter);
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

//{-----------------------------------------------------------------------------
//!@ingroup Scenery
//!
//! ������ ������ ������
//!
//!@note <i>������� ������ � ����, � ������� ����� ������ � �������� �� ���</i>
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintAppleTree.jpg  </td>
//! <td>
//! @param x     - x ���������� ������� ����� ������ ������ (����� ������� ������)
//! @param y     - y ���������� ������� ����� ������ ������ (����� ������� ������)
//! </td>
//! </tr>
//! </table>
//!
//!@note ������ �������� � ������ ������ ����� � ������.
//!
//!
//! @par ������ �������������
//!
//! @code
//!        PaintAppleTree (125, 210);
//!
//! @endcode
//}-----------------------------------------------------------------------------

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
//! @ingroup Scenery
//! @brief ������ ���������� ������
//!
//!@note <i>������� ������ � ����, � ������� ���� ���������� �������</i>
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintTree.jpg  </td>
//! <td>
//! @param x     - x ���������� ������� ����� ������ ������ (����� ������� ������)
//! @param y     - y ���������� ������� ����� ������ ������ (����� ������� ������)
//! @param size  - ������ ������. ���� �������� ����� 1, �� ������ ������ �������� (200 �� 350 ��������)
//! </td>
//! </tr>
//! </table>
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
    txSetColor     (RGB (136,   0,  21), (int) (15*size));
    txLine (x, y, x, y + (int) (100*size));

    txSetColor     (RGB (  0, 128,   0), 5);
    txSetFillColor (RGB (  0, 210,   0));
    txCircle (x + (int) (30*size), y - (int) (130*size), (int) (40*size));
    txCircle (x - (int) (30*size), y - (int) ( 90*size), (int) (50*size));
    txCircle (x + (int) (30*size), y - (int) ( 75*size), (int) (50*size));
    txCircle (x - (int) (20*size), y - (int) ( 50*size), (int) (60*size));
    txCircle (x + (int) (20*size), y - (int) ( 30*size), (int) (50*size));
    }

//{=========================================================================================================
//! @ingroup Scenery
//! @brief ������ ������ ���
//!
//! @note <i>������� ������ � ����, � ������� ���� ������ �������, � �������� � ������</i>
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintSpruce.jpg  </td>
//! <td>
//! @param x      - x ���������� ������� ����� ������ ���� (����� ������� ����)
//! @param y      - y ���������� ������� ����� ������ ���� (����� ������� ����)
//! @param sizeX  - ������ ���� �� ������. ���� �������� ����� 1, �� ������ ���� �������� 180 ��������
//! @param sizeY  - ������ ���� �� ������. ���� �������� ����� 1, �� ������ ���� �������� 180 ��������
//! @param veter  - ����� ������ ���� ("0" - ��� �����; "-20" - ������ ������; "+30" - ������ �������)
//! </td>
//! </tr>
//! </table>
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

void PaintSpruce (int x, int y, double sizeX, double sizeY, int veter)
    {
    txSetColor     (RGB (136,   0,  21), (int) (15*sizeX));
    txLine (x, y, x, y + (int) (30*sizeX));

    txSetColor     (RGB (  0, 200,   0), (int) (3*sizeX));
    txSetFillColor (RGB (  0, 150,   0));
    POINT triangle1[] = {{x - (int) (80*sizeX), y},                    {x + veter, y - (int)  (60*sizeY)}, {x + (int) (80*sizeX), y}};                    txPolygon (triangle1,3);
    POINT triangle2[] = {{x - (int) (60*sizeX), y - (int) (40*sizeY)}, {x + veter, y - (int)  (90*sizeY)}, {x + (int) (60*sizeX), y - (int) (40*sizeY)}}; txPolygon (triangle2,3);
    POINT triangle3[] = {{x - (int) (40*sizeX), y - (int) (80*sizeY)}, {x + veter, y - (int) (120*sizeY)}, {x + (int) (40*sizeX), y - (int) (80*sizeY)}}; txPolygon (triangle3,3);
    }

//{=========================================================================================================
//! @ingroup Animals
//! @brief ������ ��������
//!
//! @note <i>������� ������ � ����. ��� ������ ��������� ��������, � ���� ����� ���������� ����� ;)</i>
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintCipa.jpg  </td>
//! <td>
//! @param x              - x ���������� ������ ���� ��������
//! @param y              - y ���������� ������ ���� ��������
//! @param size           - ������ ��������. ���� �������� ����� 1 (��� �����), ������ �������� �������� 40 �� 45 ��������
//! @param glazCipa       - ������ ����� ��������. ���� �������� ����� 1 (��� �����), �������� ���� ����������� �������� ����������� ��� ���������� �����
//! @param LeftNogaCipa   - ������������ ����� ���� ��������. ���� �������� ����� 0, �� �������� ����� (�� ������)
//! @param RightNogaCipa  - ������������ ������ ���� ��������. ���� �������� ����� 0, �� �������� ����� (�� ������)
//! @param LR             - ����������� � ������� �������� ��������. "1" - �������� ������� �������, "-1" - �������� ������� ������
//! @param OpenKluv       - ���� �������� ����� ������� ��� �������. "0" - ���� ������, "10" - ���� ������ ������. ���������� ������ �������� �� 0 �� 10, �� ��� �� �����������.
//! </td>
//! </tr>
//! </table>
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
    txCircle (x, y, (int) (20*size));

    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    POINT triangleLeftNogaCipa [] = {{x - (int) (10*size) *LR, y + (int) (17*size) + LeftNogaCipa}, {x - (int) ( 5*size) *LR, y + (int) (25*size) + LeftNogaCipa}, {x - (int) (15*size) *LR, y + (int) (25*size) + LeftNogaCipa}}; txPolygon (triangleLeftNogaCipa, 3);
    POINT triangleRightNogaCipa[] = {{x + (int) (10*size) *LR, y + (int) (17*size) +RightNogaCipa}, {x + (int) (15*size) *LR, y + (int) (25*size) +RightNogaCipa}, {x + (int) ( 5*size) *LR, y + (int) (25*size) +RightNogaCipa}}; txPolygon (triangleRightNogaCipa,3);
    POINT triangleKlyuvCipa    [] = {{x + (int) (19*size) *LR, y - (int) ( 5*size)},                {x + (int) (25*size) *LR, y - (int) (10*size) + OpenKluv},     {x + (int) (15*size) *LR, y - (int) (11*size)}};                txPolygon (triangleKlyuvCipa,    3);
    POINT triangleKlyuvCipaOpen[] = {{x + (int) (19*size) *LR, y - (int) ( 5*size)},                {x + (int) (25*size) *LR, y - (int) (10*size) - OpenKluv},     {x + (int) (15*size) *LR, y - (int) (11*size)}};                txPolygon (triangleKlyuvCipaOpen,3);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txCircle (x + (int) (5*size) *LR, y - (int) (7*size), (int) (5*size) *glazCipa);

    txSetFillColor (RGB (  0,   0,   0));
    txCircle (x + (int) (6*size) *LR, y - (int) (7*size), (int) (2*size) *glazCipa);
    }

//{=========================================================================================================
//! @ingroup Animals
//! @brief ������ ����
//!
//! @note <i>������� ������ � ���� ��� ���������� ����� ����. ��� ������ �������</i>
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintKura.jpg  </td>
//! <td>
//! @param x              - x ���������� ������ ���� ����
//! @param y              - y ���������� ������ ���� ����
//! @param size           - ������ ����. ���� �������� ����� 1 (��� �����), ������ ���� �������� 110 �� 110 ��������
//! @param glazKura       - ������ ����� ����. ���� �������� ����� 1 (��� �����), �������� ���� ����������� ������� �������, ����������� ��� ���������� �����
//! @param LeftNogaKura   - ������������ ����� ���� ����. ���� �������� ����� 0, �� ���� ����� (�� ������)
//! @param RightNogaKura  - ������������ ������ ���� ����. ���� �������� ����� 0, �� ���� ����� (�� ������)
//! @param LR             - ����������� � ������� ��������� ����. "1" - ���� ������� ������, "-1" - ���� ������� �������
//! @param OpenKluv       - ���� ���� ����� ������� ��� �������. "0" - ���� ������, "10" - ���� ������ ������. ���������� ������ �������� �� 0 �� 10, �� ��� �� �����������.
//! @param flap           - ����� ����, ������ ����� ������. "0" - ��������� ���������, ����� �������
//! </td>
//! </tr>
//! </table>
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
    txCircle (x - (int) (40*size) *LR, y - (int) (44*size), (int) (10*size));
    txCircle (x - (int) (30*size) *LR, y - (int) (47*size), (int) (10*size));
    txCircle (x - (int) (20*size) *LR, y - (int) (44*size), (int) (10*size));

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txCircle (x,               y,           (int) (35*size));
    txCircle (x - (int) (30*size) *LR, y - (int) (30*size), (int) (18*size));
    txPie    (x - (int) (20*size) *LR, y - (int) (15*size), x + (int) (20*size) *LR, y + (int) (15*size) + flap, -215*LR, 180 + flap);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txEllipse (x - (int) (43*size )*LR, y - (int) (40*size) + (int) (glazKura*size), x - (int) (33*size) *LR, y - (int) (30*size) - (int) (glazKura*size));
    txSetFillColor (RGB (  0,   0,   0));
    txCircle  (x - (int) (39*size) *LR, y - (int) (34*size), (int) (2*size));

    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    POINT triangleRightNogaKura[] = {{x + (int) (10*size) *LR, y + (int) (34*size) + LeftNogaKura}, {x + (int) (15*size) *LR, y + (int) (45*size) + LeftNogaKura}, {x + (int) ( 5*size) *LR, y + (int) (45*size) + LeftNogaKura}};  txPolygon (triangleRightNogaKura,3);
    POINT triangleLeftNogaKura [] = {{x - (int) (10*size) *LR, y + (int) (34*size) +RightNogaKura}, {x - (int) ( 5*size) *LR, y + (int) (45*size) +RightNogaKura}, {x - (int) (15*size) *LR, y + (int) (45*size) +RightNogaKura}};  txPolygon (triangleLeftNogaKura, 3);
    POINT triangleKlyuvKura    [] = {{x - (int) (48*size) *LR, y - (int) (30*size)},                {x - (int) (54*size) *LR, y - (int) (23*size) + OpenKluv},     {x - (int) (45*size) *LR, y - (int) (23*size)}};                 txPolygon (triangleKlyuvKura,    3);
    POINT triangleKlyuvKuraOpen[] = {{x - (int) (48*size) *LR, y - (int) (30*size)},                {x - (int) (54*size) *LR, y - (int) (23*size) - OpenKluv},     {x - (int) (45*size) *LR, y - (int) (23*size)}};                 txPolygon (triangleKlyuvKuraOpen,3);
    }
//{=========================================================================================================
//! @ingroup Animals
//! @brief ������ ��������
//!
//! @note <i>� ���� ����� ����� ��������� ��������</i>
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintGysen.jpg  </td>
//! <td>
//! @param x              - x ���������� ������ ������ ��������
//! @param y              - y ���������� ������ ������ ��������
//! @param sizeX          - ������ �������� � ������. ���� �������� ����� 1 (��� �����), ������ �������� �������� 50 �� 20 ��������
//! @param sizeY          - ������ �������� � ������� (������������ ������ ������). ���� �������� ����� 1 (��� �����), ������ �������� �������� 50 �� 20 ��������
//! @param sizeGlazGus    - ������ ����� ��������. ���� �������� ����� 1 (��� �����), �������� ���� ����������� �������� ����������� ��� ���������� �����
//! @param LR             - ����������� � ������� ��������� ��������. "1" - �������� ������� ������, "-1" - �������� ������� �������
//! </td>
//! </tr>
//! </table>
//!
//! @par ������ �������������
//!
//! @code
//!        PaintGysen (10, 30, 2, 2, 1, 1);
//!
//!        PaintGysen (745 - (int) (t*0.5), 600 + (int) (t*0.2), 1, 1, 1, 1);
//!
//! @endcode
//!
//}=========================================================================================================

void PaintGysen (int x, int y, double sizeX, double sizeY, double sizeGlazGus, int LR)
    {
    txSetColor     (RGB (244, 122,   0), 2);
    txSetFillColor (RGB (255, 148,  40));
    txCircle (x + (int) (30*sizeX) *LR, y - (int) (2*sizeY), (int) (6*sizeY));
    txCircle (x + (int) (25*sizeX) *LR, y - (int) (4*sizeY), (int) (6*sizeY));
    txCircle (x + (int) (20*sizeX) *LR, y - (int) (5*sizeY), (int) (6*sizeY));
    txCircle (x + (int) (15*sizeX) *LR, y - (int) (4*sizeY), (int) (6*sizeY));
    txCircle (x + (int) (10*sizeX) *LR,                  y , (int) (6*sizeY));
    txCircle (x + (int)  (5*sizeX) *LR, y - (int) (2*sizeY), (int) (6*sizeY));
    txCircle (                       x,                   y, (int) (6*sizeY));

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (  0,   0,   0));
    txCircle (x - 2*LR, y, (int) (2*sizeGlazGus));
    }

//{=========================================================================================================
//! @ingroup Scenery
//! @brief ������ ������
//!
//! @note <i>�� ������ � �������� ������ ���������� ������</i>
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintOblako.jpg  </td>
//! <td>
//! @param x              - x ���������� ������ ������
//! @param y              - y ���������� ������ ������
//! @param size           - ������ ������. ���� �������� ����� 1 (��� �����), ������ ������ �������� 200 �� 150 ��������
//! @param color          - ���� ������//! </td>
//! </tr>
//! </table>
//!
//! @par ������ �������������
//!
//! @code
//!
//!        PaintOblako (100, 100, 1, RGB (230, 205, 255));
//!
//! @endcode
//!
//}=========================================================================================================

void PaintOblako (int x, int y, double size, int color)
    {
    txSetColor     (color);
    txSetFillColor (color);
    txCircle (x,                   y,                   (int) (40*size));
    txCircle (x - (int) (50*size), y,                   (int) (40*size));
    txCircle (x + (int) (50*size), y,                   (int) (40*size));
    txCircle (x - (int) (25*size), y - (int) (50*size), (int) (40*size));
    txCircle (x + (int) (25*size), y - (int) (50*size), (int) (40*size));
    }

//{=========================================================================================================
//! @ingroup Other
//! @brief ������ ������ (����� ������ � ������)
//!
//! @note <i>������ ��� �����, �� ������ ����� � �� ���� �����...</i>
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintAppl.jpg  </td>
//! <td>
//! @param x              - x ���������� ������ ������
//! @param y              - y ���������� ������ ������
//! @param size           - ������ ������. ���� �������� ����� 1 (��� ������ ��� �� ������ PaintAppleTree), ������ ������ 20 �� 20 ��������
//! @param color          - ���� ������
//! </tr>
//! </table>
//!
//! @par ������ �������������
//!
//! @code
//!
//!    for (int t = 0; t <= 200; t += 10)
//!        {
//!        PaintBackground();
//!
//!        PaintAppl (820 - (int) (t*0.2),  300 + t, 1);    // ������ ������ � ������, ������� � ��� � ������������� (��� ��� ���������� �����)
//!
//!        t++;
//!        txSleep (50);
//!        }
//!
//! @endcode
//!
//}=========================================================================================================

void PaintAppl(int x, int y, double sizeAppl)
    {
    txSetColor     (RGB (255,   0,   0));
    txSetFillColor (RGB (255,   0,   0));
    txCircle (x, y, (int) (10*sizeAppl));
    }

//{=========================================================================================================
//! @ingroup Animals
//! @brief ������ ������
//!
//! <table border = 0>
//! <tr><td> @image html D:\Cartoon-Kura-main\Pictures\PaintCat.jpg  </td>
//! <td>
//! @param x              - x ���������� ����� ��� ����� �����
//! @param y              - y ���������� ����� ��� ����� �����
//! @param sizeX          - ������ ������ �� ������. ���� �������� ����� 1 (��� �����), ������ ����� �������� 120 �� 120 ��������
//! @param sizeY          - ������ ������ �� ������. ���� �������� ����� 1 (��� �����), ������ ����� �������� 120 �� 120 ��������
//! @param nose           - �������� ��������� ������� ��� (� ���) ����� � ����. ���� �������� ����� 0 (��� �����). � �������, ���� �������� "+5" - �� ��� ����, ���� �������� "-5" - �� ��� ���� �������� ���������
//! @param glazCatZrachek - �������� ��������� ������� ������ ������ ����� � ������. � �������, ���� �������� "+5" - �� ������ ������, ���� �������� "-5" - �� ������ ����� ������ �����.
//! @param sizeGlazCat    - ������ ���� ������. ���� �������� ����� 0 (��� �����), �������� ���� ����������� ������ �������, ����������� ��� ���������� �����
//! @param LeftYho        - �������� ������� ����� ���.
//! @param RightYho       - �������� ������� ������ ���.
//! @param LeftNogaCat    - ������������ ����� ���� ������. ���� �������� ����� 0, �� ����� ����� (�� ������)
//! @param RightNogaCat   - ������������ ������ ���� ������. ���� �������� ����� 0, �� ����� ����� (�� ������)
//! @param khvost         - ����� ������. "0" - ����������� ���������. ������� ����� �������
//! @param color          - ������ ���� ����. �������� ��������� ��������� ������� ������� �����.
//! </tr>
//! </table>
//!
//! @par ������ �������������
//!
//! @code
//!        PaintCat (60, 120, 1, 1, 2, 5, 0, 0, 0, 1, 1, -20, ryzhiy);
//!
//!
//!    for (int t = 200; t <= 300; t += 2)
//!        {
//!        PaintBackground();
//!
//!        PaintCat (750 + (int) (0.5*t), 440,                 0.7,  0.9, 1, 1, 1, (-t/10) % 10, (t/10) % 10, ((t/10) % 2*2-1)* 5, (t/10) % 2* (-5),                      0, ryzhiy);
//!        PaintCat (250 + (int) (0.5*t), 510 - (int) (0.2*t), 1.2,  1.2, 1, 1, 1, (-t/5)  % 10, (t/5)  % 10, ((t/10) % 2*2-1)*10, (t/10) % 2*(-10), ((t/10) %2 * 2 - 1)*30,  brown);
//!
//!        t++;
//!        txSleep (200);
//!        }
//!
//! @endcode
//!
//}=========================================================================================================

void PaintCat (int x, int y, double sizeX, double sizeY, int nose,
               int glazCatZrachek, double sizeGlazCat,
               int LeftYho, int RightYho, int LeftNogaCat, int RightNogaCat, int khvost, int color)
    {
    txSetColor     (color);                                     //������ ����
    txSetFillColor (color);
    txCircle (x, y - (int) (70*sizeY), (int) (30*sizeY));

    txSetColor     (color);                                     //��� ����
    txSetFillColor (color);
    POINT triangleLeftYho [] = {{x - (int) (30*sizeX), y - (int) (80*sizeY)}, {x - (int) (35*sizeX) +  LeftYho, y - (int) (115*sizeY)}, {x - (int) (5*sizeX), y - (int) (95*sizeY)}}; txPolygon (triangleLeftYho, 3);
    POINT triangleRightYho[] = {{x + (int) (25*sizeX), y - (int) (80*sizeY)}, {x + (int) (30*sizeX) + RightYho, y - (int) (115*sizeY)}, {x,                   y - (int) (95*sizeY)}}; txPolygon (triangleRightYho,3);

    txSetColor     (color, (int) (25*sizeY));                           //���� ����
    txLine   (x, y - (int) (20*sizeY), x, y - (int) (70*sizeY));

    txSetColor     (color, (int) (10*sizeY));                           //����� ����
    txArc    (x - (int) (50*sizeX), y - (int) (70*sizeY), x, y - (int) (20*sizeY), 180 + khvost, 170);

    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 250));                                 //���� ����
    txEllipse (x - (int) (25*sizeX), y - (int) (25*sizeY) +  LeftNogaCat, x,                    y +  LeftNogaCat);
    txEllipse (x,                    y - (int) (25*sizeY) + RightNogaCat, x + (int) (25*sizeX), y + RightNogaCat);

    txEllipse (x - (int) (25*sizeX) + (int) (sizeGlazCat*sizeY), y - (int) (95*sizeY) + (int) (sizeGlazCat*sizeY),            //����� ����
               x,                                                y - (int) (70*sizeY) - (int) (sizeGlazCat*sizeY));
    txEllipse (x,                                                y - (int) (95*sizeY) + (int) (sizeGlazCat*sizeY),
               x + (int) (25*sizeX) - (int) (sizeGlazCat*sizeY), y - (int) (70*sizeY) - (int) (sizeGlazCat*sizeY));

    txSetColor     (RGB (  0,   0,  0));
    txSetFillColor (RGB (  0,   0,  0));
    txEllipse (x - (int) (15*sizeX) + glazCatZrachek, y - (int) (92*sizeY) + sizeGlazCat, x - (int) (10*sizeX) + glazCatZrachek, y - (int) (75*sizeY) - sizeGlazCat);
    txEllipse (x + (int) (10*sizeX) + glazCatZrachek, y - (int) (92*sizeY) + sizeGlazCat, x + (int) (15*sizeX) + glazCatZrachek, y - (int) (75*sizeY) - sizeGlazCat);
                                                                                      //��� ����
    POINT triangleNose[] = {{x - (int) (5*sizeX), y - (int) (70*sizeY) + nose},  {x, y - (int) (65*sizeY) + nose}, {x + (int) (5*sizeX), y - (int) (70*sizeY) + nose}}; txPolygon (triangleNose,3);
    txLine (x - (int) (40*sizeX), y - (int) (70*sizeY) + nose, x - (int) ( 5*sizeX), y - (int) (65*sizeY) + nose);    //��� ����
    txLine (x - (int) (45*sizeX), y - (int) (63*sizeY) + nose, x - (int) ( 5*sizeX), y - (int) (63*sizeY) + nose);
    txLine (x - (int) (40*sizeX), y - (int) (55*sizeY) + nose, x - (int) ( 5*sizeX), y - (int) (61*sizeY) + nose);
    txLine (x + (int) ( 5*sizeX), y - (int) (65*sizeY) + nose, x + (int) (40*sizeX), y - (int) (70*sizeY) + nose);
    txLine (x + (int) ( 5*sizeX), y - (int) (63*sizeY) + nose, x + (int) (45*sizeX), y - (int) (63*sizeY) + nose);
    txLine (x + (int) ( 5*sizeX), y - (int) (61*sizeY) + nose, x + (int) (40*sizeX), y - (int) (55*sizeY) + nose);

    txSetColor     (RGB (255, 0, 0));                                          //���� ����
    txSetFillColor (RGB (255, 0, 0));
    txPie (x - (int) (5*sizeX), y - (int) (60*sizeY), x + (int) (5*sizeX), y - (int) (45*sizeY), -20, 20);
    }
