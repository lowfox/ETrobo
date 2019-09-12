#include "LookupScene.h"

LookupScene::LookupScene(ISceneChanger* sceneChanger) : IScene(sceneChanger) {}

bool LookupScene::init() { return true; }

bool LookupScene::run() {
  // LookupCode

  //受け渡し時に呼ぶ
  return change(SceneID::Garage);
}
