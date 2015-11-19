#ifndef EFFECT_H
#define EFFECT_H

#include "main.h"

namespace alure {

class ALContext;

class ALEffect : public Effect {
    ALContext *const mContext;
    ALuint mId;
    ALenum mType;

public:
    ALEffect(ALContext *context, ALuint id) : mContext(context), mId(id), mType(AL_NONE)
    { }
    virtual ~ALEffect() { }

    virtual void setReverbProperties(const EFXEAXREVERBPROPERTIES &props) final;

    virtual void destroy() final;

    ALContext *getContext() const { return mContext; }
    ALuint getId() const { return mId; }
};

} // namespace alure

#endif /* EFFECT_H */
