#ifndef Sphere_hpp
#define Sphere_hpp

#include <stdio.h>

#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>

#include "object3d.hpp"
#include "material.hpp"
#include "vectors.hpp"

class Sphere: public virtual Object3D {
private:
    Vec3f center;
    float radius;
public:
    Sphere(Vec3f &c, float r, Material* m): Object3D() {
        center = c;
        radius = r;
        material = m;
    }
    ~Sphere() {}
    bool intersect(const Ray &r, Hit &h, float tmin);
    void paint(void);
};

#endif /* Sphere_hpp */
