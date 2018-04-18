#ifndef ACTIVITYSTATS_H
#define ACTIVITYSTATS_H

#include <QtWidgets/QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

QT_CHARTS_USE_NAMESPACE

class activitystats
{

private:
    QPieSeries *series = new QPieSeries();
    QPieSlice *slice1 ;
    QPieSlice *slice2 ;
    QPieSlice *slice3 ;
    QPieSlice *slice4 ;
    QPieSlice *slice5 ;
    QPieSlice *slice6 ;
    QPieSlice *slice7 ;
    QPieSlice *slice8 ;

public:
    QChart *chart = new QChart();
    activitystats();
    void buildPieSeries(int E, int W, int H, int F, int A, int S, int V, int M);

};

#endif // ACTIVITYSTATS_H
