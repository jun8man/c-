/**
 * @file    hybrid_zoom.hpp
 * @brief   Zoomクラスを継承したHybrid Zoomのヘッダ.
 */

#ifndef _HYBRID_ZOOM_HPP_
#define _HYBRID_ZOOM_HPP_

#include "zoom.hpp"

using namespace std;

class HybridZoom : Zoom
{
public:
    HybridZoom();
    virtual ~HybridZoom();
    void zoom(const int distance, int& ratio);
private:
    int m_base_ratio;
};

#endif
