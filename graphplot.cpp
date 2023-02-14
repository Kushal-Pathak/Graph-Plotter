#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define h 230
#define w 230
#define pi 3.14159

int y(double);
void plotter(int,int);
void plot();

int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	circle(w,h,1);
	plot();
	getch();
	return 0;
}

int y(double x){
	return  pow(x+10,3);
}

void plot(){
	int y_value;
	for(double i=0;i<500;i+=0.001){
		y_value=y(i);
		if(y_value)
		plotter(i,y_value);
	}
}

void plotter(int x,int y){
	putpixel(w+x,h-y,WHITE);
}







