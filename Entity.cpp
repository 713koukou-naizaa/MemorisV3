#include "Entity.h"

using std::cout;
using std::endl;
using std::cin;

// ENTITY CLASS DEFINITIONS
// copy constructor
Entity::Entity(const Entity& aOriginalEntity) :
	entityName(aOriginalEntity.entityName), EntityRace(aOriginalEntity.EntityRace),
	EntityLearnedAttacks(aOriginalEntity.EntityLearnedAttacks),
	entityMaxHealthPoints(aOriginalEntity.entityMaxHealthPoints), entityHealthPoints(aOriginalEntity.entityHealthPoints),
	entitySpeed(aOriginalEntity.entitySpeed),
	entityPhysicalStrength(aOriginalEntity.entityPhysicalStrength), entityMagicalStrength(aOriginalEntity.entityMagicalStrength),
	entityPhysicalDefense(aOriginalEntity.entityPhysicalDefense), entityMagicalDefense(aOriginalEntity.entityMagicalDefense)
{ };
// default constructor
Entity::Entity()
{
	this->entityName = "defaultEntityName";
	this->EntityRace = Race();
	this->EntityLearnedAttacks = LearnedAttacks();
	this->entityMaxHealthPoints = 1;
	this->entityHealthPoints = entityMaxHealthPoints;
	this->entitySpeed = 1;
	this->entityPhysicalStrength = 1;
	this->entityMagicalStrength = 1;
	this->entityPhysicalDefense = 1;
	this->entityMagicalDefense = 1;
};
// parameterized constructor
Entity::Entity(string aEntityName, Race aEntityRace,
	LearnedAttacks aEntityLearnedAttacks) :
	entityName(aEntityName), EntityRace(aEntityRace),
	EntityLearnedAttacks(aEntityLearnedAttacks),
	entityMaxHealthPoints(aEntityRace.getRaceBaseHealthPoints()), entityHealthPoints(entityMaxHealthPoints),
	entitySpeed(aEntityRace.getRaceBaseSpeed()),
	entityPhysicalStrength(aEntityRace.getRaceBasePhysicalStrength()), entityMagicalStrength(aEntityRace.getRaceBaseMagicalStrength()),
	entityPhysicalDefense(aEntityRace.getRaceBasePhysicalDefense()), entityMagicalDefense(aEntityRace.getRaceBaseMagicalDefense())
{ };

// GETTERS & SETTERS
string Entity::getEntityName() const { return this->entityName; }
void Entity::setEntityName(string aNewEntityName) { this->entityName = aNewEntityName; }

Race Entity::getEntityRace() const { return this->EntityRace; }
void Entity::setEntityRace(Race aNewEntityRace) { this->EntityRace = aNewEntityRace; }

LearnedAttacks Entity::getEntityLearnedAttacks() const { return this->EntityLearnedAttacks; }
void Entity::setEntityLearnedAttacks(LearnedAttacks aNewLearnedAttacks) { this->EntityLearnedAttacks = aNewLearnedAttacks; }

unsigned int Entity::getEntityMaxHealthPoints() const { return this->entityMaxHealthPoints; }
void Entity::setEntityMaxHealthPoints(unsigned int aNewEntityMaxHealthPoints) { this->entityMaxHealthPoints = aNewEntityMaxHealthPoints; }

unsigned int Entity::getEntityHealthPoints() const { return this->entityHealthPoints; }
void Entity::setEntityHealthPoints(unsigned int aNewEntityHealthPoints) { this->entityHealthPoints = aNewEntityHealthPoints; }

unsigned int Entity::getEntitySpeed() const { return this->entitySpeed; }
void Entity::setEntitySpeed(unsigned int aNewEntitySpeed) { this->entitySpeed = aNewEntitySpeed; }

double Entity::getEntityPhysicalStrength() const { return this->entityPhysicalStrength; }
void Entity::setEntityPhysicalStrength(double aNewEntityPhysicalStrength) { this->entityPhysicalStrength = aNewEntityPhysicalStrength; }

double Entity::getEntityMagicalStrength() const { return this->entityMagicalStrength; }
void Entity::setEntityMagicalStrength(double aNewEntityMagicalStrength) { this->entityMagicalStrength = aNewEntityMagicalStrength; }

double Entity::getEntityPhysicalDefense() const { return this->entityPhysicalDefense; }
void Entity::setEntityPhysicalDefense(double aNewEntityPhysicalDefense) { this->entityPhysicalDefense = aNewEntityPhysicalDefense; }

double Entity::getEntityMagicalDefense() const { return this->entityMagicalDefense; }
void Entity::setEntityMagicalDefense(double aNewEntityMagicalDefense) { this->entityMagicalDefense = aNewEntityMagicalDefense; }

// ENTITY FUNCTIONS

void Entity::displayEntityStats() const
{
	cout << "Name : " << this->getEntityName() << endl;
	cout << "Race : " << this->getEntityRace().getRaceName() << endl;
	cout << "Max health points : " << this->getEntityMaxHealthPoints() << endl;
	cout << "Health points : " << this->getEntityHealthPoints() << endl;
	cout << "Speed : " << this->getEntitySpeed() << endl;
	cout << "Physical strength : " << this->getEntityPhysicalStrength() << endl;
	cout << "Magical strength : " << this->getEntityMagicalStrength() << endl;
	cout << "Physical defense : " << this->getEntityPhysicalDefense() << endl;
	cout << "Magical defense : " << this->getEntityMagicalDefense() << endl;
}

void Entity::attackChoice(Entity& aEnnemy)
{
	unsigned short int attackChoice;
	cout << "Please choose your attack : " << endl;
	this->getEntityLearnedAttacks().displayLearnedAttacks();
	cin >> attackChoice;
	Attack UsedAttack(this->getEntityLearnedAttacks().getLearnedAttacksVector()[attackChoice - 1]);
	switch (UsedAttack.getAttackIsHealing())
	{
	case true:
		cout << "DEBUG attackIsHealing is true" << endl;
		this->healHealthPoints(UsedAttack);
		break;
	case false:
		cout << "DEBUG attackIsHealing is false" << endl;
		this->dealDamage(aEnnemy, UsedAttack);
		break;
	}
}

void Entity::inventoryChoice(Entity& aEnnemy)
{

}

void Entity::runChoice(Entity& aEnnemy)
{

}

void Entity::dealDamage(Entity& aDamageReceiver, Attack& aUsedAttack) const
{
	double dealtDamage=this->calculateTotalDamage(
	this->calculateMitigatedPhysicalDamage(this->calculatePhysicalDamage(aUsedAttack), aDamageReceiver),
	this->calculateMitigatedMagicalDamage(this->calculateMagicalDamage(aUsedAttack), aDamageReceiver));
	if(dealtDamage < 0)
	{
		dealtDamage = 0;
	}
	cout << "DEBUG dealt damage is " << dealtDamage << endl;
	aDamageReceiver.setEntityHealthPoints(aDamageReceiver.getEntityHealthPoints() - dealtDamage);
}

double Entity::calculateTotalDamage(double aPhysicalDamage, double aMagicalDamage) const
{
	double totalDamage = aPhysicalDamage + aMagicalDamage;
	cout << "DEBUG total damage is " << totalDamage << endl;
	return totalDamage;
}

double Entity::calculatePhysicalDamage(Attack& aUsedAttack) const
{
	double physicalDamage = aUsedAttack.getAttackPhysicalDamage() * this->getEntityPhysicalStrength();
	cout << "DEBUG physical damage is " << physicalDamage << endl;
	return physicalDamage;
}

double Entity::calculateMitigatedPhysicalDamage(double aPhysicalDamage, Entity& aDamageReceiver) const
{
	double mitigatedPhysicalDamage = aPhysicalDamage - aDamageReceiver.getEntityPhysicalDefense();
	cout << "DEBUG mitigated physical damage is " << mitigatedPhysicalDamage << endl;
	return mitigatedPhysicalDamage;
}


double Entity::calculateMagicalDamage(Attack& aUsedAttack) const
{
	double magicalDamage = aUsedAttack.getAttackMagicalDamage() * this->getEntityMagicalStrength();
	cout << "DEBUG magical damage is " << magicalDamage << endl;
	return magicalDamage;
}

double Entity::calculateMitigatedMagicalDamage(double aMagicalDamage, Entity& aDamageReceiver) const
{
	double mitigatedMagicalDamage = aMagicalDamage - aDamageReceiver.getEntityMagicalDefense();
	cout << "DEBUG mitigated magical damage is " << mitigatedMagicalDamage << endl;
	return mitigatedMagicalDamage;
}

void Entity::healHealthPoints(Attack& aUsedAttack)
{
	unsigned int healingPoints = aUsedAttack.getAttackHealingPoints();
	cout << "DEBUG healingPoints is " << healingPoints << endl;
	this->setEntityHealthPoints(this->getEntityHealthPoints() + healingPoints);
}




