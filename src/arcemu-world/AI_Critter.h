#pragma once

class SERVER_DECL CritterAI : public AIInterface
{
protected:
	uint32 panicTime;
public:
	CritterAI(Unit * self);
	void OnUpdate();
	void HandleEvent(uint32 event, Unit* pUnit, uint32 misc1);
	Unit * getNextTarget();
	void setNextTarget(Unit * target);
#define AIType_isCritter(aii) (aii->getAIType() == AITYPE_CRITTER)
};