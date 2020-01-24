/** CS - 210
 * Machine Problem 6
 * Vector Library
 * Author : kevil khadka
 * Professor : Don Roberts
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "vector.h"

/* Implementation of complex_t functions */

vector_t vector_zero(){

    return make_vector(0.0,0.0,0.0);
}

// make_vector: takes three double arguments which are the components of a vector and return a vector_t
vector_t make_vector(double x, double y, double z){
    vector_t result;

    result.x = x;
    result.y = y;
    result.z = z;

    return result;
}

//vec_add : takes two vectors and calculate the addition of their vectors
vector_t vec_add(vector_t u, vector_t v){
    vector_t sum;
    double x, y, z;

    x = u.x + v.x;
    y = u.y + v.y;
    z = u.z + v.z;

    sum = make_vector(x, y, z);

    return sum;
}

//vec_sub : takes two vectors and calculate the subtraction of their vectors
vector_t vec_sub(vector_t u, vector_t v){
    vector_t difference;
    double x, y, z;

    x = u.x - v.x;
    y = u.y - v.y;
    z = u.z - v.z;

    difference = make_vector(x, y, z);

    return difference;
}

//vec_scale : takes a vector and calculate a scalar product
vector_t vec_scale(vector_t u, double k){
    vector_t result;

    double x,y,z;

    x = u.x * k;
    y = u.y * k;
    z = u.z * k;

    result = make_vector(x, y, z);

    return result;
}

//vec_dot : takes two vectors and calculate a dot product
double vec_dot(vector_t u, vector_t v){
    double dot_vector;

    dot_vector = u.x * v.x + u.y * v.y + u.z * v.z;

    return dot_vector;
}

//vec_cross : takes two vectors and calculate a cross product of their vector
vector_t vec_cross(vector_t u, vector_t v){
    vector_t result;

    double x, y, z;

    x = u.y * v.z - u.z * v.y;
    y = u.z * v.x - u.x * v.z;
    z = u.x * v.y - u.y * v.x;

    result = make_vector(x, y, z);

    return result;
}

//vec_magnitude : takes a vector and calculate a magnitude and return it result
double vec_magnitude(vector_t u){
    double magnitude;

    magnitude = sqrt(pow(u.x,2) + pow(u.y , 2) + pow(u.z, 2));

    return magnitude;
}

// vec_unitvector takes a vector and calculate a unit vector and return it
vector_t vec_unitvector(vector_t u){
    vector_t unit_vec;

    double x, y, z;

    x = (u.x / vec_magnitude(u));
    y = (u.y / vec_magnitude(u));
    z = (u.z / vec_magnitude(u));

    unit_vec = make_vector(x, y, z);

    return unit_vec;
}

//vec_unitnormal takes two vector and returns a unit vector that is orthogonal to both of them
vector_t vec_unitnormal(vector_t u, vector_t v){
    vector_t unit_vec;

    unit_vec = vec_unitvector(vec_cross(u,v));

    return unit_vec;
}

// vec2a : puts a string representation of x into the string result
void vec2a(vector_t v, char result[]){

    sprintf(result, "<%.3f,%.3f,%.3f>", v.x, v.y, v.z);
}
