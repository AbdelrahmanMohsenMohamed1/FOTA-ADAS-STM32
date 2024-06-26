/*
 * Data_Manager.h
 *
 *  Created on: May 1, 2024
 *      Author: Abdelrahman
 */

#ifndef INC_DATA_MANAGER_H_
#define INC_DATA_MANAGER_H_


#include "main.h"
#include "WaterSensor.h"
#include "IR.h"
#include "dht22.h"

typedef struct
{
	// Ultrasonic sensor readings
	uint8_t FrontUltraReading;       // Reading from the front ultrasonic sensor
	uint8_t RearUltraReading;        // Reading from the rear ultrasonic sensor
	uint8_t RightSideUltraReading;   // Reading from the right side ultrasonic sensor
	uint8_t LeftSideUltraReading;    // Reading from the left side ultrasonic sensor

	// Infrared sensor readings
	uint8_t FrontIR;                 // Reading from the front infrared sensor
	uint8_t RearIR;                  // Reading from the rear infrared sensor
	uint8_t RightIR;                 // Reading from the right infrared sensor
	uint8_t LeftIR;                  // Reading from the left infrared sensor

	// Water sensor reading
	uint8_t WaterSensorReading;      // Reading from the water sensor

	// DHT sensor temperature reading
	uint8_t DHT_TempReading;        // Reading from the DHT temperature sensor

} Data_Manager_t;

/**
 * @brief Collects all types of data and updates the data manager.
 *
 * @param DataManager The data manager structure to update with collected data.
 */
void Service_DataCollectAll(Data_Manager_t DataManager);

/**
 * @brief Collects ultrasonic sensor readings and updates the data manager.
 *
 * @param DataManager The data manager structure to update with ultrasonic readings.
 */
void Service_DataCollectUltraReading(Data_Manager_t DataManager);

/**
 * @brief Collects infrared sensor readings and updates the data manager.
 *
 * @param DataManager The data manager structure to update with infrared readings.
 */
void Service_DataCollectIRReading(Data_Manager_t DataManager);

/**
 * @brief Collects DHT sensor temperature reading and updates the data manager.
 *
 * @param DataManager The data manager structure to update with DHT temperature reading.
 */
void Service_DataCollectDHTReading(Data_Manager_t DataManager);

/**
 * @brief Collects water sensor reading and updates the data manager.
 *
 * @param DataManager The data manager structure to update with water sensor reading.
 */
void Service_DataCollectWaterReading(Data_Manager_t DataManager);



#endif /* INC_DATA_MANAGER_H_ */
