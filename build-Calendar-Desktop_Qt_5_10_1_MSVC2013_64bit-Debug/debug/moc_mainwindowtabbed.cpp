/****************************************************************************
** Meta object code from reading C++ file 'mainwindowtabbed.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Calendar/mainwindowtabbed.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowtabbed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainWindowTabbed_t {
    QByteArrayData data[13];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainWindowTabbed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainWindowTabbed_t qt_meta_stringdata_mainWindowTabbed = {
    {
QT_MOC_LITERAL(0, 0, 16), // "mainWindowTabbed"
QT_MOC_LITERAL(1, 17, 25), // "on_calendarWidget_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "date"
QT_MOC_LITERAL(4, 49, 40), // "on_AddEvent_AcceptDeclineButt..."
QT_MOC_LITERAL(5, 90, 34), // "on_SelectTodoListTab_tabBarCl..."
QT_MOC_LITERAL(6, 125, 5), // "index"
QT_MOC_LITERAL(7, 131, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(8, 153, 42), // "on_AddEvent_SaveThisLocationB..."
QT_MOC_LITERAL(9, 196, 22), // "on_weeklyStats_clicked"
QT_MOC_LITERAL(10, 219, 23), // "on_monthlyStats_clicked"
QT_MOC_LITERAL(11, 243, 57), // "on_AddEvent_LoadSavedLocation..."
QT_MOC_LITERAL(12, 301, 4) // "arg1"

    },
    "mainWindowTabbed\0on_calendarWidget_clicked\0"
    "\0date\0on_AddEvent_AcceptDeclineButton_accepted\0"
    "on_SelectTodoListTab_tabBarClicked\0"
    "index\0on_pushButton_pressed\0"
    "on_AddEvent_SaveThisLocationButton_clicked\0"
    "on_weeklyStats_clicked\0on_monthlyStats_clicked\0"
    "on_AddEvent_LoadSavedLocationComboBox_currentIndexChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainWindowTabbed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void mainWindowTabbed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainWindowTabbed *_t = static_cast<mainWindowTabbed *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_calendarWidget_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->on_AddEvent_AcceptDeclineButton_accepted(); break;
        case 2: _t->on_SelectTodoListTab_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_pressed(); break;
        case 4: _t->on_AddEvent_SaveThisLocationButton_clicked(); break;
        case 5: _t->on_weeklyStats_clicked(); break;
        case 6: _t->on_monthlyStats_clicked(); break;
        case 7: _t->on_AddEvent_LoadSavedLocationComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mainWindowTabbed::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_mainWindowTabbed.data,
      qt_meta_data_mainWindowTabbed,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *mainWindowTabbed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWindowTabbed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainWindowTabbed.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mainWindowTabbed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
