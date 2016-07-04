/*
 * vector.h
 *
 *  Created on: Jul 2, 2016
 *      Author: Nate
 */

#ifndef OBJECTS_VECTOR3D_H_
#define OBJECTS_VECTOR3D_H_
template<typename T>
class vector3D {
	public:
		vector3D() : x(0.0),y(0.0),z(0.0),mag(0){};

		vector3D(T i, T j, T k) : x(i), y(j), z(k), mag(0.0){};

		vector3D(T i, T j, T k, T m) : x(i), y(j), z(k), mag(m){};

		vector3D vector3D::operator -(vector3D);

		vector3D vector3D::operator +(vector3D);

		vector3D operator*(vector3D);

		double getXCoord() const {return this->x;};

		double getYCoord() const {return this->y;};

		double getZCoord() const {return this->z;};

		double getMag() const {return this->mag;};

		void setXCoord(T i){this->x = i;};

		void setYCoord(T j){this->y = j;};

		void setZCoord(T k){this->z = k;};

		void setMag(T m){this->mag = m;};

		virtual ~vector3D(){};

	protected:
		T x,y,z,mag;
};

#endif /* OBJECTS_VECTOR3D_H_ */
