#include "CustomCamera.h"

float UCustomCamera::CustomLerp(float current, float target, float alpha, float crouchingZoom, bool isCrouching) {
	
	if (isCrouching)
		target += crouchingZoom;

	return current + alpha * (target - current);
}
