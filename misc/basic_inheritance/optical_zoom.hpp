/**
 * @file    optical_zoom.hpp
 * @brief   Zoomクラスを継承したOptical Zoomのヘッダ.
 */

#ifndef _OPTICAL_ZOOM_HPP_
#define _OPTICAL_ZOOM_HPP_

#include "zoom.hpp"

class OpticalZoom : public Zoom
{
public:
    OpticalZoom();
    virtual ~OpticalZoom();
    void zoom(const int distance, int& ratio);
private:
    int m_base_ratio;
};

#endif
