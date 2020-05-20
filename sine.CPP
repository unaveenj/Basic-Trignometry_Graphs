
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
		for(c=c1=314;c<=628;c+=0.001,c1-=0.001)
			{
				line(c,-200*sin(c/25)+237.50,c+0.001,-200*sin(c/25+0.001)+237.50);
				line(c1,-200*sin(c1/25)+237.50,c1-0.001,-200*sin(c1/25-0.001)+237.50);
			}
		getch();
		closegraph();
	}
