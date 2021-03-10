#include "ARTFlystick.h"
#include "ARTMarker.h"
#include "ToolsMarker.h"
#include <QVector>


//const qglviewer::Quaternion &q,
ARTFlystick::ARTFlystick(int id, const qglviewer::Vec &pos,  const QColor & color, const qglviewer::Quaternion & q) : ARTMarker(id, pos, color)
{
    this->m_q = q;
}


ARTFlystick::~ARTFlystick()
{}


void ARTFlystick::draw(){
    ToolsMarker::drawSphere(this->m_pos, this->m_color, ToolsMarker::sphereSize*5);
}
