#include "StartDash.h"

StartDash::StartDash() {}

StartDash::~StartDash() {}


void StartDash::tailOperation() {

	auto* tail = RyujiEv3Engine::GetTailMotor();

	//しっぽを上げる
	tail->setCounts(0, 50);
}

//int StartDash::gyroOffsetSetting() {}
