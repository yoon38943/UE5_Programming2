#pragma once

#include "DrawDebugHelpers.h"

#define HDRAW_SPHERE(Location) \
if(GetWorld()) \
	DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true);

#define HDRAW_SPHERE_COLOR(Location, Color) \
if(GetWorld()) \
	DrawDebugSphere(GetWorld(), Location, 8.f, 12, Color, false, 5.f);

#define HDRAW_SPHERE_SingleFrame(Location) \
if (GetWorld()) \
	DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, false, -1.f);

#define HDRAW_LINE(StartLocation, EndLocation) \
if(GetWorld()) \
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);

#define HDRAW_LINE_SingleFrame(StartLocation, EndLocation) \
if (GetWorld()) \
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, -1.f, 0, 1.f);

#define HDRAW_POINT(Location) \
if(GetWorld()) \
	DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true);

#define HDRAW_POINT_SingleFrame(Location) \
if (GetWorld()) \
	DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, false, -1.f);

#define HDRAW_VECTOR(StartLocation, EndLocation) \
if(GetWorld()) \
{ \
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f); \
	DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, true); \
}

#define HDRAW_VECTOR_SingleFrame(StartLocation, EndLocation) \
if (GetWorld()) \
{ \
	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, -1.f, 0, 1.f); \
	DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, false, -1.f); \
}