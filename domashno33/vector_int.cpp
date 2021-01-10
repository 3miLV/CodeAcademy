#include "vector_int.h"
#include <cmath>

Vec3 LinearInterpolation(const Vec3& a, const Vec3& b, float w){

    //Vec3 result = {a.x + w * (b.x - a.x), a.y + w * (b.y - a.y), a.z + w * (b.z - a.z)};
    Vec3 result = {(1 - w) * a.x + w * b.x, (1 - w) * a.y + w * b.y, (1 - w) * a.z + w * b.z};
    return result;
}

float magnitude(const Vec3 &v){
    float rezult = std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
    return rezult;
}

float DotProduct(const Vec3 &v1, const Vec3 &v2){
        float rezult = v1.x * v2.x + v1.y * v2.y + v1.z + v2.z;
        return rezult;
}

bool WithinMaxAngle(const Vec3 &v1, const Vec3 &v2){
    float angle = std::acos(DotProduct(v1,v2)/(magnitude(v1) * magnitude(v2)));
    printf("%f\n", angle);
    if(angle < MAX_DEGREES){
        return true;
    }
    return false;
}
