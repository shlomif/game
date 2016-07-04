#include <iostream>
#include "objects/vector3D.h"

void coutvec(vector3D vec){
	std::cout << "X: "
			<< vec.getXCoord()
			<< "\n Y: "
			<< vec.getYCoord()
			<< "\n Z: "
			<< vec.getZCoord()
			<< std::endl;
}

int main(){
	vector3D v = vector3D();
	coutvec(v);
	vector3D n = vector3D(5.53, 3.43, 5.53);
	vector3D d = vector3D(1.2, 2.23, 5.33);
	coutvec(n);
	coutvec(v+n);
	coutvec(v*d);
	return 0;
}
