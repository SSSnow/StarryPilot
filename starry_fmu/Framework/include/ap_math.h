/*
 * File      : ap_math.h
 *
 *
 * Change Logs:
 * Date           Author       	Notes
 * 2016-07-01     zoujiachi   	the first version
 */
 
#ifndef __AP_MATH_H__
#define __AP_MATH_H__

#include <rtthread.h>
#include <rtdevice.h>

float math_rsqrt(float number);
float math_vector_length(const float v[3]);
float math_vector_dot(const float left[3],const float right[3]);
void math_vector_cross(float result[3],const float left[3],const float right[3]);
uint16_t math_crc16(uint16_t crc,const void * data,uint16_t len);
void math_itoa(int32_t val,char * str);
const char * math_afromi(int32_t val);

void Vector3_Set(float vector[3], float x, float y, float z);
void Vector3_Normalize(float result[3], const float vector[3]);
void Vector3_CrossProduct(float result[3], const float vector1[3], const float vector2[3]);
float Vector3_DotProduct(const float vector1[3], const float vector2[3]);
float Vector3_Length(const float vector[3]);
void Vector2_Normalize(float result[2], float vector[2]);
float Vector2_DotProduct(const float vector1[2], const float vector2[2]);

uint8_t constrain(float *val, float min_val, float max_val);
float constrain_float(float amt, float low, float high);

#endif
