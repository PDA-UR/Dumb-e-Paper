#ifndef __STORAGE_H_INCLUDED__
#define __STORAGE_H_INCLUDED__

#include <EEPROM.h>
#include "main.hpp"

/**
 * @brief Reads and writes SSID and password from / to flash
 */
class Storage
{
  public:
    /**
     * @brief Writes SSID and password to flash
     * 
     * @param ssid SSID to save
     * @param password password to save
     */
    static void write(char *ssid, char *password);

    /**
     * @return char* SSID
     */
    static char *readSSID();

    /**
     * @return char* password
     */
    static char *readPassword();

  private:
    static void read();
    static char *ssid;
    static char *password;
};

#endif
