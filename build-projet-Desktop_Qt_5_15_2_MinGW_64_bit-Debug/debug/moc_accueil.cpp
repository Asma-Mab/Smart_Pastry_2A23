/****************************************************************************
** Meta object code from reading C++ file 'accueil.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../projet/accueil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accueil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_accueil_t {
    QByteArrayData data[17];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_accueil_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_accueil_t qt_meta_stringdata_accueil = {
    {
QT_MOC_LITERAL(0, 0, 7), // "accueil"
QT_MOC_LITERAL(1, 8, 24), // "on_button_profil_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 25), // "on_button_employe_clicked"
QT_MOC_LITERAL(4, 60, 28), // "on_button_equipement_clicked"
QT_MOC_LITERAL(5, 89, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 111, 24), // "on_button_client_clicked"
QT_MOC_LITERAL(7, 136, 25), // "on_button_produit_clicked"
QT_MOC_LITERAL(8, 162, 30), // "on_button_fournisseurs_clicked"
QT_MOC_LITERAL(9, 193, 27), // "on_button_evenement_clicked"
QT_MOC_LITERAL(10, 221, 25), // "on_button_recette_clicked"
QT_MOC_LITERAL(11, 247, 25), // "on_button_quitter_clicked"
QT_MOC_LITERAL(12, 273, 13), // "on_aj_clicked"
QT_MOC_LITERAL(13, 287, 27), // "on_button_recette_2_clicked"
QT_MOC_LITERAL(14, 315, 26), // "on_tableWidget_cellClicked"
QT_MOC_LITERAL(15, 342, 3), // "row"
QT_MOC_LITERAL(16, 346, 6) // "column"

    },
    "accueil\0on_button_profil_clicked\0\0"
    "on_button_employe_clicked\0"
    "on_button_equipement_clicked\0"
    "on_pushButton_clicked\0on_button_client_clicked\0"
    "on_button_produit_clicked\0"
    "on_button_fournisseurs_clicked\0"
    "on_button_evenement_clicked\0"
    "on_button_recette_clicked\0"
    "on_button_quitter_clicked\0on_aj_clicked\0"
    "on_button_recette_2_clicked\0"
    "on_tableWidget_cellClicked\0row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_accueil[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    2,   91,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,

       0        // eod
};

void accueil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<accueil *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_button_profil_clicked(); break;
        case 1: _t->on_button_employe_clicked(); break;
        case 2: _t->on_button_equipement_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_button_client_clicked(); break;
        case 5: _t->on_button_produit_clicked(); break;
        case 6: _t->on_button_fournisseurs_clicked(); break;
        case 7: _t->on_button_evenement_clicked(); break;
        case 8: _t->on_button_recette_clicked(); break;
        case 9: _t->on_button_quitter_clicked(); break;
        case 10: _t->on_aj_clicked(); break;
        case 11: _t->on_button_recette_2_clicked(); break;
        case 12: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject accueil::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_accueil.data,
    qt_meta_data_accueil,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *accueil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *accueil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_accueil.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int accueil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
