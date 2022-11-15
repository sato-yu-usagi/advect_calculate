#include "advect_calculate.h"
using namespace std;

int main(int argc,char *argv[])
{
	th = atof(argv[1]);    // convert string (angle) to number
	x = 0.0;               // initialization
	y = 0.0;
	v = 10.0*cos(PI/180*th);
	u = 10.0*sin(PI/180*th);
	
	t1=atof(argv[2]);      // initialization
	dt=atof(argv[3]);      // initialization

	for(t=0.0; t<t1; t+=dt){
		printf("%f %f\n",x,y);

		xa = x+v*dt;
		ya = y+u*dt;
		va = v;
		ua = u-9.8*dt;

		x = xa;
		y = ya;
		v = va;
		u = ua;
	}

    cout << "end" <<endl;
    return 0;
}
