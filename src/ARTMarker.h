#ifndef ARTMARKER_H
#define ARTMARKER_H
#include "QGLViewer/qglviewer.h"
#include <QColor>
#include <QVector>
#include <QList>
class ARTMarker
{

protected :
    int id;
    qglviewer::Vec m_pos;
    qglviewer::Quaternion m_q;
    QColor m_color;
    QVector<qglviewer::Vec> m_posTraces;
    QVector<qglviewer::Quaternion> m_qTraces;

public :
    //const qglviewer::Quaternion &,
    ARTMarker(int, const qglviewer::Vec &,  const QColor &);
    virtual ~ARTMarker();

protected :
    void addTrace();
    void clearTrace();
    void resizeTrace();

public :
    void draw();


};

#endif // ARTMARKER_H
