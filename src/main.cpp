#include <Arduino.h>

#define PWM_PIN      6
#define BUZZER_FREQ  4000  // 4kHz 鸣叫频率
#define PWM_RES      8

int channel = 0;

void setup() {
  ledcSetup(channel, BUZZER_FREQ, PWM_RES);
  ledcAttachPin(PWM_PIN, channel);
  
  // 发出声音 2 秒
  ledcWrite(channel, 128);  // 50% 占空比
  delay(2000);
  // ledcWrite(channel, 0);    // 关闭
}

void loop() {
  // 其他逻辑...
  delay(1000);
}