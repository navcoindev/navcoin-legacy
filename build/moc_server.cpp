/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[21];
    char stringdata[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Server_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Server"
QT_MOC_LITERAL(1, 7, 13), // "pseudoChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "newPseudo"
QT_MOC_LITERAL(4, 32, 7), // "joinTab"
QT_MOC_LITERAL(5, 40, 9), // "tabJoined"
QT_MOC_LITERAL(6, 50, 10), // "readServer"
QT_MOC_LITERAL(7, 61, 11), // "errorSocket"
QT_MOC_LITERAL(8, 73, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 102, 9), // "connected"
QT_MOC_LITERAL(10, 112, 5), // "joins"
QT_MOC_LITERAL(11, 118, 8), // "sendData"
QT_MOC_LITERAL(12, 127, 3), // "txt"
QT_MOC_LITERAL(13, 131, 4), // "join"
QT_MOC_LITERAL(14, 136, 4), // "chan"
QT_MOC_LITERAL(15, 141, 5), // "leave"
QT_MOC_LITERAL(16, 147, 6), // "ecrire"
QT_MOC_LITERAL(17, 154, 8), // "destChan"
QT_MOC_LITERAL(18, 163, 7), // "msgTray"
QT_MOC_LITERAL(19, 171, 15), // "updateUsersList"
QT_MOC_LITERAL(20, 187, 7) // "message"

    },
    "Server\0pseudoChanged\0\0newPseudo\0joinTab\0"
    "tabJoined\0readServer\0errorSocket\0"
    "QAbstractSocket::SocketError\0connected\0"
    "joins\0sendData\0txt\0join\0chan\0leave\0"
    "ecrire\0destChan\0msgTray\0updateUsersList\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    0,   97,    2, 0x06 /* Public */,
       5,    0,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   99,    2, 0x0a /* Public */,
       7,    1,  100,    2, 0x0a /* Public */,
       9,    0,  103,    2, 0x0a /* Public */,
      10,    0,  104,    2, 0x0a /* Public */,
      11,    1,  105,    2, 0x0a /* Public */,
      13,    1,  108,    2, 0x0a /* Public */,
      15,    1,  111,    2, 0x0a /* Public */,
      16,    3,  114,    2, 0x0a /* Public */,
      16,    2,  121,    2, 0x2a /* Public | MethodCloned */,
      16,    1,  126,    2, 0x2a /* Public | MethodCloned */,
      19,    2,  129,    2, 0x0a /* Public */,
      19,    1,  134,    2, 0x2a /* Public | MethodCloned */,
      19,    0,  137,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   17,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   20,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Server *_t = static_cast<Server *>(_o);
        switch (_id) {
        case 0: _t->pseudoChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->joinTab(); break;
        case 2: _t->tabJoined(); break;
        case 3: _t->readServer(); break;
        case 4: _t->errorSocket((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->connected(); break;
        case 6: _t->joins(); break;
        case 7: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->join((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->leave((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->ecrire((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->ecrire((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->ecrire((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->updateUsersList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->updateUsersList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->updateUsersList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Server::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::pseudoChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::joinTab)) {
                *result = 1;
            }
        }
        {
            typedef void (Server::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::tabJoined)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Server::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_Server.data,
      qt_meta_data_Server,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata))
        return static_cast<void*>(const_cast< Server*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Server::pseudoChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Server::joinTab()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Server::tabJoined()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE