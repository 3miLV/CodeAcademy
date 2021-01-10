#include <iostream>
#include <random>

struct Vec3{
    float x,y,z;
};

Vec3 LinearInterpolation(const Vec3& a, const Vec3& b, float w);

const float MAX_DEGREES = 43.f;

bool WithinMaxAngle(const Vec3 &v1, const Vec3 &v2);
float magnitude(const Vec3 &v);
float DotProduct(const Vec3 &v1, const Vec3 &v2);
