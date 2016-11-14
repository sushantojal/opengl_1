#include<iostream>
using namespace std;
#include"GL/glut.h" 
//float red,blue,green=0.0;
float m_x, m_y, rem_x, rem_y = 0.0;
//float red, green, blue= 0.0;
int counte = 0;
bool clear = 0;
void rem();
float red, green, blue = 0.0;
/*void update()
{

cout<<"crap"<<endl;
glutPostRedisplay();
}*/
void init()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
}

void display()
{
	if (clear == 0)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		clear = 1;
	}										//COLORS
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);						//red
	glVertex3f(1120, 650.0, 0.0);
	glVertex3f(1140, 650, 0.0);
	glVertex3f(1140, 630, 0.0);
	glVertex3f(1120, 630, 0.0);
	glEnd();
	glColor3f(0.0, 1.0, 0.0);					//green
	glBegin(GL_QUADS);
	glVertex3f(1120, 625, 0.0);
	glVertex3f(1140, 625, 0.0);
	glVertex3f(1140, 605, 0.0);
	glVertex3f(1120, 605, 0.0);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);					//blue
	glBegin(GL_QUADS);
	glVertex3f(1120, 600, 0.0);
	glVertex3f(1140, 600, 0.0);
	glVertex3f(1140, 580, 0.0);
	glVertex3f(1120, 580, 0.0);
	glEnd();
	glColor3f(red, green, blue);				//current selection
	glBegin(GL_QUADS);
	glVertex3f(1145, 680, 0.0);
	glVertex3f(1165, 680, 0.0);
	glVertex3f(1165, 660, 0.0);
	glVertex3f(1145, 660, 0.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);					//partition
	glBegin(GL_QUADS);
	glVertex3f(1096, 740, 0.0);
	glVertex3f(1100, 740, 0.0);
	glVertex3f(1100, 0, 0.0);
	glVertex3f(1096, 0, 0.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);					//LINE WIDTHS
	glBegin(GL_QUADS);
	glVertex3f(1115, 420, 0.0);			//line width 3
	glVertex3f(1118, 420, 0.0);
	glVertex3f(1118, 417, 0.0);
	glVertex3f(1115, 417, 0.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);						//line width 5
	glVertex3f(1130, 422, 0.0);
	glVertex3f(1135, 422, 0.0);
	glVertex3f(1135, 417, 0.0);
	glVertex3f(1130, 417, 0.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);					//line width 7
	glBegin(GL_QUADS);
	glVertex3f(1145, 423, 0.0);
	glVertex3f(1152, 423, 0.0);
	glVertex3f(1152, 416, 0.0);
	glVertex3f(1145, 416, 0.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);					//line width 9
	glBegin(GL_QUADS);
	glVertex3f(1160, 424, 0.0);
	glVertex3f(1169, 424, 0.0);
	glVertex3f(1169, 415, 0.0);
	glVertex3f(1160, 415, 0.0);
	glEnd();
	if (counte >= 2)
	{
		glColor3f(red, green, blue);
		glBegin(GL_LINES);
		glVertex3f(rem_x, rem_y, 0.0);
		glVertex3f(m_x, m_y, 0.0);
		glEnd();

	}
	glFlush();
}

void processMouse(int button, int state, int x, int y)
{
	counte = 0;
	y = 740 - y;
	if (state == GLUT_DOWN)
	{
		if (button == GLUT_LEFT_BUTTON)
		{
			if (1120 <= x && x <= 1140)					//COLOR SELECTION
			{
				if (630 <= y && y <= 650)				//red
				{
					red = 1.0; green = 0.0; blue = 0.0;
				}
			}
			if (1120 <= x && x <= 1140)
			{
				if (605 <= y && y <= 625)				//green
				{
					green = 1.0; red = 0.0; blue = 0.0;
				}
			}
			if (1120 <= x && x <= 1140)
			{
				if (580 <= y && y <= 600)				//blue
				{
					blue = 1.0; red = 0.0; green = 0.0;
				}
			}
			if (1160 <= x && x <= 1169)					//LINE WIDTH SELECTION
			{
				if (415 <= y && y <= 424)				//line width 9
					glLineWidth(9.0);
			}
			if (1145 <= x && x <= 1152)
			{										//line width 7
				if (416 <= y && y <= 423)
					glLineWidth(7.0);
			}
			if (1129 <= x && x <= 1136)
			{										//line width 5
				if (417 <= y && y <= 422)
					glLineWidth(5.0);
			}
			if (1110 <= x && x <= 1123)
			{
				if (415 <= y && y <= 424)
					glLineWidth(3.0);
			}
			glutPostRedisplay();
		}
	}
}

void processMouseActive(int x, int y)
{
	y = 740 - y;
	if (x<1100)
	{
		counte++;
		//cout<<x<<"   "<<y<<endl;
		if (counte >= 2)
			rem();
		m_x = x;
		m_y = y;
		glutPostRedisplay();
	}
}
void rem()
{
	rem_x = m_x;
	rem_y = m_y;
}

void reshape(int w, int h)
{
	glMatrixMode(GL_PROJECTION); //change the current matrix to projection matrix
	glLoadIdentity(); //set it to default values
	glOrtho(0.0, 1270.0, 0.0, 740.0, 0.0, 10.0); //specifies the part of real world to be drawn
	glMatrixMode(GL_MODELVIEW); //set the current matrix to modelview
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);// system parameters passed to glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1270, 740);
	glutCreateWindow("paint");
	init();
	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutMouseFunc(processMouse);
	glutMotionFunc(processMouseActive);
	//glutIdleFunc(update);
	glutMainLoop();
	return 0;
}



