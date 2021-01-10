#include "vector_int.h"

int main(int argc, char const *argv[]) {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_real_distribution<float> random(-32.0f, 32.0f);

    Vec3 A = {random(rng), random(rng), random(rng)};
    Vec3 B = {random(rng), random(rng), random(rng)};
    float W = 0.85f;
    Vec3 C = LinearInterpolation(A, B, W);
    //Vec3 a = {1, 1, 1};
    //Vec3 b = {0.3f, 0, 1};
    //Vec3 c = {0.5f, 0, 1};
    std::cout << C.x << "," << C.y << "," << C.z << std::endl;
    int result = WithinMaxAngle(B, C);
    std::cout << result << std::endl;
}
