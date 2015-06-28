#include "stdafx.h"
#include "Input.h"

static std::vector<FoneOSPoint> _points;
void Input::Init()
{

}

void Input::SendTouch(FoneOSPoint point)
{
	_points.push_back(point);
}

FoneOSPoint Input::GetTouch()
{
	if (_points.size() == 0)
	{
		return FoneOSPoint();
	}
	FoneOSPoint ret = _points[0];
	_points.erase(_points.begin());
	return ret;
}