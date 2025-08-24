#ifndef BOX_H
#define BOX_H

typedef struct Box {
    int l;
    int w;
    int h;
} Box;

int GetRequiredWarppingPaper(Box *box);
int GetRibbon(Box *box);

#endif
