#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    Ball(Velocity &velocity, Point &center, double radius);
    Ball();
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
private:
    Velocity vVelocity;
    Point pCenter;
    double dMass;
    double dRadius;
};
