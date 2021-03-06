/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c PicturePlayerInterface -p picture_player_interface.h:picture_player_interface.cpp picture_player.xml
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef PICTURE_PLAYER_INTERFACE_H_1279181701
#define PICTURE_PLAYER_INTERFACE_H_1279181701

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.amlogic.player.PicturePlayerInterface
 */
class PicturePlayerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.amlogic.player.PicturePlayerInterface"; }

public:
    PicturePlayerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~PicturePlayerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int> ScenceStatus(int id)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(id);
        return asyncCallWithArgumentList(QLatin1String("ScenceStatus"), argumentList);
    }

    inline QDBusPendingReply<> adjustDisplayScene(int degree, int scale_x, int scale_y, int center_x, int center_y, const QString &parameter)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(degree) << qVariantFromValue(scale_x) << qVariantFromValue(scale_y) << qVariantFromValue(center_x) << qVariantFromValue(center_y) << qVariantFromValue(parameter);
        return asyncCallWithArgumentList(QLatin1String("adjustDisplayScene"), argumentList);
    }

    inline QDBusPendingReply<> createPicture(int id, const QString &pictureURL, int x, int y, int w, int h, const QString &parameter)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(id) << qVariantFromValue(pictureURL) << qVariantFromValue(x) << qVariantFromValue(y) << qVariantFromValue(w) << qVariantFromValue(h) << qVariantFromValue(parameter);
        return asyncCallWithArgumentList(QLatin1String("createPicture"), argumentList);
    }

    inline QDBusPendingReply<> createScene(int id, int x, int y, int w, int h)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(id) << qVariantFromValue(x) << qVariantFromValue(y) << qVariantFromValue(w) << qVariantFromValue(h);
        return asyncCallWithArgumentList(QLatin1String("createScene"), argumentList);
    }

    inline QDBusPendingReply<> displayScene(int id, const QString &transitionName, int args)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(id) << qVariantFromValue(transitionName) << qVariantFromValue(args);
        return asyncCallWithArgumentList(QLatin1String("displayScene"), argumentList);
    }

    inline QDBusPendingReply<> setDesktop(int w, int h)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(w) << qVariantFromValue(h);
        return asyncCallWithArgumentList(QLatin1String("setDesktop"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace amlogic {
    namespace player {
      typedef ::PicturePlayerInterface PicturePlayerInterface;
    }
  }
}
#endif
