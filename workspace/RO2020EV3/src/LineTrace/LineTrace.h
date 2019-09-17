// LineTrace.h
#pragma once
// include�t�@�C��
#include <Drive.h>
#include <array>
#include "MapStateDefinition.h"

//�N���X��`
//�N���X��  :LineTrace
//�@�\��    :MW��LineTrace��PID�l���Z�b�g
//�@�\�T�v  :�e��(�J�[�u��)�ɍœK�����ꂽPID�l���Z�b�g����

class LineTrace {
 public:
  LineTrace();   //�R���X�g���N�^
  ~LineTrace();  //�f�X�g���N�^

  //�֐���   :lineTraceDrive
  //�@�\��   :PID�Z�b�g
  //�@�\�T�v :�}�b�v�󋵂ɍ��킹�čœK��PID�l���Z�b�g
  //����     :MapState runState  :���݂̑��s���(enum��0�`StateEnd�܂ł͈̔�)
  //�߂�l   :int                :����I�� = 0 : �ُ�I�� = -1
  int lineTraceDrive(int runState);

 private:
  //�e��PID�i�[�z��(���Ԃ�MapState(enum)�ɏ���)

  const std::array<PID, 15> m_PID = {{
      {0.15f, 0.0f, 0.1f},   // 1
      {0.31f, 0.0f, 0.2f},   // 2
      {0.2f, 0.0f, 0.13f},   // 3
      {0.3f, 0.0f, 0.15f},   // 4
      {0.27f, 0.0f, 0.14f},   // 5
      {0.32f, 0.0f, 0.23f},  // 6
      {0.24f, 0.000005f, 0.2f},   // 7
      {0.2f, 0.0f, 0.2f},   // 8
      {0.24f, 0.00001f, 0.15f},  // 9
      {0.2f, 0.0f, 0.2f},   // 10
      {0.25f, 0.0f, 0.2f},   // 11
      {0.18f, 0.0f, 0.2f},   // 12
      {0.28f, 0.0f, 0.16f},   // 13
      {0.4f, 0.0f, 0.2f},   // 14
      {0.13f, 0.0f, 0.1f}    // 15
  }};

  // ���x�n
  const std::array<int32, 15> m_Speed = {
      {80, 78, 82, 78, 75, 73, 80, 85, 85, 87, 78, 78, 77, 80, 75}};
};