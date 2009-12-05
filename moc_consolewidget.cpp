/****************************************************************************
** Meta object code from reading C++ file 'consolewidget.h'
**
** Created: Sat Dec 5 22:55:46 2009
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "consolewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consolewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConsoleOutputView[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ConsoleOutputView[] = {
    "ConsoleOutputView\0"
};

const QMetaObject ConsoleOutputView::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_ConsoleOutputView,
      qt_meta_data_ConsoleOutputView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConsoleOutputView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConsoleOutputView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConsoleOutputView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleOutputView))
        return static_cast<void*>(const_cast< ConsoleOutputView*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int ConsoleOutputView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ConsoleWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   58,   14,   14, 0x08,
      96,   89,   14,   14, 0x08,
     119,   15,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConsoleWidget[] = {
    "ConsoleWidget\0\0exitCode,crashed\0"
    "commandFinished(int,bool)\0command\0"
    "startProcess(QString&)\0output\0"
    "appendOutput(QString&)\0processFinished(int,bool)\0"
};

const QMetaObject ConsoleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConsoleWidget,
      qt_meta_data_ConsoleWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConsoleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleWidget))
        return static_cast<void*>(const_cast< ConsoleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: commandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: startProcess((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: appendOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ConsoleWidget::commandFinished(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
