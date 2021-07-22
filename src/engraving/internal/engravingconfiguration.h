/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
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
#ifndef MU_ENGRAVING_ENGRAVINGCONFIGURATION_H
#define MU_ENGRAVING_ENGRAVINGCONFIGURATION_H

#include "../iengravingconfiguration.h"

namespace mu::engraving {
class EngravingConfiguration : public IEngravingConfiguration
{
public:
    EngravingConfiguration() = default;

    QString defaultStyleFilePath() const override;
    void setDefaultStyleFilePath(const QString& path) override;

    QString partStyleFilePath() const override;
    void setPartStyleFilePath(const QString& path) override;

    QString keysigColor() const override;
    QString defaultColor() const override;
    QString whiteColor() const override;
    QString blackColor() const override;
    QString redColor() const override;
    QString invisibleColor() const override;
    QString lassoColor() const override;
    QString figuredBassColor() const override;
    QString selectionColor() const override;
    QString warningColor() const override;
    QString warningSelectedColor() const override;
    QString criticalColor() const override;
    QString criticalSelectedColor() const override;
    QString editColor() const override;
    QString harmonyColor() const override;
    QString textBaseFrameColor() const override;
    QString textBaseBgColor() const override;
    QString shadowNoteColor() const override;
};
}

#endif // MU_ENGRAVING_ENGRAVINGCONFIGURATION_H
