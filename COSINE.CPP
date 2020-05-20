

#include<graphics.h>
#include<conio.h>
#include<math.h>

void main()
	{
		double c,c1;
		int gd=DETECT,gm;
		initgraph(&gd,&gm,"..//bgi");
		line(0,237.5,637.5,237.5);
		line(314,0,314,475);
		setcolor(RED);
		for(c=c1=314;c<=628;c+=0.01,c1-=0.01)
			{
				line(c,-200*cos(c/25)+237.50,c+0.01,-200*cos(c/25+0.01)+237.50);
				line(c1,-200*cos(c1/25)+237.50,c1-0.01,-200*cos(c1/25-0.01)+237.50);
			}
		getch();
	}