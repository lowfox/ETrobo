
#pragma once
#include <ISceneLogic.h>
#include <vector>
class ICourse{
    private:
    protected:
        std::vector<ISceneLogic*> m_course;
    public:
        virtual ~ICourse(){};
        virtual bool init(std::vector<int> runSceneNo)=0;
        virtual bool run()=0;
};
