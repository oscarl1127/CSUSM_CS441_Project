#include "../Todo/todoevent.h"

TodoEvent::TodoEvent(QString Title, QString Note)
{
    title = Title;
    note = Note;
}


void TodoEvent::SetTitle(QString Title)
{
    title = Title;
}
void TodoEvent::SetNote(QString Note)
{
    note = Note;
}
QString TodoEvent::GetTitle()
{
    return title;
}
QString TodoEvent::GetNote()
{
    return note;
}
