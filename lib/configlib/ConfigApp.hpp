#ifndef CanfigApp_hpp
#define CanfigApp_hpp

#include <ArduinoJson.h>
#include <Preferences.h>
#include <ArduinoJson.h>

class ConfigApp
{
  private:
  // Config Settings
  Preferences preferences;
  char* _app_name;

  public:
  uint64_t chipid;
  char* deviceId;
  String dname;
  bool wifiEnable;
  String ssid;   
  String pass;   
  String ifxdb;  
  String ifxip;  
  uint16_t ifxpt;
  String ifxtg;
  String ifusr;
  String ifpss;
  String apiusr;
  String apipss;
  int stime;
  double lat;
  double lon;
  float alt;
  float spd;
  bool isNewIfxdbConfig;
  bool isNewAPIConfig;
  bool isNewWifi;

  void init(const char app_name[]);

  void reload();

  bool save(const char *json);
  
  String getCurrentConfig();

  void reboot ();

};

#endif