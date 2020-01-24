#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "vector.h"

vector_t vector_zero(){
    return vector_make (0.0,0.0,0.0);
}

vector_t make_vector(double x, double y, double z){
    vector_t result;

    result.x = x;
    result.y = y;
    result.z = z;

    return result;
}

vector_t vec_add(vector_t u, vector_t v){
    vector_t sum;

    double x, y, z;
    x = u.x + v.x;
    y = u.y + v.y;
    z = u.z + v.z;

    sum = make_vector(x, y, z);

    return sum;
}

vector_t vec_sub(vector_t u, vector_t v){
    vector_t difference;
    double x, y, z;

    x = u.x - v.x;
    y = u.y - v.y;
    z = u.z - v.z;

    difference = make_vector(x, y, z);

    return difference;
}

vector_t vec_scale(vector_t u, double k){
    vector_t result;

    double x,y,z;

    x = u.x * k;
    y = u.y * k;
    z = u.z * k;

    result = make_vector(x, y, z);

    return result;
}

double vec_dot(vector_t u, vector_t v){
    double dot_vector;

    dot_vector = u.x * v.x + u.y * v.y + u.z * v.z;

    return dot_vector;
}

vector_t vec_cross(vector_t u, vector_t v){
    vector_t result;

    double x, y, z;

    x = u.y * v.z - u.z * v.y;
    y = u.z * v.z - u.x * v.z;
    z = u.x * v.y - u.y * v.x;

    result = make_vector(x, y, z);

    return result;
}

double vec_magnitude(vector_t u){
    double magnitude;

    magnitude = sqrt(pow(u.x,2) + pow(u.y , 2) + pow(u.z, 2));

    return magnitude;
}

vector_t vec_unitvector(vector_t u){
    vector_t unit_vec;

    double x, y, z;

    x = (u.x / vec_magnitude(u));
    y = (u.y / vec_magnitude(u));
    z = (u.z / vec_magnitude(u));

    unit_vec = make_vector(x, y, z);

    return unit_vec;
}

vector_t vec_unitnormal(vector_t u, vector_t v){
    vector_t unit_vec;

    unit_vec = vec_unitvector(vec_cross(u,v));

    return unit_vec;
}

void vec2a(vector_t v, char result[]){

    sprintf(result, "<%.3f,%.3f,%.3f>", v.x, v.y, v.z);
}
