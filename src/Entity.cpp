#include "Entity.h"

bool Entity::IsValid() {
	CurLUA->PushUserType(this, Type::Entity);
	CurLUA->GetField(-1, "IsValid");
	CurLUA->Push(-2);
	CurLUA->Call(1, 1);

	bool isvalid = CurLUA->GetBool(-1);

	CurLUA->Pop(2);

	return isvalid;
}

const char* Entity::GetClass() {
	CurLUA->PushUserType(this, Type::Entity);
	CurLUA->GetField(-1, "GetClass");
	CurLUA->Push(-2);
	CurLUA->Call(1, 1);

	const char* Class = CurLUA->GetString(-1);

	CurLUA->Pop(2);

	return Class;
}

bool Entity::IsClass(const char* Class) {
	const char* myClass = GetClass();
	int myLen = strlen(myClass);
	int len = strlen(Class);

	if (Class[len - 1] != '*') 
		if (len != myLen) return false;
	else
		if (len - 1 != myLen) return false;

	for (int i = 0; i < myLen; i++) {
		if (myClass[i] != Class[i]) return false;
	}

	return true;
}

Vector Entity::GetPos() {
	CurLUA->PushUserType(this, Type::Entity);
	CurLUA->GetField(-1,"GetPos");
	CurLUA->Push(-2);
	CurLUA->Call(1, 1);

	Vector pos = CurLUA->GetVector(-1);

	CurLUA->Pop(2);

	return pos;
}

Vector Entity::WorldSpaceCenter() {
	CurLUA->PushUserType(this, Type::Entity);
	CurLUA->GetField(-1, "WorldSpaceCenter");
	CurLUA->Push(-2);
	CurLUA->Call(1, 1);

	Vector pos = CurLUA->GetVector(-1);

	CurLUA->Pop(2);

	return pos;
}

QAngle Entity::GetAngles() {
	CurLUA->PushUserType(this, Type::Entity);
	CurLUA->GetField(-1, "GetAngles");
	CurLUA->Push(-2);
	CurLUA->Call(1, 1);

	QAngle ang = CurLUA->GetAngle(-1);

	CurLUA->Pop(2);

	return ang;
}

float Entity::GetModelScale() {
	CurLUA->PushUserType(this, Type::Entity);
	CurLUA->GetField(-1, "GetModelScale");
	CurLUA->Push(-2);
	CurLUA->Call(1, 1);

	float scale = (float)CurLUA->GetNumber(-1);

	CurLUA->Pop(2);

	return scale;
}