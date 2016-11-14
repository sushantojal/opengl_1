#include<iostream>
#include"GL/glut.h"
#include<cmath>
#include<ctime>
#include "ball.h"
#include "slider.h"
//#include "inital.h"
#define PI 3.142
using namespace std;
//inital initial1;
ball ball1;
slider slider1,ai_slider;
void init()
{	
	glClearColor(0.0,0.0,0.0,0.0);
} 

void display()
{	glClear(GL_COLOR_BUFFER_BIT);
	/**if(0==initial1.count())
	initial1.display();

	if(initial1.count()!=0)
	{
	*/	ball1.creation();
	slider1.display();
	ai_slider.ai_display();
//	}

	glLoadIdentity();
	glFlush();
}

void update()
{	float z=slider1.give();
	float y=ai_slider.give();
	ball1.update1(z,y);
	float bpos[2],bvel[2];
	bpos[0]=ball1.get_posx();
	bpos[1]=ball1.get_posy();
	bvel[0]=ball1.get_velx();
	bvel[1]=ball1.get_vely();
	ai_slider.ai_move(bpos[0],bpos[1],bvel[0],bvel[1]);
	
	glutPostRedisplay();
}


void reshape(int w, int h)
{
	//glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-160,160,-70,70,-5,5);
	glMatrixMode(GL_MODELVIEW);
	//glLoadIdentity();
}

void keyboard(unsigned char key,int x, int y)
{//	initial1.keyboard(key);
	slider1.keyboard(key);
	glutPostRedisplay();
}
int main(int argc, char** argv)
{	int flag=1;
int a;

pqr:
cout<<"\t\t PING \tPONG\n\n\n";
cout<<"Enter Option 1,2,3\n";
cout<<"1. Start";
cout<<"\n2. Options";
cout<<"\n3. Exit\n";
cin>>a;
switch(a)
{
case 1:goto abc;
case 2:break;
case 3:exit(0);
default: goto pqr;
}
label:

cout<<"\n\nEnter Level\n";
cout<<"1. Easy ";
cout<<"\n2. Medium";
cout<<"\n3.Hard\n";

cin>>flag;
	switch(flag)
{
case 1 : ai_slider.vel=0.5; break;
case 2 : ai_slider.vel=0.8; break;
case 3 : ai_slider.vel=1.0; break;
case 4 : {ai_slider.vel=0.7; ai_slider.insanity_flag=1; break;}
default : {cout<<"Choose Again"<<endl;goto label;}		//Make them choose difficulty again, them noobs.
}

abc:
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(000,000);
	glutInitWindowSize(1600,700);
	glutCreateWindow("PING PONG");
	
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutIdleFunc(update);
	glutMainLoop();
	
	return 0;
}