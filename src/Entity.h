#ifndef ENTITY_H
#define ENTITY_H

#include "Shared.h"

class Entity {
public:
	bool IsValid();

	const char* GetClass();

	bool IsClass(const char* Class);

	Vector GetPos();

	Vector WorldSpaceCenter();

	QAngle GetAngles();

	float GetModelScale();
};

#endif
