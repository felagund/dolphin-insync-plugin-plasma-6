/****************************************************************************
** Meta object code from reading C++ file 'overlayiconinsyncplugin.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../overlayiconinsyncplugin.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlayiconinsyncplugin.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOverlayIconInsyncPluginENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOverlayIconInsyncPluginENDCLASS = QtMocHelpers::stringData(
    "OverlayIconInsyncPlugin"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOverlayIconInsyncPluginENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject OverlayIconInsyncPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<KOverlayIconPlugin::staticMetaObject>(),
    qt_meta_stringdata_CLASSOverlayIconInsyncPluginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOverlayIconInsyncPluginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOverlayIconInsyncPluginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OverlayIconInsyncPlugin, std::true_type>
    >,
    nullptr
} };

void OverlayIconInsyncPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OverlayIconInsyncPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverlayIconInsyncPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOverlayIconInsyncPluginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return KOverlayIconPlugin::qt_metacast(_clname);
}

int OverlayIconInsyncPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KOverlayIconPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_OverlayIconInsyncPlugin[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1c,  'c',  'o',  'm',  '.',  'i', 
    'n',  's',  'y',  'n',  'c',  '.',  'o',  'v', 
    'e',  'r',  'l',  'a',  'y',  'i',  'c',  'o', 
    'n',  'p',  'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x77,  'O',  'v',  'e',  'r',  'l',  'a', 
    'y',  'I',  'c',  'o',  'n',  'I',  'n',  's', 
    'y',  'n',  'c',  'P',  'l',  'u',  'g',  'i', 
    'n', 
    // "MetaData"
    0x04,  0xa1,  0x67,  'K',  'P',  'l',  'u',  'g', 
    'i',  'n',  0xa2,  0x6b,  'D',  'e',  's',  'c', 
    'r',  'i',  'p',  't',  'i',  'o',  'n',  0x78, 
    0x18,  'O',  'v',  'e',  'r',  'l',  'a',  'y', 
    ' ',  'i',  'c',  'o',  'n',  's',  ' ',  'f', 
    'o',  'r',  ' ',  'I',  'n',  's',  'y',  'n', 
    'c',  0x6c,  'S',  'e',  'r',  'v',  'i',  'c', 
    'e',  'T',  'y',  'p',  'e',  's',  0x81,  0x72, 
    'K',  'O',  'v',  'e',  'r',  'l',  'a',  'y', 
    'I',  'c',  'o',  'n',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(OverlayIconInsyncPlugin, OverlayIconInsyncPlugin, qt_pluginMetaDataV2_OverlayIconInsyncPlugin)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_OverlayIconInsyncPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1c,  'c',  'o',  'm',  '.',  'i', 
    'n',  's',  'y',  'n',  'c',  '.',  'o',  'v', 
    'e',  'r',  'l',  'a',  'y',  'i',  'c',  'o', 
    'n',  'p',  'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x77,  'O',  'v',  'e',  'r',  'l',  'a', 
    'y',  'I',  'c',  'o',  'n',  'I',  'n',  's', 
    'y',  'n',  'c',  'P',  'l',  'u',  'g',  'i', 
    'n', 
    // "MetaData"
    0x04,  0xa1,  0x67,  'K',  'P',  'l',  'u',  'g', 
    'i',  'n',  0xa2,  0x6b,  'D',  'e',  's',  'c', 
    'r',  'i',  'p',  't',  'i',  'o',  'n',  0x78, 
    0x18,  'O',  'v',  'e',  'r',  'l',  'a',  'y', 
    ' ',  'i',  'c',  'o',  'n',  's',  ' ',  'f', 
    'o',  'r',  ' ',  'I',  'n',  's',  'y',  'n', 
    'c',  0x6c,  'S',  'e',  'r',  'v',  'i',  'c', 
    'e',  'T',  'y',  'p',  'e',  's',  0x81,  0x72, 
    'K',  'O',  'v',  'e',  'r',  'l',  'a',  'y', 
    'I',  'c',  'o',  'n',  'P',  'l',  'u',  'g', 
    'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(OverlayIconInsyncPlugin, OverlayIconInsyncPlugin)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
