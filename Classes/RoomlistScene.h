#ifndef __ROOMLIST_SCENE__
#define __ROOMLIST_SCENE__

#include "cocos2d.h"

USING_NS_CC;

class RoomlistScene : public Layer
{
public:
	static Scene* createScene();

	virtual bool init();

	void menuCloseCallback(cocos2d::Ref* pSender);

	CREATE_FUNC(RoomlistScene);

};

#endif