#ifndef ARTBODY_H
#define ARTBODY_H

#include "ARTMarker.h"
#include "ToolsMarker.h"
#include <QVector>

class ARTBody : public ARTMarker
{
public :
    ARTBody(int, const qglviewer::Vec &,  const QColor &, const qglviewer::Quaternion &);
    virtual ~ARTBody();
    void draw();
};

#endif // ARTBODY_H
