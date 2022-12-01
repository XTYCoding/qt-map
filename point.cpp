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

QJsonArray Point::getPoint() {
	QJsonArray info_json;
	info_json.append(id);
	info_json.append(longitude);
	info_json.append(latitude);
	info_json.append(yaw);
	info_json.append(roll);
	info_json.append(pitch);
}

void Point::setPoint(QVector<double> infos) {
	id = infos[0];
	longitude = infos[1];
	latitude = infos[2];
	yaw = infos[3];
	roll = infos[4];
	pitch = infos[5];
}