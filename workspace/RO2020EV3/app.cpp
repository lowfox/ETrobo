#include <ev3api.h>
#include <RyujiEv3.h>
#include <System.h>
#include <Logger.h>
#include <Config.h>
#include "app.h"
#include <Course2019Left.h>

// main Task
void main_task(intptr_t unused) {
  // API,ミドルフェア 初期化
  if (!System::Init(ROBOCON_PORT)) {
    System::Exit();
    ext_tsk();
    return;
  }

  // BluetoothTask起動
  act_tsk(BT_TASK);

  // RoboconTask起動
  act_tsk(ROBOCON_TASK);

  // 中央のボタンを押すと強制終了
  while (!ev3_button_is_pressed(ENTER_BUTTON)) {
    tslp_tsk(100);
  }

  // BluetoothTask強制終了
  ter_tsk(BT_TASK);

  // RoboconTask強制終了
  ter_tsk(ROBOCON_TASK);

  // API,ミドルウェア 終了処理
  System::Exit();
}

// robocon_task
void robocon_task(intptr_t exinf) {
  EV3_LOG_INFO("robocon_task Start");

  std::vector<int> runNo = {1, 2, 3};

  ICourse* course2019left = new Course2019Left;

  course2019left->init(runNo);

  course2019left->run();

  delete course2019left;

  EV3_LOG_INFO("robocon_task End");

  // 自タスクを終了
  ext_tsk();
}

// Bluetooth Task
void bt_task(intptr_t unused) {
  EV3_LOG_INFO("bt_task Start");

  while (true) {
    tslp_tsk(100);
  }

  EV3_LOG_INFO("bt_task End");

  // 自タスクを終了
  ext_tsk();

  // clang-format off
}
