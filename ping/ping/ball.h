#pragma once
using namespace std;
#define PI 3.142

class ball 
{
private:
float vel[2],pos[2];
int storeTime;

public:
	ball()
	{	pos[0]=0.0;
		pos[1]=0.0;
		vel[0]=5.5;
		vel[1]=5.0;
		storeTime= clock();
	}
	ball(float p,float q)
	{	pos[0]=0.0;
		pos[1]=0.0;
		vel[0]=p;
		vel[1]=q;
		storeTime= clock();

	}
	
	float get_posy()
	{
		return pos[1];
	}

	float get_posx()
	{
		return pos[0];
	}

	float get_velx()
	{
		return vel[0];
	}
	float get_vely()
	{
		return vel[1];
		
	}


	void creation()
	{
		glColor3f(0.5,0.5,0.5);
		glLineWidth(4);
		glBegin(GL_LINES);
		glVertex2f(-138,70);
		glVertex2f(138,70);
		glVertex2f(138,-70);
		glVertex2f(-138,-70);
		glEnd();


		glColor3f(0.0,1.0,0.0);
		glBegin(GL_TRIANGLE_FAN);
		glVertex2f(pos[0],pos[1]);
		for(int i=0;i<=30;i++)
			{
				glVertex2f((pos[0]+4*cos(2*i*PI/25)), (pos[1]+4*sin(2*i*PI/25)));
			}
		glEnd();
	//	glLoadIdentity();
	}

	void update1(float v,float ai_v)
	{
		if(clock()- 20> storeTime)
		{
		pos[0]=pos[0]+vel[0];
		pos[1]=pos[1]+vel[1];

		if(vel[0]<0)
		{cout<<"try";
		// slider condition main

		if((pos[0]-4)<=-136.5 && (pos[0]-4)>=-139.5 && ((pos[1]>=(v-8))&& (pos[1]<=(v+8))) )	
		{cout<<"slider main"<<endl;
			vel[0]=-vel[0];
			pos[0]=-134;			
		} 
	//corner inward
	else if( ((pos[0]-4)>= -137.5) && (pos[0]<= -136)	&&((((pos[1]>(v+8)) && (pos[1]< (v+11)))|| ((pos[1]>(v-11)) && (pos[1]< (v-8)))))	)
		{//cout<<"slider corener inward"<<endl;
			//cout<<"corner inward "<<endl;
			vel[0]=-vel[0];
		}
	//corner outward		
		else if(  (pos[0]<-136) && (pos[0] >= -138.5) && (((pos[1]>(v+11)) && (pos[1]<=(v+12))) || ((pos[1]<(v-11)) && (pos[1]>= (v-12))) )	 )
		{		//cout<<"corner outward "<<endl;
				vel[1]=-vel[1];
		}
	// horizontal slider
		else if (pos[0]>=-138 && pos[0]<=-140 ) 
		{	if((pos[1]>(v+11.5)) && (pos[1]< (v+12.5))) 
		{	if(vel[1]<0)
			vel[1]=-vel[1];
			pos[1]=v+12;
		}
			else if((pos[1]< (v-11.5)) && (pos[1]> (v-12.5)))
			{
				if(vel[1]>0)
				vel[1]=-vel[1];
				pos[1]=v-12;
			}
		}
		}

		else if(vel[0]>0)
		{

	if((pos[0]>=132.5)&& pos[0]<=135.5 && pos[1]<=(ai_v+8) && pos[1]>=(ai_v-8))	
		{//cout<<"ai_main"<<endl;
			vel[0]=-vel[0];
			pos[0]=134;			
		} 
	//corner inward
	else if( ((pos[0]+4)<=139.5) && (pos[0]>= +134)	&&((((pos[1]>=(ai_v+8)) && (pos[1]<= (ai_v+11)))|| ((pos[1]>=(ai_v-11)) && (pos[1]<= (ai_v-8)))))	)
		{
			//cout<<"ai_corner inward "<<endl;
			vel[0]=-vel[0];
		}
	//corner outward		
		else if(  (pos[0]>=+134) && (pos[0] <= +137.5) && (((pos[1]>=(ai_v+11)) && (pos[1]<=(ai_v+12))) || ((pos[1]<=(ai_v-11)) && (pos[1]>= (ai_v-12))) )	 )
		{		//cout<<"ai_corner outward "<<endl;
				vel[1]=-vel[1];
		}
	// horizontal slider
		else if (pos[0]<=+138 && pos[0]>=+140 ) 
		{	if((pos[1]>=(ai_v+11.5)) && (pos[1]<= (ai_v+12.5))) 
		{	if(vel[1]<0)
			vel[1]=-vel[1];
			pos[1]=ai_v+12;
		}
			else if((pos[1]<= (ai_v-11.5)) && (pos[1]>= (ai_v-12.5)))
			{
				if(vel[1]>=0)
				vel[1]=-vel[1];
				pos[1]=ai_v-12;
			}
		}

		}

		if(160<=(pos[0]+4.0))
		{	cout<<"u win"<<endl;
			pos[0]=156;
			vel[0]=-vel[0];
		}

		else if(-160>=(pos[0]-4.0))
		{	cout<<"U lose "<<endl;
			pos[0]=0.0;
			vel[0]=-vel[0];
		}
		if (70<=(pos[1]+4))
		{
			pos[1]=66;
			vel[1]=-vel[1];
		}
		else if(-70>=(pos[1]-4))
		{
			pos[1]=-66;
			vel[1]=-vel[1];
		}
		storeTime= clock();
	}
	}
	
	
};