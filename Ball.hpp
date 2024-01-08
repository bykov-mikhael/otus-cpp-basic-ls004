#pragma once

#include <iostream>

#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    Ball(const Point &pPoint, const Point &pVelocity, const Color &cColor, double dRadius)  :   m_vVelocity(pVelocity),
                                                                                                m_pPoint(pPoint),
                                                                                                m_cColor(cColor),
                                                                                                m_dRadius(dRadius) {
                                                                                                
                                                                                                std::cout << "ctor Ball::Ball" << m_pPoint.x << m_pPoint.y << std::endl;

                                                                                                };
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;

private:
    Velocity m_vVelocity;
    
    Point m_pPoint;

    Color m_cColor;

    double m_dRadius;
};
