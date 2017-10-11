#pragma once

#include <minecraft/VersionFile.h>
#include <minecraft/ComponentList.h>
#include <minecraft/Library.h>
#include <QJsonDocument>

class OneSixVersionFormat
{
public:
	// version files / profile patches
	static VersionFilePtr versionFileFromJson(const QJsonDocument &doc, const QString &filename, const bool requireOrder);
	static QJsonDocument versionFileToJson(const VersionFilePtr &patch, bool saveOrder);

	// libraries
	static LibraryPtr libraryFromJson(const QJsonObject &libObj, const QString &filename);
	static QJsonObject libraryToJson(Library *library);

	// DEPRECATED: old 'plus' jar mods generated by the application
	static LibraryPtr plusJarModFromJson(const QJsonObject &libObj, const QString &filename, const QString &originalName);

	// new jar mods derived from libraries
	static LibraryPtr jarModFromJson(const QJsonObject &libObj, const QString &filename);
	static QJsonObject jarModtoJson(Library * jarmod);

	// mods, also derived from libraries
	static LibraryPtr modFromJson(const QJsonObject &libObj, const QString &filename);
	static QJsonObject modtoJson(Library * jarmod);
};
