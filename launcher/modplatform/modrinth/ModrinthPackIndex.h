// SPDX-License-Identifier: GPL-3.0-only
/*
 *  PolyMC - Minecraft Launcher
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "modplatform/ModIndex.h"

#include "BaseInstance.h"
#include <QNetworkAccessManager>

namespace Modrinth {

void loadIndexedPack(ModPlatform::IndexedPack& m, QJsonObject& obj);
void loadExtraPackData(ModPlatform::IndexedPack& m, QJsonObject& obj);
void loadIndexedPackVersions(ModPlatform::IndexedPack& pack,
                             QJsonArray& arr,
                             const shared_qobject_ptr<QNetworkAccessManager>& network,
                             BaseInstance* inst);
auto loadIndexedPackVersion(QJsonObject& obj) -> ModPlatform::IndexedVersion;

}  // namespace Modrinth
