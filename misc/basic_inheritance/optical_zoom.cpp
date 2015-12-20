/**
 * @file    optical_zoom.cpp
 * @brief   Zoomクラスを継承したOptical Zoomの実体.
 */

#include "optical_zoom.hpp"

using namespace std;

OpticalZoom::OpticalZoom() : m_base_ratio(2)
{
    cout << "Create Optical Zoom Instance: Base Ratio >> " << m_base_ratio << endl;
}

OpticalZoom::~OpticalZoom()
{
    cout << "Delete Optical Zoom Instance" << endl;
}

void OpticalZoom::zoom(const int distance, int& ratio)
{
    ratio = ratio + distance * m_base_ratio;
}