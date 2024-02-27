#include "Entity.h"


// ENTITY CLASS DEFINITIONS
// // copy constructor
Entity::Entity(const Entity& aOriginalEntity) :
	entityName(aOriginalEntity.entityName), EntityRace(aOriginalEntity.EntityRace), EntityLearnedAttacks(aOriginalEntity.EntityLearnedAttacks),
	entityMaxHealthPoints(aOriginalEntity.entityMaxHealthPoints), entityHealthPoints(aOriginalEntity.entityHealthPoints),
	entityPhysicalStrength(aOriginalEntity.entityPhysicalStrength), entityMagicalStrength(aOriginalEntity.entityMagicalStrength),
	entityPhysicalDefense(aOriginalEntity.entityPhysicalDefense), entityMagicalDefense(aOriginalEntity.entityMagicalDefense)
{ };
//default constructor
Entity::Entity() // determine default values /!\ NOT NECESSARY?
{
	(*this).entityName = "defaultEntityName";
	(*this).EntityRace = Race();
	(*this).EntityLearnedAttacks = LearnedAttacks();
};
// parameterized constructor
Entity::Entity(string aEntityName, Race aEntityRace, LearnedAttacks aEntityLearnedAttacks,
	unsigned int aEntityMaxHealthPoints, unsigned int aEntityHealthPoints,
	double aEntityPhysicalStrength, double aEntityMagicalStrength,
	double aEntityPhysicalDefense, double aEntityMagicalDefense) :
	entityName(aEntityName), EntityRace(aEntityRace), EntityLearnedAttacks(aEntityLearnedAttacks),
	entityMaxHealthPoints(aEntityMaxHealthPoints), entityHealthPoints(aEntityHealthPoints),
	entityPhysicalStrength(aEntityPhysicalStrength), entityMagicalStrength(aEntityMagicalStrength),
	entityPhysicalDefense(aEntityPhysicalDefense), entityMagicalDefense(aEntityMagicalDefense)
{ };

// GETTERS & SETTERS
string Entity::getEntityName() const { return (*this).entityName; }
void Entity::setEntityName(string aNewEntityName) { (*this).entityName = aNewEntityName; }

Race Entity::getEntityRace() const { return (*this).EntityRace; }
void Entity::setEntityRace(Race aNewEntityRace) { (*this).EntityRace = aNewEntityRace; }

LearnedAttacks Entity::getEntityLearnedAttacks() const { return (*this).EntityLearnedAttacks; }
void Entity::setEntityLearnedAttacks(LearnedAttacks aNewLearnedAttacks) { (*this).EntityLearnedAttacks = aNewLearnedAttacks; }

unsigned int Entity::getEntityMaxHealthPoints() const { return (*this).entityMaxHealthPoints; }
void Entity::setEntityMaxHealthPoints(unsigned int aNewEntityMaxHealthPoints) { (*this).entityMaxHealthPoints = aNewEntityMaxHealthPoints; }

unsigned int Entity::getEntityHealthPoints() const { return (*this).entityHealthPoints; }
void Entity::setEntityHealthPoints(unsigned int aNewEntityHealthPoints) { (*this).entityHealthPoints = aNewEntityHealthPoints; }

double Entity::getEntityPhysicalStrength() const { return (*this).entityPhysicalStrength; }
void Entity::setEntityPhysicalStrength(double aNewEntityPhysicalStrength) { (*this).entityPhysicalStrength = aNewEntityPhysicalStrength; }

double Entity::getEntityMagicalStrength() const { return (*this).entityMagicalStrength; }
void Entity::setEntityMagicalStrength(double aNewEntityMagicalStrength) { (*this).entityMagicalStrength = aNewEntityMagicalStrength; }

double Entity::getEntityPhysicalDefense() const { return (*this).entityPhysicalDefense; }
void Entity::setEntityPhysicalDefense(double aNewEntityPhysicalDefense) { (*this).entityPhysicalDefense = aNewEntityPhysicalDefense; }

double Entity::getEntityMagicalDefense() const { return (*this).entityMagicalDefense; }
void Entity::setEntityMagicalDefense(double aNewEntityMagicalDefense) { (*this).entityMagicalDefense = aNewEntityMagicalDefense; }







