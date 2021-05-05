
#include "TXlib.h"
#include <cmath>


void PaintKura (int x, int y, double size, int glazKura,
                int LeftNogaKura, int RightNogaKura, int LR, int OpenKluv, int flap);

int main()
    {
    txCreateWindow (400, 200);
    txSetFillColor (RGB (255, 255, 255));
    txRectangle (0, 0, 400, 200);
    txBegin();

    PaintKura ( 60,  60,   1, 1, 0, 0,  1, 0, 10);
    PaintKura (260, 100, 1.2, 1, 0, 0,  1, 0, 10);

    txEnd();
    return 0;
    }


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

