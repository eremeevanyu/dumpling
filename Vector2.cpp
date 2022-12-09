//
// Created by 1 on 28.11.2022.
//

#include <iostream>
#include <cmath>
#include "Vector2.h"
#define M_PI 3.1415926


Vector2::Vector2() : x(0.0), y(0.0) {};
Vector2::Vector2(double x, double y) : x(x), y(y) {};

double Vector2::getLen() const{
    return std::sqrt(x * x + y * y);
}

double Vector2::getPhi() const {
    return std::atan2(y, x);
}

double Vector2::getPhiDeg() const {
    return getPhi() * 180 / M_PI;
}

void Vector2::setX(int x){
    x = x;
}

double Vector2::getX() const {
    return x;
}

void Vector2::setY(int y){
    y = y;
}

double Vector2::getY() const {
    return y;
}

std::pair<double, double> Vector2::polar() const
{
    return(std::make_pair(getLen(), getPhi()));
}

Vector2& Vector2::operator+=(const Vector2& vector) {
    x += vector.x;
    y += vector.y;

    return *this;
}

Vector2 operator+(const Vector2& l_vector, const Vector2& r_vector)
{
    Vector2 result(l_vector);

    result += r_vector;

    return result;
}

Vector2& Vector2::operator-=(const Vector2& vector) {
    x -= vector.x;
    y -= vector.y;

    return *this;
}

Vector2 operator-(const Vector2& l_vector, const Vector2& r_vector)
{
    Vector2 result(l_vector);

    result -= r_vector;

    return result;
}

Vector2& Vector2::operator*=(const double numb) {
    x *= numb;
    y *= numb;

    return *this;
}

Vector2 operator*(const Vector2& l_vector, const double numb)
{
    Vector2 result(l_vector);

    result *= numb;

    return result;
}

Vector2& Vector2::operator/=(const double numb) {
    x /= numb;
    y /= numb;

    return *this;
}

Vector2 operator/(const Vector2& l_vector, const double numb)
{
    Vector2 result(l_vector);

    result /= numb;

    return result;
}

double operator* (const Vector2& l_vector, const Vector2& r_vector)
{
    return l_vector.x * r_vector.x + l_vector.y * r_vector.y;

}


bool operator== (const Vector2& l_vector, const Vector2& r_vector)
{
    return l_vector.x==r_vector.x && l_vector.y == r_vector.y;
}

bool operator!= (const Vector2& l_vector, const Vector2& r_vector)
{
    return !(l_vector == r_vector);
}

double pseudoscalar(const Vector2& l_vector, const Vector2& r_vector)
{
    return l_vector.x * r_vector.y - l_vector.y * r_vector.x;
}

void Vector2::normalization()
{
    auto len = getLen();

    x /= len;
    y /= len;
}

void Vector2::set_len(double len)
{
    auto phi = getPhi();

    x = len*std::cos(phi);
    y = len*std::sin(phi);
}

void Vector2::set_phi(double phi)
{
    auto len = getLen();

    x = len * std::cos(phi);
    y = len * std::sin(phi);
}

double cos_dist(const Vector2& l_vector, const Vector2& r_vector)
{
    return l_vector * r_vector / l_vector.getLen() / r_vector.getLen();
}