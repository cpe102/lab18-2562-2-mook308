#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
	double dx,dy;
	double dx1 = a.x+a.w;
	double dx2 = b.x+b.w;
	dx = min(dx1,dx2) - max(a.x,b.x);

	double dy1 = a.y-a.h;
	double dy2 = b.y-b.h;
	dy = min(a.y,b.y) - max(dy1,dy2);

	if ((dx*dy) >=0){
		return dx*dy;
	}else return 0;
	

}

int main(){
	Rect a,b;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> a.x >> a.y >> a.w >> a.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> b.x >> b.y >> b.w >> b.h;
	
	
	cout << "Overlap area = " << overlap(a,b);	
	return 0;
}
