#pragma once

#include <iostream>

#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    Ball(const Point &pCenter, const Velocity &vVelocity, const Color &cColor, double dRadius, bool isCollidable)  :    m_vVelocity(vVelocity),
                                                                                                                        m_pCenter(pCenter),
                                                                                                                        m_cColor(cColor),
                                                                                                                        m_dRadius(dRadius),
                                                                                                                        m_bIsCollidable(isCollidable) { };
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;

private:
    Velocity m_vVelocity;
    
    Point m_pCenter;

    Color m_cColor;

    double m_dRadius;

    bool m_bIsCollidable;
};
