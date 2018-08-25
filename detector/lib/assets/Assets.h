/*
 * Assets.h
 *
 *  Created on: 25.08.2018
 *      Author: kath
 */

#ifndef SRC_ASSETS_H_
#define SRC_ASSETS_H_

class Adafruit_FRAM_I2C;

class Assets
{
public:
  Assets();
  virtual ~Assets();

  static const int MAX_ID_LENGTH = 64;
  void setDeviceId(const char* id);
  const char* getDeviceId();

private:
  char m_id[MAX_ID_LENGTH + 1]; // one more to ensure we have termination!
  Adafruit_FRAM_I2C* m_fram;

private: // forbidden default functions
  Assets& operator = (const Assets& src); // assignment operator
  Assets(const Assets& src);              // copy constructor
};

#endif /* SRC_ASSETS_H_ */