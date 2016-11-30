/*
 * File Header:
 * compute_transformed_points takes in sensed points and Xreg
 * Return transformed sensed points 
 * 		
 */
#ifndef COMPUTE_TRANSFORMED_POINTS
#define COMPUTE_TRANSFORMED_POINTS

#include <Eigen/Dense>
using namespace Eigen;
using namespace std;

typedef Matrix<float, 3, Dynamic> PointCloud;

Matrix4f eul2rotm(Array3f eul);

Matrix4f reg_params_to_transformation_matrix(ArrayXf params);

PointCloud compute_transformed_points(PointCloud ptcldMoving, ArrayXf Xreg);

#endif