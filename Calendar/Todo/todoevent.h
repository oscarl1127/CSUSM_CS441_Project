#ifndef TODOEVENT_H
#define TODOEVENT_H

#include <QObject>
#include <QWidget>

class TodoEvent
{
public:
    TodoEvent(QString Title, QString Note);
    void SetTitle(QString Title);
    void SetNote(QString Note);
    QString GetTitle();
    QString GetNote();
private:
    QString title, note;
};

#endif // TODOEVENT_H
