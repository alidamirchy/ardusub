#include "AP_LeakDetector_Backend.h"

#include "../AP_LeakDetector/AP_LeakDetector.h"

AP_LeakDetector_Backend::AP_LeakDetector_Backend(AP_LeakDetector &_leak_detector, AP_LeakDetector::LeakDetector_State &_state) :
	leak_detector(_leak_detector),
	state(_state)
{

}
