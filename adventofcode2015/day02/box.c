#include "box.h"

int GetSmallestSide(Box *box);

int GetSmallestSide(Box *box) {
    int smallestSide = box->l * box->w;
    if (smallestSide > (box->w * box->h)) {
        smallestSide = box->w * box->h;
    }
    if (smallestSide > (box->h * box->l)) {
        smallestSide = box->h * box->l;
    }
    return smallestSide;
}

int GetRequiredWarppingPaper(Box *box) {
    int surfaceArea =
        2 * ((box->l * box->w) + (box->w * box->h) + (box->h * box->l));
    return surfaceArea + GetSmallestSide(box);
}

int GetRibbon(Box *box) {
    int ribbon = 0;
    if (box->l >= box->w && box->l >= box->h) {
        ribbon = (box->w * 2) + (box->h * 2);
    } else if (box->w >= box->l && box->w >= box->h) {
        ribbon = (box->l * 2) + (box->h * 2);
    } else {
        ribbon = (box->l * 2) + (box->w * 2);
    }
    return ribbon + (box->l * box->w * box->h);
}
