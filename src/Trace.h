#ifndef TRACE_H
#define TRACE_H

#include "Entity.h"

struct TraceResult {
	float fraction = 0.0f;
	Entity* Entity = nullptr;
	bool startsolid = false;
	bool hitworld = false;
};

class TraceFilter {
	Entity** ents;
	int entcount = 0;
public:
	TraceFilter(Entity* ent);
	~TraceFilter();

	TraceFilter& operator+(Entity* ent);

	void PushFilter();
};

void TraceHull(const Vector& start,const Vector& endpos,const Vector& min,const Vector& max, const int mask,TraceFilter& filter,TraceResult& result);

#endif