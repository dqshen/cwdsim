/****************************************************************************
** Meta object code from reading C++ file 'GraphicsView.h'
**
** Created: Fri Jul 26 13:48:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/GraphicsView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicsView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphicsView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x05,
      40,   38,   13,   13, 0x05,
      70,   61,   13,   13, 0x05,
      91,   61,   13,   13, 0x05,
     119,   61,   13,   13, 0x05,
     147,   61,   13,   13, 0x05,
     167,   61,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     189,   13,   13,   13, 0x0a,
     204,   13,   13,   13, 0x0a,
     213,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraphicsView[] = {
    "GraphicsView\0\0zoom\0zoomChanged(float)\0"
    "s\0zoomChanged(QString)\0position\0"
    "mousePicked(QPointF)\0mousePickedMinimum(QPointF)\0"
    "mousePickedMaximum(QPointF)\0"
    "mouseMoved(QPointF)\0mousePainted(QPointF)\0"
    "zoomOriginal()\0zoomIn()\0zoomOut()\0"
};

void GraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraphicsView *_t = static_cast<GraphicsView *>(_o);
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->zoomChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->mousePicked((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 3: _t->mousePickedMinimum((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->mousePickedMaximum((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 5: _t->mouseMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 6: _t->mousePainted((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 7: _t->zoomOriginal(); break;
        case 8: _t->zoomIn(); break;
        case 9: _t->zoomOut(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GraphicsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_GraphicsView,
      qt_meta_data_GraphicsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsView))
        return static_cast<void*>(const_cast< GraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int GraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GraphicsView::zoomChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphicsView::zoomChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphicsView::mousePicked(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphicsView::mousePickedMinimum(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GraphicsView::mousePickedMaximum(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GraphicsView::mouseMoved(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GraphicsView::mousePainted(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
