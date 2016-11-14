#pragma once

class inital
{
private:
int posit,a;
public:
	int time,count1;
	inital()
	{
		posit=-22;
		count1=0;
	}

	void display()
/*	{
	glColor3f(1.0,1.0,1.0);  //p begin
	glBegin(GL_POLYGON);
	glVertex2f(-32,30);
	glVertex2f(-38,30);
	glVertex2f(-38,20);
	glVertex2f(-32,20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-38,20);
	glVertex2f(-38,15);
	glVertex2f(-36,15);
	glVertex2f(-36,20);
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(-36,28);
	glVertex2f(-36,22);
	glVertex2f(-33,22);
	glVertex2f(-33,28);
	glEnd();			//p end
	
	glColor3f(1.0,1.0,1.0);// i begin
	
	glBegin(GL_POLYGON);
	glVertex2f(-30,30);
	glVertex2f(-30,15);
	glVertex2f(-28,15);
	glVertex2f(-28,30);
	glEnd();			//i end

	glBegin(GL_POLYGON);// n begin
	glVertex2f(-24,30);
	glVertex2f(-26,30);
	glVertex2f(-26,15);
	glVertex2f(-24,15);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-20,15);
	glVertex2f(-18,15);
	glVertex2f(-18,30);
	glVertex2f(-20,30);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-24,30);
	glVertex2f(-20,19);
	glVertex2f(-20,15);
	glVertex2f(-24,26);
	glEnd();			//n end
	
	glBegin(GL_POLYGON);//g begin
	glVertex2f(-16,30);
	glVertex2f(-16,15);
	glVertex2f(-14,15);
	glVertex2f(-14,30);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-16,30);
	glVertex2f(-6,30);
	glVertex2f(-6,28);
	glVertex2f(-16,28);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2f(-16,15);
	glVertex2f(-16,17);
	glVertex2f(-6,17);
	glVertex2f(-6,15);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6,17);
	glVertex2f(-6,23.5);
	glVertex2f(-8,23.5);
	glVertex2f(-8,17);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-8,23.5);
	glVertex2f(-8,21.5);
	glVertex2f(-12,21.5);
	glVertex2f(-12,23.5);
	glEnd();				// g end


	glBegin(GL_POLYGON);	//p begin
	glVertex2f(-4,10);
	glVertex2f(-4,0);
	glVertex2f(2,0);
	glVertex2f(2,10);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-4,0);
	glVertex2f(-4,-5);
	glVertex2f(-2,-5);
	glVertex2f(-2,0);
	glEnd();

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(-2,8);
	glVertex2f(-2,2);
	glVertex2f(1,2);
	glVertex2f(1,8);
	glEnd();			//p end
	
	glColor3f(1.0,1.0,1.0);// o begin
	
	glBegin(GL_POLYGON);
	glVertex2f(4,10);
	glVertex2f(4,-5);
	glVertex2f(12,-5);
	glVertex2f(12,10);
	glEnd();		

	glColor3f(0,0,0);
	glBegin(GL_POLYGON);	
	glVertex2f(6,8);
	glVertex2f(6,-3);
	glVertex2f(10,-3);
	glVertex2f(10,8);
	glEnd();			//o end
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);// n begin
	glVertex2f(16,10);
	glVertex2f(14,10);
	glVertex2f(14,-5);
	glVertex2f(16,-5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(20,-5);
	glVertex2f(22,-5);
	glVertex2f(22,10);
	glVertex2f(20,10);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(16,10);
	glVertex2f(20,-1);
	glVertex2f(20,-5);
	glVertex2f(16,6);
	glEnd();			//n end
	
	glBegin(GL_POLYGON);//g begin
	glVertex2f(24,10);
	glVertex2f(24,-5);
	glVertex2f(26,-5);
	glVertex2f(26,10);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(24,10);
	glVertex2f(34,10);
	glVertex2f(34,8);
	glVertex2f(24,8);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2f(24,-5);
	glVertex2f(24,-3);
	glVertex2f(34,-3);
	glVertex2f(34,-5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(34,-3);
	glVertex2f(34,3.5);
	glVertex2f(32,3.5);
	glVertex2f(32,-3);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(32,3.5);
	glVertex2f(32,1.5);
	glVertex2f(28,1.5);
	glVertex2f(28,3.5);
	glEnd();				// g end
	
	glLineWidth(3);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-7,-20);
	glVertex2f(-10,-20);
	glVertex2f(-10,-22);
	glVertex2f(-7,-22);
	glVertex2f(-7,-24);
	glVertex2f(-10,-24);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2f(-6,-20);
	glVertex2f(-3,-20);

	glVertex2f(-4.5,-20);
	glVertex2f(-4.5,-24);

	glVertex2f(-2,-24);
	glVertex2f(-0.5,-20);

	glVertex2f(-0.5,-20);
	glVertex2f(1,-24);

	glVertex2f(0.3,-22.5);
	glVertex2f(-1.3,-22.5);

	glVertex2f(5,-22);
	glVertex2f(2,-22);

	glVertex2f(6,-20);
	glVertex2f(9,-20);

	glVertex2f(7.5,-20);
	glVertex2f(7.5,-24);

	glVertex2f(-6,-28.5);
	glVertex2f(-6,-30.0);

	glVertex2f(-2,-26);
	glVertex2f(1,-26);

	glVertex2f(-0.5,-26);
	glVertex2f(-0.5,-30);

	glVertex2f(2,-25.8);
	glVertex2f(2,-30);

	glVertex2f(-10,-33.5);
	glVertex2f(-8,-33.5);

	glVertex2f(-6,-32);
	glVertex2f(-3,-36);

	glVertex2f(-3,-32);
	glVertex2f(-6,-36);

	glVertex2f(-2,-32);
	glVertex2f(-2,-36);
	
	glVertex2f(-1,-32);
	glVertex2f(2,-32);

	glVertex2f(0.5,-32);
	glVertex2f(0.5,-36);

	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(2,-24);
	glVertex2f(2,-20);
	glVertex2f(5,-20);
	glVertex2f(5,-24);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2f(-10,-26);
	glVertex2f(-10,-30);
	glVertex2f(-7,-30);
	glVertex2f(-7,-26);
	glEnd();
	
	glBegin(GL_LINE_LOOP);
	glVertex2f(-6,-26);
	glVertex2f(-3,-26);
	glVertex2f(-3,-28.5);
	glVertex2f(-6,-28.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(3,-30);
	glVertex2f(3,-26);
	glVertex2f(6,-26);
	glVertex2f(6,-30);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(7,-30);
	glVertex2f(7,-26);
	glVertex2f(10,-30);
	glVertex2f(10,-26);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(-7,-32);
	glVertex2f(-10,-32);
	glVertex2f(-10,-36);
	glVertex2f(-7,-36);
	glEnd();

	glPointSize(4);
	glColor3f(1.0,1.0,1.0);

	glBegin(GL_POINTS);
	glVertex2f(-13,-34);
	glVertex2f(-13,-28);
	glVertex2f(-13,-22);
	glEnd();
	
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2f(-19,posit);
	glVertex2f(-15,posit);

	glVertex2f(-16,(posit+0.5));
	glVertex2f(-15,posit);

	glVertex2f(-15,posit);
	glVertex2f(-16,(posit-0.5));
	glEnd();
}

void start()
{	
	glColor3f(1.0,0.0,0.0);  
	glLineWidth(8);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);
	glVertex2f(-5,20);
	glVertex2f(-5,-20);

	glVertex2f(-13,-20);
	glVertex2f(3,-20);

	glVertex2f(-5,20);
	glVertex2f(-12,12);
	glEnd();
	glFlush();
	
	Sleep(1000);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);
	glVertex2f(-5,20);
	glVertex2f(-5,0);

	glVertex2f(-5,0);
	glVertex2f(-20,0);

	glVertex2f(-20,0);
	glVertex2f(-20,-20);

	glVertex2f(-5,20);
	glVertex2f(-20,20);

	glVertex2f(-20,-20);
	glVertex2f(-5,-20);
	glEnd();
	glFlush();
	Sleep(1000);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);
	glVertex2f(-5,20);
	glVertex2f(-5,-20);

	glVertex2f(-5,0);
	glVertex2f(-20,0);

	glVertex2f(-5,20);
	glVertex2f(-20,20);

	glVertex2f(-20,-20);
	glVertex2f(-5,-20);
	glEnd();
	glFlush();
	Sleep(1000);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINE_STRIP);
	glVertex2f(-35,10);
	glVertex2f(-40,10);
	glVertex2f(-40,0);
	glVertex2f(-35,0);
	glVertex2f(-35,-10);
	glVertex2f(-40,-10);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-30,10);
	glVertex2f(-20,10);

	glVertex2f(-25,-10);
	glVertex2f(-25,10);

	glVertex2f(-15,-10);
	glVertex2f(-9,10);

	glVertex2f(-9,10);
	glVertex2f(-3,-10);

	glVertex2f(-12.5,-3);
	glVertex2f(-5.5,-3);

	glVertex2f(3,0);
	glVertex2f(9,0);

	glVertex2f(14,10);
	glVertex2f(24,10);

	glVertex2f(19,10);
	glVertex2f(19,-10);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(2,-10);
	glVertex2f(2,10);

	glVertex2f(9,10);
	glVertex2f(9,-10);
	glEnd();
	glFlush();
	Sleep(1000);
	glClear(GL_COLOR_BUFFER_BIT);

	}

void keyboard(unsigned char z)
{
	if( z=='w' || z=='W')
	{
		if(posit== -22)
		{
			a= -34;		
		}

		else if (posit== -28)
		{
			a= -22;
		}

		else if(posit== -34)
		{
			a= -28;
		}
	}
	
	else if (z=='s' || z=='S')
	{
		if(posit==-22)
		{
			a=-28;
		}

		else if (posit== -28)
		{
			a=-34;
		}

		else if(posit==-34)
		{		
		
		a= -22;
		}
	}

	else
	{	
		if(posit==-22)
		{	count1=count1+1;
			start();
		
		}
		else if(posit==-28)
		{
		}
		else if(posit==-34)
		{
		}

	}
			posit=a;

}*/
int count()
{
	return count1;
}
/*
int time1()
{	time=clock();
	return time;
}
*/
};
