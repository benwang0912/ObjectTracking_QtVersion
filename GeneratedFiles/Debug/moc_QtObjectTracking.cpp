/****************************************************************************
** Meta object code from reading C++ file 'QtObjectTracking.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtObjectTracking.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtObjectTracking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtObjectTracking_t {
    QByteArrayData data[15];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtObjectTracking_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtObjectTracking_t qt_meta_stringdata_QtObjectTracking = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QtObjectTracking"
QT_MOC_LITERAL(1, 17, 28), // "on_start_pauseButton_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "processFrame"
QT_MOC_LITERAL(4, 60, 16), // "openingOperation"
QT_MOC_LITERAL(5, 77, 8), // "cv::Mat&"
QT_MOC_LITERAL(6, 86, 3), // "img"
QT_MOC_LITERAL(7, 90, 16), // "closingOperation"
QT_MOC_LITERAL(8, 107, 8), // "trackObj"
QT_MOC_LITERAL(9, 116, 7), // "cv::Mat"
QT_MOC_LITERAL(10, 124, 14), // "thresholdedImg"
QT_MOC_LITERAL(11, 139, 5), // "frame"
QT_MOC_LITERAL(12, 145, 17), // "tagObjectPosition"
QT_MOC_LITERAL(13, 163, 1), // "x"
QT_MOC_LITERAL(14, 165, 1) // "y"

    },
    "QtObjectTracking\0on_start_pauseButton_clicked\0"
    "\0processFrame\0openingOperation\0cv::Mat&\0"
    "img\0closingOperation\0trackObj\0cv::Mat\0"
    "thresholdedImg\0frame\0tagObjectPosition\0"
    "x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtObjectTracking[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,
       8,    2,   52,    2, 0x08 /* Private */,
      12,    3,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 5,   10,   11,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,   11,   13,   14,

       0        // eod
};

void QtObjectTracking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtObjectTracking *_t = static_cast<QtObjectTracking *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_start_pauseButton_clicked(); break;
        case 1: _t->processFrame(); break;
        case 2: _t->openingOperation((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 3: _t->closingOperation((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 4: _t->trackObj((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< cv::Mat(*)>(_a[2]))); break;
        case 5: _t->tagObjectPosition((*reinterpret_cast< cv::Mat(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject QtObjectTracking::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtObjectTracking.data,
      qt_meta_data_QtObjectTracking,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtObjectTracking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtObjectTracking::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtObjectTracking.stringdata0))
        return static_cast<void*>(const_cast< QtObjectTracking*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtObjectTracking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
