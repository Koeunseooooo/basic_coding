#include <stdio.h>
#include <stdlib.h>

struct triangle {
 int x1, y1, x2, y2, x3, y3;
} cd;

int main() {

 double center1, center2;

 scanf("%d %d %d %d %d %d", &cd.x1, &cd.y1, &cd.x2, &cd.y2, &cd.x3, &cd.y3);

 center1 = (double)(cd.x1 + cd.x2 + cd.x3) / 3;
 center2 = (double)(cd.y1 + cd.y2 + cd.y3) / 3;

 printf("(%.1f, %.1f)",center1, center2);
}

