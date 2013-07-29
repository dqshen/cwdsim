/****************************************************************************
** Meta object code from reading C++ file 'CrowdScene.h'
**
** Created: Fri Jul 26 13:48:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/CrowdScene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CrowdScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CrowdScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,
      58,   49,   11,   11, 0x05,
      92,   86,   11,   11, 0x05,
     123,   86,   11,   11, 0x05,
     159,   86,   11,   11, 0x05,
     207,  195,   11,   11, 0x05,
     250,  248,   11,   11, 0x05,
     280,  248,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     331,  316,   11,   11, 0x0a,
     358,  354,   11,   11, 0x0a,
     386,  382,   11,   11, 0x0a,
     416,   11,  410,   11, 0x0a,
     435,   11,  410,   11, 0x0a,
     460,  454,   11,   11, 0x0a,
     505,  454,   11,   11, 0x0a,
     560,  454,   11,   11, 0x0a,
     613,  454,   11,   11, 0x0a,
     654,  648,   11,   11, 0x0a,
     675,  648,   11,   11, 0x0a,
     703,  648,   11,   11, 0x0a,
     730,  648,   11,   11, 0x0a,
     759,  648,   11,   11, 0x0a,
     807,  791,   11,   11, 0x0a,
     858,  836,   11,   11, 0x0a,
     898,  889,   11,   11, 0x0a,
     924,  889,  410,   11, 0x0a,
     958,  889,   11,   11, 0x0a,
     991,  889,   11,   11, 0x0a,
    1035, 1024,   11,   11, 0x0a,
    1071, 1066,   11,   11, 0x0a,
    1107, 1096,   11,   11, 0x0a,
    1146, 1138,   11,   11, 0x0a,
    1171, 1138,   11,   11, 0x0a,
    1202, 1196,   11,   11, 0x0a,
    1225,   11,  410,   11, 0x0a,
    1245,   11,  410,   11, 0x0a,
    1271, 1265,   11,   11, 0x0a,
    1302,   11, 1295,   11, 0x0a,
    1327, 1320,   11,   11, 0x0a,
    1369, 1359,   11,   11, 0x0a,
    1404,  889,   11,   11, 0x0a,
    1444, 1435,   11,   11, 0x0a,
    1464,  248,   11,   11, 0x08,
    1497, 1480,   11,   11, 0x08,
    1539, 1523,   11,   11, 0x08,
    1578, 1568,   11,   11, 0x08,
    1608, 1597,   11,   11, 0x08,
    1653, 1641,   11,   11, 0x08,
    1707, 1681,   11,   11, 0x08,
    1742,   11,   11,   11, 0x08,
    1756,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CrowdScene[] = {
    "CrowdScene\0\0scaleMin\0colorScaleMinChanged(float)\0"
    "scaleMax\0colorScaleMaxChanged(float)\0"
    "value\0mousePickValueChanged(QString)\0"
    "mousePickMinimumValueChanged(float)\0"
    "mousePickMaximumValueChanged(float)\0"
    "agentCounts\0agentCountsChanged(std::vector<cl_uint>)\0"
    "s\0profilingInfoChanged(QString)\0"
    "kernelProfilingInfoChanged(QString)\0"
    "outerLoopCount\0setOuterLoopCount(int)\0"
    "min\0setColorScaleMin(float)\0max\0"
    "setColorScaleMax(float)\0float\0"
    "getColorScaleMin()\0getColorScaleMax()\0"
    "state\0setFieldRenderState(FieldRenderState::State)\0"
    "setAgentGroupRenderState(AgentGroupRenderState::State)\0"
    "setDirectionRenderState(DirectionRenderState::State)\0"
    "setUpdateState(UpdateState::State)\0"
    "alpha\0setMapAlpha(GLfloat)\0"
    "setWorkGroupsAlpha(GLfloat)\0"
    "setWorkItemsAlpha(GLfloat)\0"
    "setGroupStatesAlpha(GLfloat)\0"
    "setGradientArrowsAlpha(GLfloat)\0"
    "isInterpolating\0setGradientFilterState(bool)\0"
    "isResolvingCollisions\0"
    "setIsResolvingCollisions(bool)\0position\0"
    "performMousePick(QPointF)\0"
    "performMousePickExtremum(QPointF)\0"
    "performMousePickMinimum(QPointF)\0"
    "performMousePickMaximum(QPointF)\0"
    "pathLength\0setCostWeightPathLength(float)\0"
    "time\0setCostWeightTime(float)\0discomfort\0"
    "setCostWeightDiscomfort(float)\0density\0"
    "setMinimumDensity(float)\0"
    "setMaximumDensity(float)\0speed\0"
    "setMaximumSpeed(float)\0getMinimumDensity()\0"
    "getMaximumDensity()\0count\0"
    "setInnerLoopCount(uint)\0size_t\0"
    "getViewportSize()\0radius\0"
    "setDiscomfortBrushRadius(float)\0"
    "intensity\0setDiscomfortBrushIntensity(float)\0"
    "setMousePaintPosition(QPointF)\0exitMode\0"
    "setExitMode(cl_int)\0setScale(float)\0"
    "isDrawingSprites\0setIsDrawingSprites(bool)\0"
    "isDrawingAgents\0setIsDrawingSplatAreas(bool)\0"
    "isPlaying\0setIsPlaying(bool)\0isPrinting\0"
    "setIsPrintingProfilingInfo(bool)\0"
    "isProfiling\0setIsProfilingDetails(bool)\0"
    "isBreakingAfterSolverStep\0"
    "setIsBreakingAfterSolverStep(bool)\0"
    "performStep()\0performRewind()\0"
};

void CrowdScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CrowdScene *_t = static_cast<CrowdScene *>(_o);
        switch (_id) {
        case 0: _t->colorScaleMinChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->colorScaleMaxChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->mousePickValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->mousePickMinimumValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->mousePickMaximumValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->agentCountsChanged((*reinterpret_cast< std::vector<cl_uint>(*)>(_a[1]))); break;
        case 6: _t->profilingInfoChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->kernelProfilingInfoChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setOuterLoopCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setColorScaleMin((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->setColorScaleMax((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: { float _r = _t->getColorScaleMin();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 12: { float _r = _t->getColorScaleMax();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 13: _t->setFieldRenderState((*reinterpret_cast< FieldRenderState::State(*)>(_a[1]))); break;
        case 14: _t->setAgentGroupRenderState((*reinterpret_cast< AgentGroupRenderState::State(*)>(_a[1]))); break;
        case 15: _t->setDirectionRenderState((*reinterpret_cast< DirectionRenderState::State(*)>(_a[1]))); break;
        case 16: _t->setUpdateState((*reinterpret_cast< UpdateState::State(*)>(_a[1]))); break;
        case 17: _t->setMapAlpha((*reinterpret_cast< GLfloat(*)>(_a[1]))); break;
        case 18: _t->setWorkGroupsAlpha((*reinterpret_cast< GLfloat(*)>(_a[1]))); break;
        case 19: _t->setWorkItemsAlpha((*reinterpret_cast< GLfloat(*)>(_a[1]))); break;
        case 20: _t->setGroupStatesAlpha((*reinterpret_cast< GLfloat(*)>(_a[1]))); break;
        case 21: _t->setGradientArrowsAlpha((*reinterpret_cast< GLfloat(*)>(_a[1]))); break;
        case 22: _t->setGradientFilterState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setIsResolvingCollisions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->performMousePick((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 25: { float _r = _t->performMousePickExtremum((*reinterpret_cast< QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 26: _t->performMousePickMinimum((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 27: _t->performMousePickMaximum((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 28: _t->setCostWeightPathLength((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 29: _t->setCostWeightTime((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->setCostWeightDiscomfort((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 31: _t->setMinimumDensity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 32: _t->setMaximumDensity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->setMaximumSpeed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 34: { float _r = _t->getMinimumDensity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 35: { float _r = _t->getMaximumDensity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 36: _t->setInnerLoopCount((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 37: { size_t _r = _t->getViewportSize();
            if (_a[0]) *reinterpret_cast< size_t*>(_a[0]) = _r; }  break;
        case 38: _t->setDiscomfortBrushRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 39: _t->setDiscomfortBrushIntensity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 40: _t->setMousePaintPosition((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 41: _t->setExitMode((*reinterpret_cast< cl_int(*)>(_a[1]))); break;
        case 42: _t->setScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 43: _t->setIsDrawingSprites((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->setIsDrawingSplatAreas((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->setIsPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setIsPrintingProfilingInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->setIsProfilingDetails((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->setIsBreakingAfterSolverStep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->performStep(); break;
        case 50: _t->performRewind(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CrowdScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CrowdScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_CrowdScene,
      qt_meta_data_CrowdScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CrowdScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CrowdScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CrowdScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CrowdScene))
        return static_cast<void*>(const_cast< CrowdScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int CrowdScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void CrowdScene::colorScaleMinChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CrowdScene::colorScaleMaxChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CrowdScene::mousePickValueChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CrowdScene::mousePickMinimumValueChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CrowdScene::mousePickMaximumValueChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CrowdScene::agentCountsChanged(std::vector<cl_uint> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CrowdScene::profilingInfoChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CrowdScene::kernelProfilingInfoChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
