#include "ARTMarker.h"
#include "ToolsMarker.h"
#include <QVector>

//const qglviewer::Quaternion &q,
ARTMarker::ARTMarker(int id, const qglviewer::Vec &pos,  const QColor & color) : id(id), m_pos(pos), m_color(color)
{
   this->resizeTrace();
}


ARTMarker::~ARTMarker()
{}


void ARTMarker::addTrace(){
    m_posTraces += m_pos;
}

void ARTMarker::clearTrace(){
    m_posTraces.clear();
    m_qTraces.clear();
}

void ARTMarker::resizeTrace(){
    m_posTraces = QVector<qglviewer::Vec>(ToolsMarker::nbMaxTraces);
}

void ARTMarker::draw(){
    ToolsMarker marker;
    for(int pos=1; pos < m_posTraces.size() + 1; pos++){
        marker.drawSphere(m_posTraces[pos],m_color, (m_posTraces.size() - pos) * 20);
    }
}


