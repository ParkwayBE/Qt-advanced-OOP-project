/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MarkImages/settingsdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_settingsdialog_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[15];
    char stringdata7[14];
    char stringdata8[12];
    char stringdata9[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_settingsdialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_settingsdialog_t qt_meta_stringdata_settingsdialog = {
    {
        QT_MOC_LITERAL(0, 14),  // "settingsdialog"
        QT_MOC_LITERAL(15, 17),  // "changedColorBlack"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 16),  // "changedColorBlue"
        QT_MOC_LITERAL(51, 13),  // "changedSizeS1"
        QT_MOC_LITERAL(65, 13),  // "changedSizeS2"
        QT_MOC_LITERAL(79, 14),  // "signalingBlack"
        QT_MOC_LITERAL(94, 13),  // "signalingBlue"
        QT_MOC_LITERAL(108, 11),  // "signalingS1"
        QT_MOC_LITERAL(120, 11)   // "signalingS2"
    },
    "settingsdialog",
    "changedColorBlack",
    "",
    "changedColorBlue",
    "changedSizeS1",
    "changedSizeS2",
    "signalingBlack",
    "signalingBlue",
    "signalingS1",
    "signalingS2"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_settingsdialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    0,   64,    2, 0x06,    3 /* Public */,
       5,    0,   65,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   67,    2, 0x0a,    6 /* Public */,
       8,    0,   68,    2, 0x0a,    7 /* Public */,
       9,    0,   69,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject settingsdialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_settingsdialog.offsetsAndSizes,
    qt_meta_data_settingsdialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_settingsdialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<settingsdialog, std::true_type>,
        // method 'changedColorBlack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changedColorBlue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changedSizeS1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changedSizeS2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalingBlack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalingBlue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalingS1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalingS2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void settingsdialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<settingsdialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changedColorBlack(); break;
        case 1: _t->changedColorBlue(); break;
        case 2: _t->changedSizeS1(); break;
        case 3: _t->changedSizeS2(); break;
        case 4: _t->signalingBlack(); break;
        case 5: _t->signalingBlue(); break;
        case 6: _t->signalingS1(); break;
        case 7: _t->signalingS2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (settingsdialog::*)();
            if (_t _q_method = &settingsdialog::changedColorBlack; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (settingsdialog::*)();
            if (_t _q_method = &settingsdialog::changedColorBlue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (settingsdialog::*)();
            if (_t _q_method = &settingsdialog::changedSizeS1; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (settingsdialog::*)();
            if (_t _q_method = &settingsdialog::changedSizeS2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *settingsdialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *settingsdialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_settingsdialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int settingsdialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void settingsdialog::changedColorBlack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void settingsdialog::changedColorBlue()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void settingsdialog::changedSizeS1()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void settingsdialog::changedSizeS2()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
