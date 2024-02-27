#include "Entity.h"


// ENTITY CLASS DEFINITIONS
// // copy constructor
Entity::Entity(const Entity& OriginalEntity) :
	entityName(OriginalEntity.entityName), EntityRace(OriginalEntity.EntityRace), EntityLearnedAttacks(OriginalEntity.EntityLearnedAttacks),
	maxHealthPoints(OriginalEntity.maxHealthPoints), healthPoints(OriginalEntity.healthPoints),
	physicalStrength(OriginalEntity.physicalStrength), magicalStrength(OriginalEntity.magicalStrength),
	physicalDefense(OriginalEntity.physicalDefense), magicalDefense(OriginalEntity.magicalDefense)
{ };
//default constructor
Entity::Entity() // determine default values /!\ NOT NECESSARY?
{ };
// parameterized constructor
Entity::Entity(string aEntityName, Race aEntityRace, LearnedAttacks aEntityLearnedAttacks,
	unsigned int aMaxHealthPoints, unsigned int aHealthPoints,
	double aPhysicalStrength, double aMagicalStrength,
	double aPhysicalDefense, double aMagicalDefense) :
	entityName(aEntityName), EntityRace(aEntityRace), EntityLearnedAttacks(aEntityLearnedAttacks),
	maxHealthPoints(aMaxHealthPoints), healthPoints(aHealthPoints),
	physicalStrength(aPhysicalStrength), magicalStrength(aMagicalStrength),
	physicalDefense(aPhysicalDefense), magicalDefense(aMagicalDefense)
{ };

// GETTERS & SETTERS
string Entity::getName() const { return (*this).entityName; }
void Entity::setName(string aNewEntityName) { (*this).entityName = aNewEntityName; }

Race Entity::getEntityRace() const { return (*this).EntityRace; }
void Entity::setEntityRace(Race aNewEntityRace) { (*this).EntityRace = aNewEntityRace; }

LearnedAttacks Entity::getLearnedAttacks() const { return (*this).EntityLearnedAttacks; }
void Entity::setLearnedAttacks(LearnedAttacks aNewLearnedAttacks) { (*this).EntityLearnedAttacks = aNewLearnedAttacks; }







