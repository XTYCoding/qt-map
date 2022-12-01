#include <QJsonArray>
#include <QVector>

class Point {
private:
	double id;
	double longitude;
	double latitude;
	double yaw;
	double roll;
	double pitch;
public:
	double getId();
	double getLongitude();
	double getLatitude();
	double getYaw();
	double getRoll();
	double getPitch();
	void setId();
	void setLongitude();
	void setLatitude();
	void setYaw();
	void setRoll();
	void setPitch();
	QJsonArray getPoint();
	void setPoint(QVector<double>); 
};