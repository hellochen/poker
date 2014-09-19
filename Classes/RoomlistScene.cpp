#include "RoomlistScene.h"
#include "extensions/cocos-ext.h"

USING_NS_CC_EXT;



Scene* RoomlistScene::createScene()
{
	auto scene = Scene::create();
	auto layer = RoomlistScene::create();
	scene->addChild(layer);

	return scene;
}

bool RoomlistScene::init()
{
	if(!Layer::init()){
		return false;
	}

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 visibleOrigin = Director::getInstance()->getVisibleOrigin();
	
	auto bgSprite = Scale9Sprite::create("roomlist_bg.jpg");
	bgSprite->setContentSize(visibleSize);
	bgSprite->setPosition(Vec2(visibleOrigin.x + visibleSize.width / 2, visibleOrigin.y + visibleSize.height / 2));
	this->addChild(bgSprite);

	return true;
}

void RoomlistScene::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
	return;
#endif

	Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}




