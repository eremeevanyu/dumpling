//
// Created by 1 on 28.11.2022.
//

#ifndef HELLO_WORLD_VECTOR2_H
#define HELLO_WORLD_VECTOR2_H


class Vector2{
public:
    Vector2();
    Vector2(double x, double y);
    ~Vector2() = default;

    double getLen() const;

    void setX(int x);
    double getX() const;
    void setY(int y);
    double getY() const;

    double getPhi() const;
    double getPhiDeg() const;

    std::pair<double, double> polar() const;

    Vector2& operator+=(const Vector2& vector);
    friend Vector2 operator+ (const Vector2& l_vector, const Vector2& r_vector);

    Vector2& operator-=(const Vector2& vector);
    friend Vector2 operator- (const Vector2& l_vector, const Vector2& r_vector);

    Vector2& operator*=(const double numb);
    friend Vector2 operator* (const Vector2& l_vector, const double numb);

    Vector2& operator/=(const double numb);
    friend Vector2 operator/ (const Vector2& l_vector, const double numb);

    friend double operator* (const Vector2& l_vector, const Vector2& r_vector);

    friend bool operator== (const Vector2& l_vector, const Vector2& r_vector);
    friend bool operator!= (const Vector2& l_vector, const Vector2& r_vector);
    
    friend double pseudoscalar(const Vector2& l_vector, const Vector2& r_vector);

    void normalization();

    void set_len(double len);

    void set_phi(double phi);

    friend double cos_dist(const Vector2& l_vector, const Vector2& r_vector);

private:
    double x, y;
};

#endif //HELLO_WORLD_VECTOR2_H
