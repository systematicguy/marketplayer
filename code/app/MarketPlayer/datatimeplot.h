#ifndef DATATIMEPLOT_H
#define DATATIMEPLOT_H

#include <QString>
#include <QLabel>
#include "model.h"
#include "qcustomplot.h"

class DataTimePlot
{
protected:
    QCustomPlot* plot;
    QLabel* label;
    QString labelPrefix;
public:
    DataTimePlot(QCustomPlot* plot, QLabel *label, QString yLabel, QString labelPrefix);
    void plotData(DataTimePair const& dataTime, int currentIdx);
    void reset();
};

#endif // DATATIMEPLOT_H
