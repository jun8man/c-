/**
 * @file    digital_zoom.hpp
 * @brief   Zoomクラスを継承したDigital Zoomのヘッダ.
 */

#ifndef _DIGITAL_ZOOM_HPP_
#define _DIGITAL_ZOOM_HPP_

#include "zoom.hpp"

using namespace std;

class DigitalZoom : public Zoom
{
public:
    DigitalZoom();
    virtual ~DigitalZoom();
    void zoom(const int distance, int& ratio);
private:
    int m_base_ratio;
};

#endif
