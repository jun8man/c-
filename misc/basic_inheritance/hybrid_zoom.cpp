/**
 * @file    hybrid_zoom.cpp
 * @brief   Zoomクラスを継承したHybrid Zoomの実体.
 */

#include "hybrid_zoom.hpp"

using namespace std;

HybridZoom::HybridZoom() : m_base_ratio(5)
{
    cout << "Create Hybrid Zoom Instance: Base Ratio >> " << m_base_ratio << endl;
}

HybridZoom::~HybridZoom()
{
    cout << "Delete Hybrid Zoom Instance" << endl;
}

void HybridZoom::zoom(const int distance, int& ratio)
{
    ratio = ratio + distance * m_base_ratio;
}