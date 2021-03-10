#include "ARTBody.h"
#include "ARTMarker.h"
#include "ToolsMarker.h"
#include <QVector>


//const qglviewer::Quaternion &q,
ARTBody::ARTBody(int id, const qglviewer::Vec &pos,  const QColor & color, const qglviewer::Quaternion & q) : ARTMarker(id, pos, color)
{
    this->m_q = q;
}


ARTBody::~ARTBody()
{}


void ARTBody::draw(){
    ToolsMarker::drawSphere(this->m_pos, this->m_color, ToolsMarker::sphereSize*5);
}
