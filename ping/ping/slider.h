#pragma once
#include "ball.h"
class slider
{
private:
	float pos;
	
public:
	float vel,insanity_flag;
	slider()
	{vel=0.5;
	pos =0.0;
	insanity_flag=0;
	}

	void display()

	{	glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(-140,pos+8);
		glVertex2f(-138,pos+8);
		glVertex2f(-138,pos-8);
		glVertex2f(-140,pos-8);
		glEnd();
		
	}
	void ai_display()
	{
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
		glVertex2f(140,pos+8);
		glVertex2f(138,pos+8);
		glVertex2f(138,pos-8);
		glVertex2f(140,pos-8);
		glEnd();
	}

	void keyboard(unsigned char a)
	{
		if(a=='w' || a=='W')
		{	if(pos+8.0<64)
			pos=pos+4;
		else 
			pos=64;
		}
		else if(a=='s' || a=='S')
		{	if(pos-8.0>-64)
			pos=pos-4;
		else
			pos=-64;
		}
	}

	void ai_move(float x,float y,float vx,float vy)
{
if(!insanity_flag)
{
if(y>pos+8)
{
pos+=vel;
}
else if(y<pos-8)
{
pos-=vel;
}
}/*
else
{
float time,y_predict=0,temptime;
if(x<0 && vx<0)
{
time=(276-x)/(0-vx);
}
else if(x>=0 && vx<0)
{
time=(414+x)/(0-vx);
}
else
{
time=(138-x)/vx;
}
if(y+vy*time>66.0 && vy>0)
{
time-=(66-y/vy);
y_predict=70-(vy*time);
}
else if(y+vy*time<-66.0 && vy<0)
{
time-=(66-y/vy);
y_predict=-66-vy*time;
}
if(y_predict>pos+8)
{
pos+=vel;
}
else if(y_predict<pos-8)
{
pos-=vel;
}
}*/
}

	float give()
	{
		return pos;
	}

	~slider()
	{}
	
};