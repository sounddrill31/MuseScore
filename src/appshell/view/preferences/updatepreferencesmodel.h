/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-Studio-CLA-applies
 *
 * MuseScore Studio
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore Limited
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef MU_APPSHELL_UPDATEPREFERENCESMODEL_H
#define MU_APPSHELL_UPDATEPREFERENCESMODEL_H

#include <QObject>

#include "async/asyncable.h"
#include "modularity/ioc.h"
#include "update/iupdateconfiguration.h"

namespace mu::appshell {
class UpdatePreferencesModel : public QObject, public muse::Injectable, public muse::async::Asyncable
{
    Q_OBJECT

    Q_PROPERTY(
        bool needCheckForNewAppVersion READ needCheckForNewAppVersion WRITE setNeedCheckForNewAppVersion NOTIFY needCheckForNewAppVersionChanged)

    muse::Inject<muse::update::IUpdateConfiguration> updateConfiguration = { this };

public:
    explicit UpdatePreferencesModel(QObject* parent = nullptr);

    Q_INVOKABLE void load();

    bool needCheckForNewAppVersion() const;

    Q_INVOKABLE bool isAppUpdatable() const;
    Q_INVOKABLE QString museScorePrivacyPolicyUrl() const;

public slots:
    void setNeedCheckForNewAppVersion(bool value);

signals:
    void needCheckForNewAppVersionChanged(bool value);
};
}

#endif // MU_APPSHELL_UPDATEPREFERENCESMODEL_H
