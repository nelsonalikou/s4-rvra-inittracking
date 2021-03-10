#ifndef ARTFLYSTICK_H
#define ARTFLYSTICK_H


#include "ARTMarker.h"
#include "ToolsMarker.h"
#include <QVector>

class ARTFlystick : public ARTMarker
{
public :
    ARTFlystick(int, const qglviewer::Vec &,  const QColor &, const qglviewer::Quaternion &);
    virtual ~ARTFlystick();
    void draw();
};
#endif // ARTFLYSTICK_H
