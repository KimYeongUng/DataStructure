#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point{

	int xpos;
	int ypos;
} Point;

void SetPointPos(Point * ppos,int xpos,int ypos); // set Point - variable xpos and ypos
void ShowPointPos(Point *ppos); // print xpos and ypos

int PointComp(Point *pos1,Point *pos2); // compare xpos and ypos

#endif
