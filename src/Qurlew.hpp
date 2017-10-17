/*
 * Copyright (C) 2017  Savoir-faire Linux Inc.
 *	Vivien Didelot <vivien.didelot@savoirfairelinux.com>
 *	Gaël Portay <gael.portay@savoirfairelinux.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 */

#pragma once

#include <QObject>

#include <QWebEngineView>

class Qurlew : public QObject
{
	Q_OBJECT

public:
	explicit Qurlew(QObject *parent = 0);

public slots:
	void lineRead(const QString &line);

private:
	QWebEngineView view;

private slots:
	void urlChanged(const QUrl &url);
};
