#include<iostream>
#include"GL/glut.h"
#include<ctime>
#include<cmath>
using namespace std;
double t2, t3;
int var4, var5 = 0;
double posx1, velx1, posy1, vely1, posx2, velx2, posy2, vely2, posx, velx, posy, vely, t = 0.0, var6 = 0, var7 = 0;
double storetime = clock();
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
}

void func_gen_left(double);
void func_gen_right(double);

void display()
{

	//cout<<"display"<<endl;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_STRIP);
	for (double counter = 0; counter<t2; counter += 100)
	{
		func_gen_left(counter);
		//cout<<"for dis"<<endl;
		glVertex3f(posx1, posy1, 0.0);

	}
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_STRIP);
	for (double counter2 = 0; counter2<t2; counter2 += 100)
	{
		func_gen_right(counter2);
		//cout<<"displaynnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn"<<endl;
		glVertex3f(posx2, posy2, 0.0);
	}
	glEnd();
	glFlush();
}
void update()
{	//cout<<"update"<<endl;
	if (clock() - storetime>20)
	{
		t2 = clock();
		glutPostRedisplay();
		storetime = clock();
	}

}
void processMouse(int button, int state, int x, int y)
{

}
void func_gen_left(double t)
{
	srand(time(0));
	if (var6 == 0)
	{
		var4 = 1 + rand() % 3;
		var6 = 1;
	}
	switch (3) {
	case 1:
		posx1 = (t / 1000) - 10;
		posy1 = 3 * sin(posx1);
		/*	velx1=1;
		vely1=cos(posx1);
		*/	break;
	case 2:
		posx1 = (t / 1000) - 10;
		posy1 = ((t / 1000) - 10);
		//velx1=1;
		//vely1=1;
		break;
	case 3:
		posx1 = (t / 1000) - 10;
		posy1 = pow(posx1, 2) - 10;
		//velx1=1;
		//vely1=pow(posx1,-2.70);
		break;
	default:
		cout << "none chosen1" << endl;
		break;
	}

}
void func_gen_right(double t)
{
	//cout<<"jhbkhjbkj"<<endl;
	if (var7 == 0)
	{
		var5 = 1 + rand() % 3;
		var7 = 1;
	}
	switch (1) {
	case 1:
		posx2 = -(t / 1000) + 10;
		posy2 = -3 * sin(-(t / 1000) + 10);
		//velx2=1;
		//vely2=-cos(posx1);
		break;
	case 2:
		posx2 = 10 - (t / 1000);
		posy2 = -10 + (t / 1000);
		//velx2=1;
		//vely2=-1;
		break;
	case 3:
		posx2 = -(t / 1000) + 17;
		posy2 = pow(2.7, -(t / 1000) + 10) - 10;
		//velx2=1;
		//vely2=pow(posx2,-2.70);
		break;
	default:
		cout << "none chosen2" << endl;
		break;
	}
}

/*void coll_det()
{
for(float var6=0; var6<=10; var6+=.1)
{
t=var6;
float diffx= fabs(posx1-posx2);
if(diffx<.1)
{
posx=posx1;
}
float diffy= fabs(posy1-posy2);
if(diffy<.1)
{
posy=posy1;
}
}
}
int overlap()
{
float ov_x= fabs(moux-posx);
float ov_y= fabs(mouy-posy);
if(ov_x<.5 && ov_y<.5)
return 1;
else
return 0;
}*/

void reshape(int w, int h)
{
	glMatrixMode(GL_PROJECTION); //change the current matrix to projection matrix
	glLoadIdentity(); //set it to default values
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0); //specifies the part of real world to be drawn
	glMatrixMode(GL_MODELVIEW); //set the current matrix to modelview
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);// system parameters passed to glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1250, 720);
	glutCreateWindow("collide");
	init();
	glutDisplayFunc(display);
	glutIdleFunc(update);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}