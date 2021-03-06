#ifndef SPRING_H
#define SPRING_H

#include <softforces/softforce.h>


class spring : public softforce {
    public:
        spring(const int& newParticle1, const int& newParticle2, unit newLength, float newStiffness);
        virtual ~spring();
        virtual bool getUsingParticle(const int& index) const;
        virtual void changeIndex(const int& oldIndex, const int& newIndex);
    protected:
        void virtualApplySoftforce();
    private:
        unit length;
        float stiffness;
        int particle1;
        int particle2;
};

#endif // SPRING_H
