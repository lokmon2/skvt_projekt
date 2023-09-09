// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomCamera.h"

float UCustomCamera::CustomLerp(float current, float target, float alpha, float crouchingZoom, bool isCrouching) {
	
	if (isCrouching)
		target = target + crouchingZoom;

	return current + alpha * (target - current);
}
