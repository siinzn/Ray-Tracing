#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
public:
	ray() {};
	ray(const point3& origin, const vec3& directon) : orig(origin), dir(directon) {};
	const point3& origin() const { return orig; }; //first const is for the return, second to not change the object itself
	const vec3& direction() const { return dir; };

	point3 at(double t) const {
		return orig + t * dir;
	}
private:
	point3 orig;
	vec3 dir;
};

#endif
