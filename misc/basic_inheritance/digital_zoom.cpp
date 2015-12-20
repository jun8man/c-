/**
 * @file    digital_zoom.cpp
 * @brief   Zoomクラスを継承したDigital Zoomの実体.
 */

#include "digital_zoom.hpp"

using namespace std;

DigitalZoom::DigitalZoom() : m_base_ratio(3)
{
    cout << "Create Digital Zoom Instance: Base Ratio >> " << m_base_ratio << endl;
}

DigitalZoom::~DigitalZoom()
{
    cout << "Delete Digital Zoom Instance" << endl;
}

void DigitalZoom::zoom(const int distance, int& ratio)
{
    ratio = ratio + distance * m_base_ratio;
}