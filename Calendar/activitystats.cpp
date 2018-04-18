#include "activitystats.h"

activitystats::activitystats()
{

}

void activitystats::buildPieSeries(int E, int W, int H, int F, int A, int S, int V, int M)
{

    series->append("Exercise", 2);
    series->append("Work", 2);
    series->append("Homework", 2);
    series->append("Free Time", 2);
    series->append("Appointment", 2);
    series->append("Study", 2);
    series->append("Vacation", 2);
    series->append("Meeting", 2);

    slice1 = series->slices().at(0);
    slice1->setLabelVisible(true);
    slice1->setBrush(Qt::green);

    slice2 = series->slices().at(1);
    slice2->setLabelVisible(true);
    slice2->setBrush(Qt::blue);

    slice3 = series->slices().at(2);
    slice3->setLabelVisible(true);
    slice3->setBrush(Qt::cyan);

    slice4 = series->slices().at(3);
    slice4->setLabelVisible(true);
    slice4->setBrush(Qt::yellow);

    slice5 = series->slices().at(4);
    slice5->setLabelVisible(true);
    slice5->setBrush(Qt::red);

    slice6 = series->slices().at(5);
    slice6->setLabelVisible(true);
    slice6->setBrush(Qt::darkCyan);

    slice7 = series->slices().at(6);
    slice7->setLabelVisible(true);
    slice7->setBrush(Qt::darkBlue);

    slice8 = series->slices().at(7);
    slice8->setLabelVisible(true);
    slice8->setBrush(Qt::darkMagenta);

    chart->addSeries(series);
    //chart->setTitle("Activity Breakdown");

    chart->legend()->hide();
}
