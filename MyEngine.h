//
// Created by bobini on 15.01.23.
//

#ifndef LABSOGRE_MYENGINE_H
#define LABSOGRE_MYENGINE_H

using namespace Ogre;
using namespace OgreBites;

class MyEngine : public ApplicationContext, public InputListener
{
public:
    MyEngine();
    ~MyEngine() override {};
    void setup() override;
};


#endif //LABSOGRE_MYENGINE_H
