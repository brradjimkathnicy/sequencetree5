/****************************************************************************
** Meta object code from reading C++ file 'motionphantoms1.h'
**
** Created: Wed May 22 14:49:17 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "motionphantoms1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'motionphantoms1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MotionPhantoms1[] = {

 // content:
       5,       // revision
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

static const char qt_meta_stringdata_MotionPhantoms1[] = {
    "MotionPhantoms1\0"
};

const QMetaObject MotionPhantoms1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MotionPhantoms1,
      qt_meta_data_MotionPhantoms1, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MotionPhantoms1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MotionPhantoms1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MotionPhantoms1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MotionPhantoms1))
        return static_cast<void*>(const_cast< MotionPhantoms1*>(this));
    if (!strcmp(_clname, "VSPhantomPlugin"))
        return static_cast< VSPhantomPlugin*>(const_cast< MotionPhantoms1*>(this));
    if (!strcmp(_clname, "VSPhantomPlugin/3.23.2009"))
        return static_cast< VSPhantomPlugin*>(const_cast< MotionPhantoms1*>(this));
    return QObject::qt_metacast(_clname);
}

int MotionPhantoms1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_RotatingPhantom[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      23,   16, 0x06095103,

       0        // eod
};

static const char qt_meta_stringdata_RotatingPhantom[] = {
    "RotatingPhantom\0double\0rotationFrequency\0"
};

const QMetaObject RotatingPhantom::staticMetaObject = {
    { &VSPhantom::staticMetaObject, qt_meta_stringdata_RotatingPhantom,
      qt_meta_data_RotatingPhantom, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RotatingPhantom::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RotatingPhantom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RotatingPhantom::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RotatingPhantom))
        return static_cast<void*>(const_cast< RotatingPhantom*>(this));
    return VSPhantom::qt_metacast(_clname);
}

int RotatingPhantom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VSPhantom::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = rotationFrequency(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRotationFrequency(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_RotatingCube[] = {

 // content:
       5,       // revision
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

static const char qt_meta_stringdata_RotatingCube[] = {
    "RotatingCube\0"
};

const QMetaObject RotatingCube::staticMetaObject = {
    { &RotatingPhantom::staticMetaObject, qt_meta_stringdata_RotatingCube,
      qt_meta_data_RotatingCube, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RotatingCube::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RotatingCube::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RotatingCube::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RotatingCube))
        return static_cast<void*>(const_cast< RotatingCube*>(this));
    return RotatingPhantom::qt_metacast(_clname);
}

int RotatingCube::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RotatingPhantom::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_RotatingCubeWithHole[] = {

 // content:
       5,       // revision
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

static const char qt_meta_stringdata_RotatingCubeWithHole[] = {
    "RotatingCubeWithHole\0"
};

const QMetaObject RotatingCubeWithHole::staticMetaObject = {
    { &RotatingPhantom::staticMetaObject, qt_meta_stringdata_RotatingCubeWithHole,
      qt_meta_data_RotatingCubeWithHole, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RotatingCubeWithHole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RotatingCubeWithHole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RotatingCubeWithHole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RotatingCubeWithHole))
        return static_cast<void*>(const_cast< RotatingCubeWithHole*>(this));
    return RotatingPhantom::qt_metacast(_clname);
}

int RotatingCubeWithHole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RotatingPhantom::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_BeatingHeart[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      20,   13, 0x06095103,
      27,   13, 0x06095103,

       0        // eod
};

static const char qt_meta_stringdata_BeatingHeart[] = {
    "BeatingHeart\0double\0period\0amplitude\0"
};

const QMetaObject BeatingHeart::staticMetaObject = {
    { &VSPhantom::staticMetaObject, qt_meta_stringdata_BeatingHeart,
      qt_meta_data_BeatingHeart, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BeatingHeart::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BeatingHeart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BeatingHeart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BeatingHeart))
        return static_cast<void*>(const_cast< BeatingHeart*>(this));
    return VSPhantom::qt_metacast(_clname);
}

int BeatingHeart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VSPhantom::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = period(); break;
        case 1: *reinterpret_cast< double*>(_v) = amplitude(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPeriod(*reinterpret_cast< double*>(_v)); break;
        case 1: setAmplitude(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
