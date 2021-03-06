#include "spring.h"

spring::spring(const int& newParticle1, const int& newParticle2, unit newLength, float newStiffness) {
    particle1 = newParticle1;
    particle2 = newParticle2;
    length = newLength;
    stiffness = newStiffness;
}

spring::~spring() {
    //dtor
}

bool spring::getUsingParticle(const int& index) const {
    bool tempBool = false;
    if (particle1 == index) {
        tempBool = true;
    }
    if (particle2 == index) {
        tempBool = true;
    }
    return tempBool;
}

void spring::changeIndex(const int& oldIndex, const int& newIndex) {
    if (particle1 == oldIndex) {
        particle1 = newIndex;
    }
    if (particle2 == oldIndex) {
        particle2 == newIndex;
    }
}

void spring::virtualApplySoftforce() {
    vectorType relativePosition = getPosition(particle2) - getPosition(particle1);
        //vector pointing from particle1 to particle2 with unit length
    float distance = relativePosition.getLength();
    relativePosition = relativePosition.normalize();

    float force;
        //float representing the force pushing the two particles outward

    force = (length - distance) * stiffness;

    applyForce(particle1, relativePosition * force * -1);
    applyForce(particle2, relativePosition * force * +1);
}
