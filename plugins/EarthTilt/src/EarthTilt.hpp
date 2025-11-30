#ifndef EARTHTILT_HPP
#define EARTHTILT_HPP

#include "StelModule.hpp"
#include "StelGui.hpp"

class EarthTilt : public StelModule
{
	Q_OBJECT
public:
	EarthTilt();
	virtual ~EarthTilt();

	// Обязательные методы плагина
	virtual void init();
	virtual void deinit();
	virtual void update(double deltaTime);
	virtual void draw(StelCore* core);
	virtual double getCallOrder(StelModuleActionName actionName) const;

public slots:
	// Слот, который будет вызываться при движении ползунка
	void setObliquity(int angle);

private:
	// Текущий угол наклона
	double currentObliquity;
	
	// Элементы интерфейса (кнопка на панели)
	StelButton* toolbarButton;
};

#endif // EARTHTILT_HPP
