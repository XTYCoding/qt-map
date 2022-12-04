#include "point.h"

double Point::getId() {
	return id;
}
double Point::getLongitude() {
	return longitude;
}
double Point::getLatitude() {
	return latitude;
}
double Point::getYaw() {
	return yaw;
}
double Point::getRoll() {
	return roll;
}
double Point::getPitch() {
	return pitch ;
}

QString Point::getPointInfo() {
	QJsonArray info_json;
	QJsonDocument info_document;
	QByteArray info_byteArray;
	info_json.append(id);
	info_json.append(longitude);
	info_json.append(latitude);
	info_json.append(yaw);
	info_json.append(roll);
	info_json.append(pitch);
	info_document.setArray(info_json);
	info_byteArray = info_document.toJson(QJsonDocument::Compact);
	QString infoJson(info_byteArray);
	return infoJson;
}

void Point::setPoint(QVector<double> infos) {
	id = infos[0];
	longitude = infos[1];
	latitude = infos[2];
	yaw = infos[3];
	roll = infos[4];
	pitch = infos[5];
}