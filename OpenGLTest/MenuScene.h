#pragma once

#include "Scene.h"
#include "UIManager.h"
#include "GameObject.h"
#include "Renderable.h"
#include "AssetLoader.h"
#include "EventManager.h"
#include <vector>

class MenuScene : public Scene, public ISubscriber {
public:
    void InitScene();
    void Update(const float delta);
    void CleanUp();

    void notify(EventName eventName, Param *params); // overrides ISubscriber::notify
private:
    GameObject *_background;
    std::vector<Model> _models;
    GameObject *c;
    int _currModel;
    int _currPlayer;

    glm::vec4 playerColors[4] = {
    {0.447, 0.098, 0.745, 1.0},
    {0.922, 0.373, 0, 1.0},
    {0.047, 0.714, 0.604, 1.0},
    {0.922, 0.878, 0, 1.0},
    };
};

