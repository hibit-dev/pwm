// -------------------------------------------------
// Copyright (c) 2021 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define PWM_PIN 6

void setup()
{
  pinMode(PWM_PIN, OUTPUT);
}

void loop()
{
  analogWrite(PWM_PIN, 127);
}
