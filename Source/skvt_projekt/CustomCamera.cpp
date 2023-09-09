// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomCamera.h"

float UCustomCamera::CustomLerp(float current, float target, float alpha, float crouchingZoom, bool isCrouching) {
	
	target = isCrouching ? target + crouchingZoom : target;

	return current + alpha * (target - current);
}
