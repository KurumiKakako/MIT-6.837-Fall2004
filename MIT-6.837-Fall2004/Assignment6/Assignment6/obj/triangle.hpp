#ifndef triangle_hpp
#define triangle_hpp

#include <stdio.h>

#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>

#include "object3d.hpp"
#include "vectors.hpp"

class Triangle: public virtual Object3D {
private:
    Vec3f A;
    Vec3f B;
    Vec3f C;
    Vec3f p0;
    Vec3f e1;
    Vec3f e2;
    Vec3f normal;
public:
    Triangle(Vec3f &a, Vec3f &b, Vec3f &c, Material *m);
    ~Triangle() { delete material; delete box; }
    bool intersect(const Ray &r, Hit &h, float tmin);
    void paint(void);
    void insertIntoGrid(Grid *g, Matrix *m);
};

#endif /* triangle_hpp */
