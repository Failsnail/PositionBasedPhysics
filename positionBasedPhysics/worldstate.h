#ifndef WORLDSTATE_H
#define WORLDSTATE_H

#include "particle.h"
#include "softforce.h"
#include "constraint.h"

#define particlePoolSize_ 20
#define softforcePoolSize_ 20
#define constraintPoolSize_ 20

class particle;
class softforce;
class constraint;

class worldstate {
    public:
        worldstate();
        virtual ~worldstate();

        particle* getParticle(const int& index);
        softforce* getSoftforce(const int& index);
        constraint* getConstraint(const int& index);

        int addParticle(const particle& newParticle);
        bool addSoftforce(softforce* const newSoftforce);
        bool addConstraint(constraint* const newConstraint);

        void removeParticle(const int& index);
        void removeSoftforce(const int& index);
        void removeConstraint(const int& index);

        particle* getParticlePool();
        int getParticlePoolSize() const;
    protected:
    private:
        const int particlePoolSize = particlePoolSize_;
        const int softforcePoolSize = softforcePoolSize_;
        const int constraintPoolSize = constraintPoolSize_;

        /*          //THIS IS THE PLACE WHERE EVERYTIHG GOES WRONG!!!
        bool particlePoolFlag [particlePoolSize_];
        particle particlePool [particlePoolSize_];
        softforce* softforcePool [softforcePoolSize_];
        constraint* constraintPool [constraintPoolSize_];
        //*/
};

#endif // WORLDSTATE_H