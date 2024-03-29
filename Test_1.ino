int Motor_right_PWM = 10;  //   0 (min speed) - 255 (max speed) 
int Motor_right_direction = 5;  //   0 Forward - 1 Reverse
int Motor_left_PWM = 9;    //   0 (min speed) - 255 (max speed)  
int Motor_left_direction = 6;   //   0 Forward - 1 Reverse
#define Forward 1
#define Reverse 0

int Left_encoder = 2;
int Right_encoder = 3;
int Left_forward_speed=200;
int Right_forward_speed=200;
int Left_reverse_speed=200;
int Right_reverse_speed=200;

int direction = 0;
float right_dir;
float left_dir;

void forward() {
  analogWrite(Motor_right_PWM,Right_forward_speed); // right motor
  digitalWrite(Motor_right_direction,Forward); //right
  analogWrite(Motor_left_PWM,Left_forward_speed); // left 
  digitalWrite(Motor_left_direction,Forward); //left
}

void Stop(){ // set speeds to 0
  analogWrite(Motor_right_PWM,0); // right motor
  analogWrite(Motor_left_PWM,0); // left 
  //MsTimer2::start();
}

void setup() {
  Serial.begin(9600);
  pinMode(Motor_left_PWM, OUTPUT);
  pinMode(Motor_right_PWM, OUTPUT);
}

void loop() {
  forward();
  delay(500);
  Stop();
}

