#ifndef BOX_H
#define BOX_H

typedef struct Box {
    int l;
    int w;
    int h;
} Box;

Box CreateBox(char *line);
int GetRequiredWarppingPaper(Box box);
int GetSmallestSide(Box box);

#endif
