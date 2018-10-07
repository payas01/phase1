/****************************************************************************
** Meta object code from reading C++ file 'gamesLayoutView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../phase1-master/gamesLayoutView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamesLayoutView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gamesLayoutView_t {
    QByteArrayData data[13];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gamesLayoutView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gamesLayoutView_t qt_meta_stringdata_gamesLayoutView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "gamesLayoutView"
QT_MOC_LITERAL(1, 16, 11), // "game1Button"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "game2Button"
QT_MOC_LITERAL(4, 41, 11), // "game3Button"
QT_MOC_LITERAL(5, 53, 11), // "back_button"
QT_MOC_LITERAL(6, 65, 7), // "setHome"
QT_MOC_LITERAL(7, 73, 10), // "menuButton"
QT_MOC_LITERAL(8, 84, 13), // "setSignUpPage"
QT_MOC_LITERAL(9, 98, 13), // "setSignInPage"
QT_MOC_LITERAL(10, 112, 16), // "logInButtonPress"
QT_MOC_LITERAL(11, 129, 23), // "back_button_tohomescene"
QT_MOC_LITERAL(12, 153, 11) // "playAsGuest"

    },
    "gamesLayoutView\0game1Button\0\0game2Button\0"
    "game3Button\0back_button\0setHome\0"
    "menuButton\0setSignUpPage\0setSignInPage\0"
    "logInButtonPress\0back_button_tohomescene\0"
    "playAsGuest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gamesLayoutView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gamesLayoutView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gamesLayoutView *_t = static_cast<gamesLayoutView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->game1Button(); break;
        case 1: _t->game2Button(); break;
        case 2: _t->game3Button(); break;
        case 3: _t->back_button(); break;
        case 4: _t->setHome(); break;
        case 5: _t->menuButton(); break;
        case 6: _t->setSignUpPage(); break;
        case 7: _t->setSignInPage(); break;
        case 8: _t->logInButtonPress(); break;
        case 9: _t->back_button_tohomescene(); break;
        case 10: _t->playAsGuest(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject gamesLayoutView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_gamesLayoutView.data,
      qt_meta_data_gamesLayoutView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gamesLayoutView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gamesLayoutView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gamesLayoutView.stringdata0))
        return static_cast<void*>(const_cast< gamesLayoutView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int gamesLayoutView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
