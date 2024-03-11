#ifndef ENTITY_H
#define ENTITY_H

#include<iostream>
#include<string>
#include"Race.h"
#include"LearnedAttacks.h"

using std::string;

class Entity
{
private:
	// name of the entity
	string entityName;
	// race of the entity
	Race EntityRace;
	// learned attacks of the entity
	LearnedAttacks EntityLearnedAttacks;
	// max number of healthPoint of an entity
	unsigned int entityMaxHealthPoints;
	// number of health points of an entity
	unsigned int entityHealthPoints = entityMaxHealthPoints;
	// speed of an entity
	unsigned int entitySpeed;
	// physical strength of an entity
	double entityPhysicalStrength;
	// magical strength stat of an entity
	double entityMagicalStrength;
	// physical defense stat of an entity
	double entityPhysicalDefense;
	// magical defense stat of an entity
	double entityMagicalDefense;

public:
	// copy constructor
	Entity(const Entity&);
	// default constructor
	Entity();
	// parameterized constructor
	Entity(string, Race, LearnedAttacks);

	// GETTERS & SETTERS
	string getEntityName() const;
	void setEntityName(string);

	Race getEntityRace() const;
	void setEntityRace(Race);

	LearnedAttacks getEntityLearnedAttacks() const;
	void setEntityLearnedAttacks(LearnedAttacks);

	unsigned int getEntityMaxHealthPoints() const;
	void setEntityMaxHealthPoints(unsigned int);

	unsigned int getEntityHealthPoints() const;
	void setEntityHealthPoints(unsigned int);

	unsigned int getEntitySpeed() const;
	void setEntitySpeed(unsigned int);

	double getEntityPhysicalStrength() const;
	void setEntityPhysicalStrength(double);

	double getEntityMagicalStrength() const;
	void setEntityMagicalStrength(double);

	double getEntityPhysicalDefense() const;
	void setEntityPhysicalDefense(double);

	double getEntityMagicalDefense() const;
	void setEntityMagicalDefense(double);

	// ENTITY FUNCTIONS
	// displays all the stats of the entity
	void displayEntityStats() const;
	// allow the entity to choose an attack amongst the displayed ones
	void attackChoice(Entity&);
	// allow the entity to use an item in its inventory
	void inventoryChoice(Entity&);
	// allow the entity to run from a fight
	void runChoice(Entity&);
	// allow an entity to deal damage to another with an attack
	void dealDamage(Entity&, Attack&) const;
	// calculate the total damage dealt by an entity
	double calculateTotalDamage(double aPhysicalDamage, double aMagicalDamage) const;
	// calculate the physical damage dealt by an entity
	double calculatePhysicalDamage(Attack&) const;
	// calculate the mitigated physical damage dealt by an entity to another
	double calculateMitigatedPhysicalDamage(double aPhysicalDamage, Entity&) const;
	// calculate the magical damage dealt by an entity
	double calculateMagicalDamage(Attack&) const;
	// calculate the mitigated magical damage dealt by an entity to another
	double calculateMitigatedMagicalDamage(double aMagicalDamage, Entity&) const;
	// allow an entity to heal itself
	void healHealthPoints(Attack&);
};


#endif