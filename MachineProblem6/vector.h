#ifndef VECTOR_T //compiler guard
#define VECTOR_T

/* Abstract data type */

typedef struct{
    double x;
    double y;
    double z;
} vector_t;

vector_t vector_zero();
vector_t make_vector(double x, double y, double z);
vector_t vec_add(vector_t u, vector_t v);
vector_t vec_sub(vector_t u, vector_t v);
vector_t vec_scale(vector_t u, double k);
double vec_dot(vector_t u, vector_t v);
vector_t vec_cross(vector_t u, vector_t v);
vector_t vec_unitvector(vector_t u);
vector_t vec_unitnormal(vector_t u, vector_t v);
double vec_magnitude(vector_t u);
void vec2a(vector_t v, char result[]);

#endif
